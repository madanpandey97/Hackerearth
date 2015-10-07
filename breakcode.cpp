#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int num,i,sum=0;
cin>>num;
for(i=3;i<num;i++)
{
	if(i%3==0)
	{
		sum+=i;
	}
	else if(i%5==0)
	{
		sum+=i;
	}
	else
	continue;
}
cout<<sum<<endl;
return 0;
 
}
 
