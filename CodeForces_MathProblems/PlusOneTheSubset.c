// problem set
// https://codeforces.com/problemset/problem/1624/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i = 0; i < n;i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int turns = arr[n-1] - arr[0];

        cout << turns << endl;
    }
}
