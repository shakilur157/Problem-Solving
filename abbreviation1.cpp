#include <bits/stdc++.h>

using namespace std;

string abbreviation(string a, string b) {
    // Complete this function
    int i = 0;
    string str2="",str="";
    int j = 0;
    while(a[i]!='\0')
    {
        if(abs(a[i]-b[j])==32 || a[i]==b[j])
        {
            if(abs(a[i]-b[j])==32)
                a[i] = (a[i]-32);

            j++;
        }
        i++;
    }

    i = 0;
    while(a[i]!='\0')
    {
        if(a[i]<97)
        {
            str = str + a[i];
        }
        i++;
    }
    cout<<str<<endl;
    int s = str.length();

    if (str.find(b) != std::string::npos)
    {
        return "YES";
    }
    else
        return "NO";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string a;
        cin >> a;
        string b;
        cin >> b;
        string result = abbreviation(a, b);
        cout << result << endl;
    }
    return 0;
}


