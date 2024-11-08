#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<size_t> vec1;
    vector<size_t> vec2;
    while (true)
    {
        int n;
        cin>>n;
        if (n==-1) break;
        vec1.push_back(n);
    }
    while (true)
    {
        int n;
        cin>>n;
        if (n==-1) break;
        vec2.push_back(n);
    }
    for (size_t i = 0;i<vec2.size();i++)
    {
        vec1.emplace_back(vec2[i]);
    }
    for (size_t i = 0;i<vec1.size();i++)
    {
        for (size_t j =i+1;j<vec1.size();j++)
        {
            if (vec1[i]==vec1[j]) vec1.erase(vec1.begin() + j);
        }
    }
    for (size_t i = 0;i<vec1.size();i++)
    {
        for (size_t j =i+1;j<vec1.size();j++)
        {
            if (vec1[i]>vec1[j])
            {
                size_t temp = vec1[i];
                vec1[i] = vec1[j];
                vec1[j] = temp;
            }
        }
    }
    for (size_t n: vec1)
    {
        cout<<n<<" ";
    }
}