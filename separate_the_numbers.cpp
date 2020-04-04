#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include<string>
#include <sstream>

using namespace std;

string IntToString(long long a)
{
    ostringstream temp;
    temp << a;
    return temp.str();
}
long long StringToInt(string st)
{
    stringstream geek(st);
    long long x = 0;
    geek >> x;
    return x;
}
long long separateNumbers(string str)
{
    long long start;
    int length = str.size();

    for (int i = 0; i < length / 2; i++)
    {

        string str1 = str.substr(0, i + 1);

        long long num = StringToInt(str1);
        start = num;
        while (str1.size() < length)
        {
            str1 = str1 + IntToString(++num);
        }

        if (str1 == str)
            return start;
    }
    return -1;
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string str;
        getline(cin, str);

        long long start = separateNumbers(str);
        if (start != -1)
            cout << "YES " << start << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
