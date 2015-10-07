#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--)
{
int n,count=0;
cin>>n;
long long int a[n],i;
for(i=0;i<n;i++)
{
cin>>a[i];
 
}
for(i=0;i<n-1;i++)
{
if(a[i]>a[i+1])
{
count++;
}
}
cout<<count<<endl;
}
return 0;
}
