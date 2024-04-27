class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        return false;
        int tmep=x;
        long  sum=0;
        while(x>0)
        {
            int rem=x%10;
            sum=(sum*10)+rem;
            x=x/10;
        }
        if(tmep==sum)
        return true;
        else
        return false;
    }
};