class Solution {
public:
    static bool cmp(pair<int, int> a, pair<int,int> b) {
        return a.second > b.second; //descending order of second 
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        unordered_map<int, int> mpp;
        int t = 0;
        for(int x : nums) {
            if(!mpp.count(x)) mpp.emplace(x, 0) ;
            mpp[x]++;
        }
        for(auto it : mpp) {
            v.push_back(it);
        }
        sort(v.begin(), v.end(), cmp);
        vector<int> res;
        for (int i = 0; i < k ; i++) {
        res.emplace_back(v[i].first) ;  
        }
        return res;
    }
};
