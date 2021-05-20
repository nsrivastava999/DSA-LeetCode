class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int res = -1; /*base_case_not_found */ 
        while (start <= end){
            int mid = start + ((end-start)/2);
            if(target == nums[mid]){
                res = mid;
                break;
            }
            else if(nums[start] < nums[end]){ // *If no rotation . Do normal bin search */
                if(target > nums[mid]) start = mid+1;
                else end = mid - 1;
            }
            else {   /* nums[start] > nums[end] => Has to be. Since, right rotated */
                if(target >= nums[start]){
                    if(target > nums[mid]) {
                        if (nums[mid] < nums[end]) end = mid - 1;
                        else start = mid + 1; // nums[mid] > nums[end] 
                    }
                    else{ /* target < nums[mid] */
                        end = mid - 1;
                    }
                }
                else { /* target < nums[start] */
                    if(target < nums[mid]){
                        if(nums[mid] > nums[end]) start = mid + 1;
                        else end = mid - 1;
                    }
                    else{ /* target > nums[mid] */
                        start = mid + 1;
                    }
                } 
            }
        }
        return res;
    }
};