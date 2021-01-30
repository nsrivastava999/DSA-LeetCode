class Solution {
public:
    //using two pointers
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        int start=0,end=numbers.size()-1;
        while(start<end){
            int x = numbers[start]+numbers[end];
            if(x == target){
                res.push_back(start+1);
                res.push_back(end+1);
                break;
            }
            else if(x > target){
                end--;
            }
            else
                start++;
        }
        return res;
    }
};