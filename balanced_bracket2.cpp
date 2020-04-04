#include<bits/stdc++.h>

using namespace std;


bool isClosing(char c)
{
    char endBrac[3] = {')','}',']'};
    for(int i=0; i<3; i++)
    {
        if(c == endBrac[i])
        {
            return true;
        }
    }
    return false;
}
printStack(stack <char> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
string getBalanced_bracket(string s)
{

    stack <char> startStack;
    queue <char> endQueue;

    int i =0;
    int len;
    len = s.size()-1;
    i = 0;

    while(s[i] != '\0')
    {
        char c = s[i];
        switch (c)
        {
        case '{':
        case '(':
        case '[':
            startStack.push(c);
            break;
        case '}':
            if (startStack.empty() || (startStack.top() != '{')){
                return "NO";
            }
//            printStack(startStack);
            startStack.pop();
            break;
        case ')':
            if (startStack.empty() || (startStack.top() != '(')){
                return "NO";
            }
//            printStack(startStack);
            startStack.pop();
            break;
        case ']':
            if (startStack.empty() || (startStack.top() != '[')){
                return "NO";
            }
//            printStack(startStack);
            startStack.pop();
            break;
        }
        i++;
    }

    return startStack.empty()? "YES" : "NO";

}
int main()
{
    int t,n;
    cin>>t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(t--)
    {
        string s;
        getline(cin, s);
        string ans = getBalanced_bracket(s);
        cout<<ans<<endl;
    }

}

