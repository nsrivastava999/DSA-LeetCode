class Solution {
public:
    bool isPalindrome(string s) {
        int low=0;
        int high=s.length();
        while(low<=high){
            if(!isalnum(s[low]) && !isalnum(s[high])){
                low++;
                high--;
            }
            else if(isalnum(s[low]) && !isalnum(s[high]))
                high--;
            else if(isalnum(s[high]) && !isalnum(s[low]))
                low++;
            else{
                    if(tolower(s[low])!=tolower(s[high]))
                        return false;
                    else{
                        low++;
                        high--;
                    }
                        
                }
            }
        return true;
    }
};
