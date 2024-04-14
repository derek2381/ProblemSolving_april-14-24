// problem link
// https://leetcode.com/problems/reverse-bits


public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
       int res = 0;

       int k = 31;

       while(k >= 0){
        if((n&1) != 0){
            res = res | (1 << k);
        }
        k--;
        n >>= 1;
       }

       return res;
    }
}
