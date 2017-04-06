class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1,std::vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int total=m+n;
        if(total & 0x1)
            return find_median(nums1.begin(),m,nums2.begin(),n,total/2+1);
        else
            return (find_median(nums1.begin(),m,nums2.begin(),n,total/2)+find_median(nums1.begin(),m,nums2.begin(),n,total/2+1))/2.0;
    }
private:
    int find_median(std::vector<int>::const_iterator A,int m,std::vector<int>::const_iterator B,int n,int k){
        if(m>n) return find_median(B,n,A,m,k);
        if(m==0) return B[k-1];
        if(n==0) return A[k-1];
        if(k==1) return min(A[0],B[0]);
        
        int i=min(m,k/2);
        int j=k-i;
        if(A[i-1]<B[j-1])
            return find_median(A+i,m-i,B,n,k-i);
        else if(A[i-1]>B[j-1])
            return find_median(A,m,B+j,n-j,k-j);
        else
            return A[i-1];
    }
};
