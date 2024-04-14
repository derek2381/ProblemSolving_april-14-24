// problem link
// https://leetcode.com/problems/binary-watch/description/

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
      vector<string> res;
      set<string> st;

      string str1;
      for(int i = 0; i < 12;i++){
        str1 = ":00";
        int c = __builtin_popcount(i);
        if(c == turnedOn){
            str1 = to_string(i)+str1;
            st.insert(str1);
        }
      }

        for(int i = 0;i < 59;i++){
            str1 = "0:";
            int c = __builtin_popcount(i);
            if(c == turnedOn){
                if(i < 10){
                    str1 = str1 + "0" + to_string(i);
                }else{
                    str1 = str1 + to_string(i);
                }

                // res.push_back(str1);
                st.insert(str1);
            }
        }


        for(int i = 0;i < 12;i++){
            for(int j = 0;j < 60;j++){
                str1 = "";
                int c1 = __builtin_popcount(i);
                int c2 = __builtin_popcount(j);

                if((c1 + c2) == turnedOn){
                    str1 = to_string(i);
                    if(j < 10){
                        str1 = str1 + ":0" + to_string(j);
                    }else{
                        str1 = str1 + ":" + to_string(j);
                    }

                    // res.push_back(str1);
                    st.insert(str1);
                }
            }
        }

        for(string val : st){
            res.push_back(val);
        }

        return res;


    }
};
