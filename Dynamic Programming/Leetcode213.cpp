//HOUSE ROBBER 2


class Solution {
public:
int t[101];
int solve(vector<int>&nums , int i , int n){
    if(i>n) return 0;
    if(t[i] != -1) return t[i];

    int take = nums[i] + solve(nums,i+2,n);
    int skip = solve(nums,i+1,n);

    return t[i] = max(take,skip);
}
    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);

        memset(t,-1,sizeof(t));

        //CASE1:- Take 0th house
        int index_0 = solve(nums,0,n-2);
         memset(t, -1, sizeof(t));
      

        //CASE2:- Take 1st house
        int index_1 = solve(nums,1,n-1);

        return max(index_0,index_1);

    }
};