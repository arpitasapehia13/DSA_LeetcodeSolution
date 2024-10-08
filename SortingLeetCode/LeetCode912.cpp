// SORT AN ARRAY

class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int &num : nums)
        {
            mp[num]++;
        }
        int minele = *min_element(begin(nums), end(nums));
        int maxele = *max_element(begin(nums), end(nums));
        int i = 0;
        for (int num = minele; num <= maxele; num++)
        {
            while (mp[num] > 0)
            {
                nums[i] = num;
                i++;
                mp[num]--;
            }
        }
        return nums;
    }
};