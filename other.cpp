//codestudio ka que ka function hai que.(subsequencr of string);

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        // Generate 2^n subsets using bit manipulation
        for (int i = 0; i < (1 << n); i++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) { // If jth bit is set in i
                    subset.push_back(nums[j]); // Include nums[j] in subset
                }
            }
            ans.push_back(subset); // Add the generated subset to ans
        }

        return ans;
    }
};
