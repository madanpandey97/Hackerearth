#include <iostream>
    #include<stdlib.h>
    #include<string>
    #include<cstdio>
    #include<bits/stdc++.h>
    using namespace std;
     
     
    int main()
    {
    int t;
    cin>>t;
    while(t--)
    {
    string x,y;
    cin>>x;
    cin>>y;
    int ct=0;
    int maxi=INT_MAX;
     
     
    if(x.size()>y.size())
    {
    string temp=x;
    x=y;
    y=temp;
     
    }
    for(int i=0;i<=(y.size()-x.size());i++)
    {
    ct=0;
    for(int j=0;j<x.size();j++)
    {
    if(x[j]!=y[j+i])
    ct++;
    }
    if(ct<maxi)
    maxi=ct;
    }
     
    cout<<maxi<<endl;
    }
     
    return 0;
    }
