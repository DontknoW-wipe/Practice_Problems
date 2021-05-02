#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
 	ll n;
 	cin>>n;
 	ll sum=0;
 	while(n>0)
 	{
 		sum+=(n/5);
 		n=n/5;
 	}
 	cout<<sum<<endl;
    // return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}