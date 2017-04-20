class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lens=s.size();
        if(lens<2) return lens;
        
        const int MaxSize=255;
        int last[MaxSize];
        int start=0;
        int MaxLen=0;
        fill(last,last+MaxSize,-1);
        for(int i=0;i<lens;i++)
        {
            if(last[s[i]]>=start)
            {
                MaxLen=max(i-start,MaxLen);
                start=last[s[i]]+1;
            }
            last[s[i]]=i;
        }
        return max(lens-start,MaxLen);
    }
};
