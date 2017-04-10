class Solution {
public:
    double myPow(double x, int n) {
        if(n<0) 
            return 1.0/Pow(x,-n);
        else
            return Pow(x,n);
    }
private:
    double Pow(double x,int n){
        if(n==0) return 1;
        if(n==1) return x;
        double m=Pow(x,n/2);
        if(n%2==0)
            return m*m;
        else
            return m*m*x;
    }
};
