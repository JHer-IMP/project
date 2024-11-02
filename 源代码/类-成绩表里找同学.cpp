#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Students
{
    public:
    string name;
    int chinese,math,eng;
    Students(string n,int c,int m,int e):name(n),chinese(c),math(m),eng(e) {}  //构造函数，用于初始化
    int talscore() const
    {
        return chinese + math + eng;
    }
};


bool compareStudents(const Students &a, const Students &b)  //比较器
{
    if (a.talscore()!=b.talscore()) return a.talscore() > b.talscore(); // 总分高的排前面
    if (a.chinese!=b.chinese) return a.chinese > b.chinese;  //语文高的前
    if (a.math!=b.math) return a.math > b.math;  //数学高的前
    if (a.eng!=b.eng) return a.eng > b.eng;  //英语高的前
    return a.name < b.name;  //最后是姓名字典排序
}

int main()
{ 
    int n;
    cin>>n;
    vector<Students> vec;  //存储学生信息
    for (int i =0;i<n;i++)
    {
        string name;
        int chinese,math,eng;
        cin>>name>>chinese>>math>>eng;
        vec.emplace_back(name,chinese,math,eng);  //在数组中直接构造对象
    }
    int k;
    cin>>k;
    sort(vec.begin(), vec.end(), compareStudents);  //将数组中元素按要求规则排序
    cout<<vec[k-1].name<<" "<<vec[k-1].talscore()<<endl;  //数组编号从0开始，所以k要-1以对应预期学生
}