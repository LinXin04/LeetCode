class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        result.push_back(vector<int>());
        if(nums.size()==0) return result;
        
        sort(nums.begin(),nums.end());
        result.push_back({nums[0]});
        int laststart=1;
        for(int i=1;i<nums.size();i++)
        {
            int count=result.size();
            int j=nums[i]==nums[i-1]?laststart:0;
            for(;j<count;j++)
            {
                result.push_back(result[j]);
                result.back().push_back(nums[i]);
            }
            laststart=count;
        }
       return result; 
    }
};
