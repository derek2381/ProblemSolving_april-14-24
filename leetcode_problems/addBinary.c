// problem link
// https://leetcode.com/problems/add-binary

// solution - 1

class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";

        int n1 = a.length()-1, n2 = b.length()-1, c = 0;

        while(n1 >= 0 || n2 >= 0){
            int val = 0;

            if(n1 >= 0 && a[n1] == '1'){
                val++;
            }

            if(n2 >= 0 && b[n2] == '1'){
                val++;
            }

            if(val == 0 && c == 0){
                res = "0"+res;
                c = 0;
            }else if(val == 0 && c == 1){
                res = "1" + res;
                c = 0;
            }else if(val == 2 && c == 0){
                res = "0" + res;
                c = 1;
            }else if(val == 2 && c == 1){
                res = '1' + res;
                c = 1;
            }else if(val == 1 && c == 0){
                res = '1' + res;
                c = 0;
            }else if(val == 1 && c == 1){
                res = '0' + res;
                c = 1;
            }
            // else{
            //     res = "0" + res;
            // }
            n1--;
            n2--;
        }


        if(c == 1){
            res = '1' + res;
            c = 0;
        }

        return res;
    }
};

// solution - 2

class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int n1 = a.size() - 1, n2 = b.size() - 1, carry = 0;

        while (n1 >= 0 || n2 >= 0) {
            carry += (n1 >= 0) ? a[n1--] - '0' : 0;
            carry += (n2 >= 0) ? b[n2--] - '0' : 0;
            res = to_string(carry % 2) + res;
            carry /= 2;
        }

        return carry ? "1" + res : res;
    }
};
