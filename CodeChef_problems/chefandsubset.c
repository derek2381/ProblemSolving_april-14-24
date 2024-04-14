// problem link
// https://www.codechef.com/problems/CHEFSETC

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    vector<int> arr(4);

	    for(int i = 0; i< 4;i++){
	        cin >> arr[i];
	    }

	    int total_val = 1 << 4;
	    bool flag = false, check = false;

	    for(int i = 1;i < total_val;i++){

	        int temp = i, k = 0;
	        long long int sum = 0;

	        while(temp > 0){
	            if((temp & 1) != 0){
	                sum += arr[k];
	               // cout << arr[k] << " ";
	            }
	            k++;
	            temp >>= 1;
	        }

	        if(sum == 0){
	            flag = true;
	            break;
	        }

	       // cout << "\n";
	    }

	   // cout << "_____________\n";

	    if(flag == true){
	        cout << "Yes\n";
	    }else{
	        cout << "No\n";
	    }


	}
	return 0;
}
