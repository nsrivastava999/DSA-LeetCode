// Given a string S such that it may contain repeated lowercase alphabets. 
// Rearrange the characters in the string such that no two adjacent characters are same.

// Algorithm:

// 1. Build a Priority Queue or max heap, pq that stores characters and their frequencies.
//     (Priority_queue or max_heap is built on the bases of frequency of character.)
// 2. Create a temporary Key that will used as the previous visited element ( previous element in resultant string. Initialize it { char = ‘#’ , freq = ‘-1’ }
// 3. While pq is not empty.

// Pop an element and add it to result.
// Decrease frequency of the popped element by ‘1’
// Push the previous element back into the pq if it’s frequency > ‘0’
// Make the current element as previous element for the next iteration.

class Solution
{
    public:
    //Function to rearrange the characters in a string such that 
    //no two adjacent characters are same.
    string rearrangeString(string str)
    {
    	// Your code here
    	int hash[26] = {0};
    	int n = str.length();
    	for(int i=0;i<n;i++){
    	    hash[str[i]-'a']++;
    	}
    	priority_queue<pair<int,char>>pq;
    	for(int i=0;i<26;i++){
    	    if(hash[i]!=0){
    	        pq.push({hash[i],i+'a'});
    	    }
    	}
    	string res = "";
    	auto prev = pq.top();
    	pq.pop();
    	res+=prev.second;
    	prev.first--;
    	
    	while(!pq.empty()){
    	    auto curr = pq.top();
    	    pq.pop();
    	    res+=curr.second;
    	    if(prev.first>0)
    	        pq.push(prev);
    	    prev = {curr.first-1,curr.second};
    	}
    	return res;
    }
};