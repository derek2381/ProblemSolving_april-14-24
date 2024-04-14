// problem link
// https://codeforces.com/problemset/problem/1367/B

#include <bits/stdc++.h>

using namespace std;


 int main(){
     int t;
     cin >> t;
     while(t--){
         int n, counte = 0,counto = 0;
         cin >> n;
         vector<int> arr(n);

         for(int i = 0;i < n;i++){
             cin >> arr[i];

             if(i % 2 == 0 && (arr[i] % 2) != 0){
                 counte++;
             }else if(i%2 == 1 && (arr[i] % 2) != 1){
                 counto++;
             }
         }

         if(counte == counto){
             cout << counte << endl;
         }else{
             cout << -1 << endl;
         }

     }
 }
