#include "D:/Leetcode/include/Leetcode/allInclude.h"

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size=flowerbed.size();
        int cnt=0, prev=-1;
        for(int i=0; i<size; ++i) {
            if(flowerbed[i]==1){
                if(prev<0){
                    cnt+=i/2;
                }else{
                    cnt+=(i-prev-2)/2;
                }
                if(cnt>=n)
                    return true;
                prev=i;
            }
        }
        if(prev<0)
            cnt+=(size+1)/2;
        else
            cnt+=(size-prev-1)/2;
        
        return cnt>=n;
    }
};