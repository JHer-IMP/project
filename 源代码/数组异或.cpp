#include <iostream>
#include <vector>
using namespace std;

int main()
{
    size_t m,n;
    cin>>m;
    vector<size_t> vec1;
    for (size_t i=0;i<m;i++)
    {
        size_t j;
        cin>>j;
        vec1.push_back(j);
    }
    cin>>n;
    vector<size_t> vec2;
    for (size_t i=0;i<n;i++)
    {
        size_t j;
        cin>>j;
        vec2.push_back(j);
    }
    for (size_t i=0;i<vec1.size();i++)
    {
        for (size_t j=0;j<vec2.size();j++)
        {
            if (vec1[i]==vec2[j])
            {
                vec1.erase(vec1.begin() + i);
                i--;
                vec2.erase(vec2.begin() + j);
                j--;
            }
        }
    }
    int vecsize = vec1.size();
    for (size_t i=vecsize;i<vecsize+vec2.size();i++)
    {
        vec1.push_back(vec2[i-vecsize]);
    }
    for (size_t i=0;i<vec1.size();i++)
    {
        for(size_t j=i+1;j<vec1.size();j++)
        {
            if (vec1[i]>vec1[j])
            {
                size_t t = vec1[i];
                vec1[i]=vec1[j];
                vec1[j] = t;
            }
        }
    }
    for (size_t n:vec1)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}