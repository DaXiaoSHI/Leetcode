#include "D:/Leetcode/include/Leetcode/allInclude.h"

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int size=points.size();
        if(points.empty()) return 0;
        sort(points.begin(), points.end(), [](vector<int>&a, vector<int>&b){return a[1]<b[1];});

        int cnt=1, prev=points[0][1];
        for(int i=1; i<size; ++i){
            if(points[i][0]>prev){
                ++cnt;
                prev=points[i][1];
            }
        }
        return cnt;
    }
};