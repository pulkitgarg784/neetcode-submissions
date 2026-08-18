class Solution {
public:
    bool isPalindrome(string s) {
        int lptr = 0;
        int rptr = s.size()-1;

        while(lptr < rptr){
            while (lptr < rptr && !isalnum(s[lptr])) {
                lptr++;
            }
            while (rptr > lptr && !isalnum(s[rptr])) {
                rptr--;
            }
            if(tolower(s[lptr]) != tolower(s[rptr])){
                return false;
            }
            lptr++;
            rptr--;
        }
        return true;
    }
};
