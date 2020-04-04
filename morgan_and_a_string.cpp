#include <bits/stdc++.h>
#include <string>


using namespace std;

int tie(string s1, string s2)
{
    cout<<s1<<"="<<s2<<endl;
    if(s1==s2)
    {
        return 0;
    }
    else
    {
        return s1>s2 ? 1 :-1;
    }
}
string morganAndString(string a, string b)
{
    int aLen = a.size();
    int bLen = b.size();

    a = a + 'z';
    b = b + 'z';

    int count1 = 0, count2 = 0;
    string result = "";

    int i,j;
    i=j=0;

    while (a[i] != 'z' || b[j] != 'z')
    {
        string aSub = a.substr(i, aLen+1);
        string bSub = b.substr(j, bLen+1);
        if (a[i] != 'z' && aSub < bSub)
        {
            result += a[i];
            i++;
        }
        else
        {
            result += b[j];
            j++;
        }
    }
    cout<<result<<endl;
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = morganAndString(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

