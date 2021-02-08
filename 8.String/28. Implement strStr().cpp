class Solution {
public:
    int strStr(string haystack, string needle) {
        //O(n^2) which can be improved by using Rabin Karp or KMP
        if(needle.empty()) return 0;
        if(haystack.empty()) return -1;
        if(needle.size() > haystack.size()) return -1;
        
        for (int i = 0; i <= haystack.length()- needle.length(); i++) {
            string s = haystack.substr(i, needle.length());
            if ( s == needle) {
                return i;
        }
    }

        return -1;
    }
};