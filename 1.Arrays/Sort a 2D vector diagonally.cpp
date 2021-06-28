// Given an NxM 2D matrix, rearrange such that 
// Each diagonal in the lower left triangle of the rectangular grid is sorted in ascending order. 
// Each diagonal in the upper right triangle of the rectangular grid is sorted in descending order. 
// The major diagonal in the grid starting from the top-left corner is not rearranged. 

class Solution {
  public:
    void diagonalSort(vector<vector<int> >& matrix, int n, int m) {
        // code here 
        for(int i=1;i<n;i++){//lower triangular matrix 
            vector<int>temp;
            int j=0,k=i,index=0;
            while(j<m && k<n){
                temp.push_back(matrix[k++][j++]);
            }
            sort(temp.begin(),temp.end());
            j=0,k=i;
            while(j<m && k<n){
                matrix[k++][j++] = temp[index++];
            }
        }
        for(int i=1;i<m;i++){//upper triangular matrix
            vector<int>temp;
            int j=0,k=i,index=0;
            while(j<n && k<m){
                temp.push_back(matrix[j++][k++]);
            }
            sort(temp.begin(),temp.end(),greater<int>());
            j=0,k=i;
            while(j<n && k<m){
                matrix[j++][k++] = temp[index++];
            }
        }
        
    }
};