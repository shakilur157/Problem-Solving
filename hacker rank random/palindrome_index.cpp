#include <bits/stdc++.h>

using namespace std;


bool is_palindrome(string str)
{
    bool res = false;
    if (str == string(str.rbegin(), str.rend()))
    {
        res = true;
        //cout<<"yes";
    }
    return res;
}
int palindromeIndex(string s)
{
    // Complete this function
    int len = s.length();
    if(is_palindrome(s))
    {
        return -1;
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            string str = s;
            str[i]=' ';
            str.erase(remove(str.begin(), str.end(), ' '), str.end());
            if(is_palindrome(str))
                return i;
        }
    }

    return -2;

}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}
