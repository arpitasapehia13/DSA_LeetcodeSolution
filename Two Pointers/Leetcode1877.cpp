
// Minimize Maximize Pair Sum In Array

class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = 0;

        int smallest = 0;
        int largest = n - 1;

        while (smallest < largest)
        {
            int sum = nums[smallest] + nums[largest];
            result = max(result, sum);
            smallest++;
            largest--;
        }

        return result;
    }
};