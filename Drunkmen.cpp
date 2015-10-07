#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	char hall;
    	int fdis,bdis,fstep,bstep,tim;
    	int t,ti;
    	cin>>hall>>fdis>>bdis>>fstep>>bstep>>tim;
    	if(fstep>bstep)
    	{
    		ti=(((fdis-fstep)*fstep*tim)+((fdis-fstep)*bstep*tim)+fstep*tim);
    		cout<<"f"<<ti<<endl;
    	}
    	else
    	{
    		t=(((bdis-bstep)*bstep*tim)+((bdis-bstep)*fstep*tim)+bstep*tim);
    		cout<<"B"<<t<<endl;
    	}
    }
    return 0;
    
}
