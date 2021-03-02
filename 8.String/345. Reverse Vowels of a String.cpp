class Solution {
public:
    string reverseVowels(string s) {
        int l=0,r=s.length()-1;
        string vowels="aeiouAEIOU";
        while(l<r){
            if(vowels.find(s[l])==string::npos){
                l++;
                continue;
            }
            if(vowels.find(s[r])==string::npos){
                r--;
                continue;
            }
            swap(s[l],s[r]);
            l++;r--;
        }
        return s;
    }
};