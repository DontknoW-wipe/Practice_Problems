    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	long long int c;
    	cin>>c;
    	long long int t=c,v=0;
     
    	while(t>0)
    	{
    		t=t/2;
    		v++;
    	}
    	long long int a=pow(2,v-1)-1;
    	long long int b=a^c;
    	cout<<a*b<<endl;
    	return 0;
    }
