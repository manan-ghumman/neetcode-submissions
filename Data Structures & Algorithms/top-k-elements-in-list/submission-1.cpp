class Solution {
    //using heap by priority queue
public:
    typedef pair<int, int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //store element and their freq in map 
        unordered_map<int, int> mpp;
        for(int &num : nums) {
            mpp[num]++; 
        }
        // min heap
        priority_queue<P, vector<P>, greater<P>> pq;

        //push mpp data in pq
        for(auto &it : mpp) {

            int freq = it.second;
            int no = it.first;

            pq.push({freq,no});
            if(pq.size() > k) {
                pq.pop();
            }
        }
        //return result
        vector<int> res;
        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
