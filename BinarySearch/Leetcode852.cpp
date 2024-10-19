class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {

        // USING LINEAR APPROACH

        int n = arr.size();
        int i = 0;

        while (i < n - 1 && arr[i] < arr[i + 1])
        {
            i++;
        }

        return i;
    }
};