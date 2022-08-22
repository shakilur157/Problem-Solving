class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second < b.second;
    }
    int rob(vector<int>& nums) {
        int size = nums.size();        
        vector<int> vct;
        
        if(size == 1){
            return nums[0];
        }else if(size == 2){
            return max(nums[0], nums[1]);
        }
        
        vct.push_back(nums[0]);
        vct.push_back(max(nums[0], nums[1]));
        
        for(int i = 2; i < size; i++){
            int findMax = max(nums[i] + vct[i-2], vct[i-1]);
            vct.push_back(findMax);
        }
        
        return vct[size-1];
    }
    
};