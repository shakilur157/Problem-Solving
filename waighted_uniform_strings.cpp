#include <bits/stdc++.h>

using namespace std;

vector<string> weightedUniformStrings(string s, vector<long long int> queries) {
//    int i = 0;
//    long long int arr[26] = {0};
    vector<bool> vb(10*1000*1000);
//    while(s[i] != '\0'){
//        arr[int(s[i])%97]++;
//        i++;
//    }
//    int val = 1;
//    for(int i = 0; i < 26; i++){
//        for(int j=1;j<=arr[i];j++){
//            vb[j*(i+1)] = true;
//        }
//    }
    for(int i=0; i<s.length();)
    {
        long long int sum=0;
        int j;
        for(j=0; j<s.length()-i && s[i]==s[i+j]; j++)
        {
            sum+=s[i+j]-'a'+1;
            vb[sum]=true;
        }
        i=i+j;
    }

    vector<string> ans;
    for(int i=0;i<queries.size(); i++){
        if(vb[queries[i]]){
            ans.push_back("Yes");
        }else{
            ans.push_back("No");
        }
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<long long int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    fout.close();

    return 0;
}

