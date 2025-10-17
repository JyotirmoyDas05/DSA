class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }

        int sum_max = nums[0];
        int sum_current = nums[0];

        for(int i = 1; i < nums.size(); ++i){
            int n = nums[i];
            sum_current = max(sum_current + n, n);
            sum_max = max(sum_max, sum_current);
        }
        
        return sum_max;
    }
};