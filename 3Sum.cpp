class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> result;
       if(nums.size()<3) return result;
       sort(nums.begin(),nums.end());
       int last=nums.size()-1;
 
       for(int a=0;a<last-1;a++)
       {
           if(a>0 && nums[a]==nums[a-1]) continue; //注意a>0这个条件。
           int b=a+1;
           int c=last;
           while(b<c){
            if(b>a+1 && nums[b]==nums[b-1]) {b++;continue;} //注意b>a+1这个条件
            if(c<last && nums[c]==nums[c+1]) {c--;continue;}
            int sum=nums[a]+nums[b]+nums[c];
            if(sum<0) b++;
            else if(sum>0) c--;
            else {result.push_back({nums[a],nums[b],nums[c]});b++;c--;}
           }
       }
    return result;
}
};
