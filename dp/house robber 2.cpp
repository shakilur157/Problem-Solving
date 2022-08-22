class Solution {
public:
    int doRob(vector<int>& nums) {
        
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
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 1){
            return nums[0];
        }
        vector<int> v1, v2;
        for(int i = 0; i < size; i++){
            if(i != 0){
                v1.push_back(nums[i]);
            }
            if(i != size-1){
                v2.push_back(nums[i]);
            }
        }
        //cout<<doRob(v1)<< ", "<<doRob(v2);
        return max(doRob(v1), doRob(v2));
    }
    
};