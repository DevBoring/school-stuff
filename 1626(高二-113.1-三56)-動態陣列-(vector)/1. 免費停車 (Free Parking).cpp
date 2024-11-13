#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int> v;
        cin>>a>>b>>c;
        for(int j=a+1; j<b; j++)
        {
            if(j%c != 0)
            {
                v.push_back(j);
            }
        }

        for (auto e:v)
        {
            cout<<e<<" ";
        }
        cout<<"\n";

    }
}
