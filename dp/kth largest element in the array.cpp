class Solution {
public:
    static bool cmp(pair<int,int>& a, pair<int,int>& b){
        return a.second < b.second;
    }
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> numMap;
        int size = nums.size();
        
        for(int i = 0; i < size; i++ ){
            numMap.insert({i, nums[i]});
        }
        vector<pair<int,int>> vct;
        
        for(auto& it: numMap){
            pair<int, int> pair;
            pair = make_pair(it.first, it.second);
            vct.push_back(pair);
        }
        sort(vct.begin(), vct.end(), cmp);
        
        return vct[size-k].second;
    }
};