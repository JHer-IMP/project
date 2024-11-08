#include <iostream>
#include <vector>
using namespace std;

int main()
{
    size_t m,n;
    cin>>m;
    vector<size_t> vec1;
    for (size_t i =0;i<m;i++)
    {
        size_t k;
        cin>>k;
        vec1.push_back(k);
    }
    cin>>n;
    vector<size_t> vec2;
    for (size_t i =0;i<n;i++)
    {
        size_t k;
        cin>>k;
        vec2.push_back(k);
    }
    for (size_t i=0;i<vec1.size();i++)
    {
        for (size_t j=0;j<vec2.size();j++)
        {
            if (vec1[i]==vec2[j]) vec1.erase(vec1.begin()+i);
        }
    }
    for (size_t i = 0;i<vec1.size();i++)
    {
        for (size_t j = i+1;j <vec1.size();j++)
        {
            if (vec1[i]>vec1[j])
            {
                size_t temp = vec1[i];
                vec1[i] = vec1[j];
                vec1[j] = temp;
            }
        }
    }
    for (size_t i =0;i<vec1.size();i++)
    {
        cout <<vec1[i];
        if (i<vec1.size()-1) cout<<" ";
    }
    return 0;
}