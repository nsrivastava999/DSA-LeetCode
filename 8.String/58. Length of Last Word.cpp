class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastIndex = s.length() -1 ;
		//Remove all the blanks at the end until meet the first character of string.
        while ( lastIndex >0 && s[lastIndex] == ' '){
            lastIndex--;
        }
        
        if (lastIndex == 0 ) return s[lastIndex] == ' ' ? 0 : 1;
        
		//Count from the last character at the end meet the first blank
        int count = 0;
        for (int i = lastIndex; i >= 0; i--) {
            if (s[i] == ' ') 
                return count;
            else 
                count++;
        }
        
        return count;
    }
};