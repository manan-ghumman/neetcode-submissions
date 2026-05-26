class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Step 1: Insert all numbers into an unordered_set
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;

        // Step 2: Iterate through the array
        for (int num : nums) {
            // Check if 'num' is the start of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Expand the sequence forward
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                maxLength = max(maxLength, currentStreak);
            }
        }

        return maxLength;
    }
};