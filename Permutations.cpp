class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        int length=nums.size();
        int times=fac(length);
        for(int t=0;t<=times-1;t++)
        {
            nextPermutation(nums);
            result.push_back(nums);
        }
        
        return result;
    }
   void nextPermutation(vector<int>& nums) {

        int length=nums.size();
        if(length<=1) return ;
        
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
       // return nums;
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
    int fac(int n)
    {
        if(n==1) return 1;
        else 
        {return n*fac(n-1);}
    }
};
