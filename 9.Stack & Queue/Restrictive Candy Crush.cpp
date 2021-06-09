// Given a string s and an integer k, the task is to reduce the string by applying the following operation:
// Choose a group of k consecutive identical characters and remove them.

// The operation can be performed any number of times until it is no longer possible.

class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        if(k==1)
            return "";
        stack<pair<char,int>>st;
        string res = "";
        for(int i=0;i<s.length();i++){
            if(st.empty())
                st.push({s[i],1});
            else{
                if(st.top().first==s[i]){
                    st.push({s[i],st.top().second+1});
                    if(st.top().second==k){
                        int x = k;
                        while(x--){
                            st.pop();
                        }
                    }
                }
                else{
                    st.push({s[i],1});
                }
            }
        }
        while(!st.empty()){
            res+=st.top().first;
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }


};