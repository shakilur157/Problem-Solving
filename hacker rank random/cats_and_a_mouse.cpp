#include <bits/stdc++.h>

using namespace std;

vector <string> catAndMouse(int x, int y, int z) {
    // Complete this function
    vector<string> ans;
    int ca,r,cb;

    if(abs(z-x) > abs(z-y))
        ans.push_back("Cat B");
    else if(abs(z-x) < abs(z-y))
        ans.push_back("Cat A");
    else
        ans.push_back("Mouse C");

    return ans;

}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        vector <string> result = catAndMouse(x, y, z);
        for (ssize_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i != result.size() - 1 ? " " : "");
        }
        cout << endl;


    }
    return 0;
}

