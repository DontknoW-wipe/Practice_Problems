#include<bits/stdc++.h>
using namespace std;
// #define int int

void solve()
{
 	int n;
 	cin>>n;
 	if(n==0||n==1)
 	{
 		cout<<1<<endl;
 		return;
 	}
 	int a[200]={0};
 	int k=0;
 	a[0]=1;
 	int carry=0;
 	for(int i=2;i<=n;i++)
 	{
 		// cout<<k<<endl;
 		for(int j=0;j<200;j++)
 		{
 			int g=a[j]*i+carry;
 			a[j]=g%10;
 			carry=g/10;
 		}
 		carry=0;
 	}
 	int y=0;
 	for(int i=199;i>=0;i--)
 	{
 		if(a[i]>0)
 		{
 			y=1;
 		}
 		if(y==0) continue;
 		cout<<a[i];
 	}
 	cout<<endl;
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