class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        //�ݹ鷨
        vector<vector<int>> result;
        if(nums.size()==0) return result;
        result.push_back(vector<int>());
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            int n=result.size();
            for(int j=0;j<n;j++)
            {
                result.push_back(result[j]);
                result[n+j].push_back(nums[i]);
            }
        }      
     return result;   
    }
};
