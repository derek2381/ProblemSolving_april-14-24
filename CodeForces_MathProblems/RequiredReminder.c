// problem link
// https://codeforces.com/problemset/problem/1374/A

#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;

        int rem = n % x;
        int val = (rem - y + x) % x;
        n -= val;
        cout << n << endl;
    }
}
