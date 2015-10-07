#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
#define mx 1000
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--) {
        int cnt = 0;
        int a;
        int n,k;
        cin >> n >> k;
        while(n--) {
         
            cin >> a;
            if(a <= 0)
                ++cnt;
        }
        if(cnt >= k)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
