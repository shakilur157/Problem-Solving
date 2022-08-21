#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    // Complete this function
    char a='z';
    int i=0,val;
    vector<int> temp;
    while(word[i]!='\0')
    {
        val = int(word[i]) - 97;
        temp.push_back(h[val]);
        i++;
    }

    int max_val = *max_element(temp.begin(),temp.end());
    return (i)*max_val;

}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
