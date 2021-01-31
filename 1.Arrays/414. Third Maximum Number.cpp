class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max = 0;
        int i = 0;
        set<int, greater<int>> unique{};

        //removing duplicates
        for (auto& num : nums)
            unique.emplace(num);

        for (auto it = unique.begin(); it != unique.end(); it++) {
            if (i == 3)
                break;
            i++;
            max = *it;
        }
        return i == 3 ? max : *unique.begin();
    }
};