class Solution {
	public:
		string FirstNonRepeating(string str){
	        int n = str.length();
	        int count[26];
	        fill(count,count+26,0);
	        queue<char>q;
	        string res="";
	        for(int i=0;i<n;i++){
	            count[str[i]-'a']++;
	            q.push(str[i]);
	            while(!q.empty()){
	                char curr = q.front();
	                if(count[curr-'a']==1){
	                    res+=curr;
	                    break;
	                }
	                else
	                    q.pop();
	            }
	            if(q.empty())
	                res+='#';
	        }
	        return res;
	        
		}

};