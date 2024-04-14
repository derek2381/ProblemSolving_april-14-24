// problem link
// https://www.codechef.com/problems/APPENDOR

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--){
	    int n, x, val = 0, res = 0;
	    cin >> n >> x;
	    vector<int> arr(n);

	    for(int i = 0; i < n;i++){
	        cin >> arr[i];
	        val |= arr[i];
	    }

	    res = (x ^ val);

	    if((val | res) == x){
	        cout << res << endl;
	    }else{
	        cout << -1 << endl;
	    }

	}
	return 0;
}
