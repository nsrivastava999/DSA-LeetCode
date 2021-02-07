class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int n=arr.size();
        if(n==0)
            return "";
        int minlen = arr[0].length();
        for (int i=1; i<n; i++) 
            if (arr[i].length() < minlen) 
                minlen = arr[i].length(); 
  
        string result; // Our resultant string 
        char current;  // The current character 

        for (int i=0; i<minlen; i++) 
        { 
            current = arr[0][i]; 

            for (int j=1 ; j<n; j++) 
                if (arr[j][i] != current) 
                    return result; 

            result.push_back(current); 
        } 

        return (result);
    }
};