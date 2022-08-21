class Solution {
public:
    static bool cmp(pair<pair<int, int>, long>& a,pair<pair<int, int>, long>& b)
    {
        return a.second < b.second;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int numPoints = points.size();
        vector<pair<pair<int, int>, long>> v;
        
        for(int i = 0; i < numPoints; i++){
            pair<int, int> pr1;
            pr1 = make_pair(points[i][0], points[i][1]);
            long val = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pair<pair<int, int>, long> pr2;
            pr2 = make_pair(pr1, val);
            v.push_back(pr2);
        }
        
        vector<pair<pair<int,int>, long>> temp;
        
        for (auto& it : v) {
            pair<pair<int,int>, long> pr;
            pr = make_pair(it.first, it.second);
            temp.push_back(pr);
        }
        sort(temp.begin(), temp.end(), cmp);
        
        vector<vector<int>> ans;
        int counter = 0;
        for (auto& itr: temp) {
            if(counter < k){
                vector<int> vec;
                vec.push_back(itr.first.first);
                vec.push_back(itr.first.second);
                ans.push_back(vec);
            }
            if(counter == k){
                break;
            }
            counter++;
        }
        return ans;
    }
};