#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() {
  int t;
    cin>>t;
    while(t--)
        {
        string name;
        cin>>name;
        int i,count=0;
        int len=name.size();
        for(i=0;i<len-1;i++)
            {
            if(name[i]==name[i+1])
                {
                count++;
               
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
