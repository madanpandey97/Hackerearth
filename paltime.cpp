#include<bits/stdc++.h>
using namespace std;
bool IsPalindrome(string);
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{  int count=0,i,j;
		string a,b;
		bool flag;
 
		cin>>a;
		cin>>b;
		int l=a.length();
		for(i=0;i<=l;i++)
		{
			a.insert(i,b);
 
           flag=IsPalindrome(a);
           if(flag==true)
           {
           count++;
           }
           //cout<<a<<endl;
           a.erase(i,b.length());
           //cout<<a<<endl;
		}
 
		cout<<count<<endl;
	}
	return 0;
}
 
bool IsPalindrome(string s) {
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i]) return false;
    }
    return true;
}
