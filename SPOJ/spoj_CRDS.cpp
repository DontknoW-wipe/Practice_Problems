#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M=1000007;
void solve()
{
 	long long int n;
 	cin>>n;
 	cout<<(n*((3*n)+1)/2)%M<<endl;
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