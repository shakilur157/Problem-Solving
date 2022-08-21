class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len = nums.size();
        vector<int> even, odd;
        for(int i=0; i<len; i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        vector<int>::iterator it1, it2;
        vector<int> ans;
        for(it1 = even.begin(); it1 != even.end(); it1++){
            ans.push_back(*it1);
        }
        for(it2 = odd.begin(); it2 != odd.end(); it2++){
            ans.push_back(*it2);
        }
        return ans;
    }
};
