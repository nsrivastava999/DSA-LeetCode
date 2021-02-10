class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int,int> map;
        
        for(int i=0; i<A.size(); ++i){       
		
		    //finding whether element present in map or not, if it is present then it means this is duplicate thus it will return that element.
            if(map.find(A[i])!=map.end()) return A[i];
			
			//storing element in the map if the given element is not present.           
            else map[A[i]]++;
        }
        return 0;
    }
};