// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        
        if(pairs.empty()) return {};
        int n  = pairs.size() ;
        int i = 0;
 
        vector<vector<Pair>> ans;
        ans.push_back(pairs);

        for(int i = 1; i < n ; i++) {
            int j = i;
            Pair temp = pairs[i];
            while(j > 0 && temp.key < pairs[j-1].key) {
                pairs[j] = pairs[j-1];
                j--;
            }
            pairs[j] = temp;
            ans.push_back(pairs);
        }


        return ans;
    }
};
