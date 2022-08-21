class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vect;
        int n = nums1.size();
        int m = nums2.size();
        int arr[1000] ={0};
        for (int i = 0; i < n; i++){
            arr[nums1[i]] = 1;
        }
        for (int i = 0; i < m; i++){
            if(arr[nums2[i]] == 1){
                arr[nums2[i]]++;
            }
        }
        for(int i = 0; i < 1000; i++){
            if(arr[i] >= 2){
                vect.push_back(i);
            }
        }
        return vect;

    }
};
