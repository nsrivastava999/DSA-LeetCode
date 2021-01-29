class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m + n - 1; 
		while (m > 0 && n > 0){ // if nums1 and nums2 are not empty
            if (nums1[m - 1] > nums2[n -1]){
                nums1[k] = nums1[m - 1];
                m--;
                k--;
            }
            else{
                nums1[k] = nums2[n - 1];
                n--;
                k--;
            }
        }
		// we only check if nums2 is not empty.
		// if nums2 is empty but nums1 is not, remain the sequence 
        while (k >= 0 && n > 0){
            nums1[k] = nums2[n - 1];
                n--;
                k--;
        }
    }
};