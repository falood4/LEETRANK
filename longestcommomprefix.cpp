#include <algorithm>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int minlen = min(strs.front().size(), strs.back().size());
        string prefix="";

        for(int i=0;i<minlen;i++){
            if(strs.front()[i]==strs.back()[i]){
                prefix=prefix+strs.front()[i];
            }else{
                break;
            }   
        }
        return prefix;
    }
};
