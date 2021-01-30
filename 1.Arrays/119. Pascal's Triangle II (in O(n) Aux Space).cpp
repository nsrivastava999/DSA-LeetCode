class Solution {
public:
    //using binomial coefficient
    //eg for rowIndex=3: {1 , 4/1 , 4*3/2*1 , 4*3*2/1*2*3 , 4*3*2*1/1*2*3*4}
    vector<int> getRow(int rowIndex) {
        vector<int>res;
        long long int coeff=1;
        for(int i=0;i<rowIndex+1;i++){
            res.push_back(coeff);
            coeff*=(rowIndex-i);
            coeff/=(i+1);
        }
        return res;
    }
};