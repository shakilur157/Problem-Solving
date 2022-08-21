class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        int size = nums.size();
        vector<pair<int,int>> v; 
        vector<int> ans;
        
        for(int i = 0; i < size; i++){
            mp[nums[i]]++;
        }
        
        for(auto& x:mp){
            v.push_back({x.first,x.second});
        }
        
        sort(v.begin(),v.end(),cmp); 
        
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
        
    }
};