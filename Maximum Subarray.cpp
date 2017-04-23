class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int f=0;
        int result=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            f=max(f+nums[i],nums[i]);
            result=max(result,f);
        }
        return result;
    }
};
