// LINK : https://practice.geeksforgeeks.org/problems/square-root/1#

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int sum=0;
        for(long long int i=0;i*i<=x;i++)
        {
            sum=i;
        }
        return sum;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
