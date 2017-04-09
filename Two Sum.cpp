class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> mapping;
        for(int i=0;i<nums.size();i++)
            mapping[nums[i]]=i;
        for(int i=0;i<nums.size();i++)
        {
            const int gap=target-nums[i];
            if(mapping[gap]>i && mapping.find(gap)!=mapping.end())
            {
                result.push_back(i);
                result.push_back(mapping[gap]);
            }
        }
        return result;
    }
};
