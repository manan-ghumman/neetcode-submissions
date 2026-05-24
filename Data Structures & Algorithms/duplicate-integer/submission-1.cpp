class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mpp;
        
        for(int x : nums) {
            mpp[x]++;
            if(mpp[x] == 2) return true;
        }
        
        return false;
    }
};