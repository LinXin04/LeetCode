class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int length=nums.size();
        if(length<=1) return;
        
        //找到升序点
        int i=length-2;
        while(i>=0 && nums[i]>=nums[i+1]) i--;
        
        //将升序点与后面比它大的最小的数值交换
        if(i>=0)
        {
            int j=length-1;
            while(j>i && nums[i]>=nums[j]) j--;
            swap(nums[i],nums[j]);
            reverse(nums,i+1,length-1);
        }
        else
            reverse(nums,0,length-1);
    }
    
    void reverse(vector<int> &nums,int i,int j)
    {
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};
