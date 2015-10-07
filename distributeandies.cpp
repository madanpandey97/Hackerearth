#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,z;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
		{
			z=a[i];
			
			
		}
		else
		continue;
		
		}
		cout<<z<<endl;
	}
	
	return 0;
}
