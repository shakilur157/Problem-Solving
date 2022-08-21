#include<iostream>
#include<string>
using namespace std;
int main(){
    int r,a;
    cin>>r;
    while(r--)
        {
            string str;
            cin>>str;
            int q=str.size()-1;
            for( a=0;a<=(q/2);a++)
            {
                if(str[a]!=str[q-a])
                {
                     if((str[a+1]==str[q-a])&&(str[a+2]==str[q-a-1]))
                        cout<<a<<endl;
                     else if((str[a]==str[q-a-1])&&(str[a+1]==str[q-a-2]))
                        cout<<q-a<<endl;

                    goto jump;
                }
            }
                cout<<"-1"<<endl;
        jump:;
        }
    return 0;
}
