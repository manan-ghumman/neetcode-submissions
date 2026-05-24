class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int it = 0; it < nums.size(); it++)
        {
            for(int ft = 0; ft < nums.size(); ft++ ){
                if(it == ft) continue;
                if(nums.at(it) + nums.at(ft) == target) {
                    vector<int> v = {it, ft};
                    return v;
                }
            }

        }
        return {0, 0};
    }
};
