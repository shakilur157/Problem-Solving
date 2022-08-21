#include <bits/stdc++.h>

using namespace std;

string gridSearch(vector <string> G, vector <string> P,int R,int C,int r,int c) {
    // Complete this function
    int gs = G.size();
    int ps = P.size();
    for(int i = 0; i < R; i++)
    {
        //string str = G[i];
        //string str2 = P[i];
        for(int j = 0; j < C; j++)
        {
            if(G[i][j]==P[0][0])
            {
                bool con = true;
                int ptr = i;
                int ptr2 = j;
                int ptr3 = 0;
                int k = 0;
                int count = 0;
                while(con)
                {
                    if(G[ptr][ptr2+k]==P[ptr3][k])
                    {
                        //cout<<"----"<<G[ptr][ptr2+k]<<"---"<<P[ptr3][k]<<"--"<<k<<endl;
                        count++;
                        if(count == r*c)
                        {
                            return "YES";
                        }
                    }
                    else
                    {
                        con = false;
                        count = 0;
                    }
                    if(k ==(c-1))
                    {
                        ptr++;
                        ptr3++;
                        k = 0;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
        }
    }
    return "NO";

}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        string result = gridSearch(G, P,R,C,r,c);
        cout << result << endl;
    }
    return 0;
}
