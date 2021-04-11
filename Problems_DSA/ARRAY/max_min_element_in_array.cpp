#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
    return 0;
}
int main()
{
    // SIZE OF ARRAY
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; // ARRAY INPUT
    }
    
    int maxE=INT_MIN,minE=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxE)
        {
            maxE=a[i];
        }
        if(a[i]<minE)
        {
            minE=a[i];
        }
    }
    
    // PRINT OUTPUT MAX MIN
    cout<<"Max element in array is : "<<maxE<<endl;
    cout<<"Min element in array is : "<<minE<<endl;
    return 0;
}
