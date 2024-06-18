class Solution {
public:
    int reverse(int x) {
        if (x<=INT_MIN || x>=INT_MAX) return 0;
        long res=0;
        int num=x;
        int c=1;
        if (x<0) c=-1;
        num*=(c);
        while (num)
        {
            res=(res*10)+(num%10);
            num/=10;
            if (res<INT_MIN || res>INT_MAX) return 0;
        }

        return res*c;
    }
};