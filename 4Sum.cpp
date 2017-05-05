class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        if(nums.size()<4) return result;
        sort(nums.begin(),nums.end());
        int last=nums.size()-1;
        
        for(int a=0;a<last-2;a++)
        {
            if(a>0 && nums[a]==nums[a-1]) continue;
            for(int b=a+1;b<last-1;b++)
            {
                if(b>a+1 && nums[b]==nums[b-1]) continue;
                int c=b+1;
                int d=last;
                while(c<d)
                {
                    if(c>b+1 && nums[c]==nums[c-1]) {c++;continue;}
                    if(d<last && nums[d]==nums[d+1]) {d--;continue;}
                    int sum=nums[a]+nums[b]+nums[c]+nums[d];
                    if(sum>target) d--;
                    else if(sum<target) c++;
                    else
                    {
                        result.push_back({nums[a],nums[b],nums[c],nums[d]});
                        c++;
                        d--;
                    }
                }
            }
        }
        return result;
    }
};
