class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result=0;
        int min_gap=INT_MAX;
        sort(nums.begin(),nums.end());
        
        int last=nums.size()-1;
        for(int a=0;a<last-1;a++)
        {
            int b=a+1;
            int c=last;
            while(b<c)
            {
                int sum=nums[a]+nums[b]+nums[c];
                int gap=abs(sum-target);
                if(gap<min_gap)
                {
                    result=sum;
                    min_gap=gap;
                }
                if(sum>target) c--;
                else if(sum<target) b++;
                else {return target;}
            }
        }
       return result; 
    }
};
