//HOUSE ROBBER BY MEMOIZATION

class Solution {
public:

    int t[101];
    int solution(vector<int>& nums, int i , int n){
        if(i>=n) return 0;
        if(t[i] != -1) return t[i];

        int steal = nums[i] + solution(nums,i+2,n);
        int skip = solution(nums,i+1,n);

        return t[i] = max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset(t,-1,sizeof(t));
        return solution(nums,0,n);
    }
};