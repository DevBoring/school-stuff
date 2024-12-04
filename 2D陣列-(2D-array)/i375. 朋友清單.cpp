#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,m,o;
    cin>>n>>k;
    vector<int> a[n];
    for (int i = 0; i < k; i++)
    {
        cin>>m;
        cin>>o;
        a[m-1].push_back(o);
        a[o-1].push_back(m);
    }
    for (int i = 0; i < n; i++)
    {
        sort(a[i].begin(), a[i].end());
        for (auto e:a[i])
        {
            cout<<e<<" ";
        }
        cout<<"\n";
    }
}