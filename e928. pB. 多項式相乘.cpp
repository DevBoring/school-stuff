#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> v1;
    vector<int> v2;
    int n1, n2, n;
    cin>>n1;
    for(int i = 0; i < n1+1; i++)
    {
        cin>>n;
        v1.push_back(n);
    }
    cin>>n2;
    for(int i = 0; i < n2+1; i++)
    {
        cin>>n;
        v2.push_back(n);
    }
    cout<<n1+n2<<"\n";
    int v3[n1+n2+1] = {};
    for(int i = 0; i <= n1+n2; i++)
    {
        for(int j = 0; j<=n1; j++)
        {
            for(int k = 0; k<=n2; k++)
            {
                if(j+k == i)
                {
                    v3[i] = v3[i] + v1[j] * v2[k];
                }
            }
        }
    }
    for (auto e:v3)
    {
        cout<<e<<" ";
    }


























}
