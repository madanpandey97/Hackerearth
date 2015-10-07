#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,sum=0,i=1;
		cin>>n;
		while(sum<n)
		{    
			sum=sum+ (i*(i+1)*(i+1));
			if(sum<n)
			{
				i=i+1;
			}
			else{
				break;
			}
			
		
		}
		if((i-1)==0)
		{
				cout<<"0"<<endl;
			cout<<"Draw"<<endl;
			
		}
		else if( (i)%2 != 0)
		{
			cout<<i-1<<endl;
			cout<<"Ketan"<<endl;
		}
		else
		{
			cout<<i-1<<endl;
			cout<<"Dhruv"<<endl;
 
				}
	}
	return 0;
}
