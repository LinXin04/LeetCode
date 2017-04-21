class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int MaxArea=-1;
        while(start<end)
        {
            int Area=min(height[start],height[end])*(end-start);
            MaxArea=max(MaxArea,Area);
            if(height[start]<=height[end])
                start++;
            else
                end--;
        }
       return MaxArea; 
    }
};
