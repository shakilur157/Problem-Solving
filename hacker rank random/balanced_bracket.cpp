#include<bits/stdc++.h>

using namespace std;


bool isClosing(char c){
    char endBrac[3] = {')','}',']'};
    for(int i=0; i<3;i++){
        if(c == endBrac[i]){
            return true;
        }
    }
    return false;
}
string getBalanced_bracket(string s){

    stack <char> startStack;
    queue <char> endQueue;

    int i =0;
    int len;
    len = s.size()-1;
    i = 0;

    while(s[i] != '\0'){
        if(isClosing(s[i])){
            endQueue.push(s[i]);
            if(startStack.empty()){
                return "NO";
            }
            char d = startStack.top();
            char c = s[i];

            if(((c == ')') && (d == '(')) || ((c == '}') && (d == '{')) || ((c == ']') && (d == '['))){
                startStack.pop();
                endQueue.pop();
            }
        }else{
            startStack.push(s[i]);
        }
        i++;
    }
    if(startStack.empty() && endQueue.empty()){
        return "YES";
    }
    return "NO";

}
int main(){
    int t,n;
    cin>>t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(t--){
        string s;
        getline(cin, s);
        string ans = getBalanced_bracket(s);
        cout<<ans<<endl;
    }

}
