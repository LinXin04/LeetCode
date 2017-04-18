class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int right=0;
        if(n==0||n==1)return true;
        for(int i=0;i<=right&&right<=n-1;i++)
            right=max(right,i+nums[i]);
        return right>=(n-1);
    }
};
