#include "D:/Leetcode/include/Leetcode/allInclude.h"

class Solution {
public:
    vector<int> partitionLabels(string S) {
        int size=S.size();
        int last[26];
        for(int i=0; i<size; ++i){
            last[S[i]-'a']=i;
        }

        int start=0, end=0;
        vector<int> res;
        for(int i=0; i<size; ++i){
            end=max(end,last[S[i]-'a']);
            if(i==end){
                res.push_back(end-start+1);
                start=end+1;
            }
        }

        return res;
    }
};