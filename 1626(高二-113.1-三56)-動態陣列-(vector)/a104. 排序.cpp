#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,n1;
    while(cin>>n)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin>>n1;
            v.push_back(n1);
        }
        sort(v.begin(), v.end());
        for (auto e:v)
        {
            cout<<e<<" ";
        }
        cout<<"\n";
    }
}
