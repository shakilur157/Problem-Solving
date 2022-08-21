using namespace std;
int main() {
    int q;
    cin>>q;
    string s,t;
    while(q--)
        {
        cin>>s>>t;
        int ssize = s.size()+1, tsize = t.size()+1;
        bool mat[ssize][tsize];
        memset(mat,false,sizeof(mat));
        mat[0][0] = 1;
        for(int i = 1; i < ssize; i++){
            if(islower(s[i-1])) mat[i][0] = true;
            else break;
        }
        for(int i = 1; i < ssize; i++)
            for(int j = 1; j <tsize; j++){
            if(isupper(s[i-1])){
                  if(s[i-1] == t[j-1] && mat[i-1][j-1] )
                      mat[i][j] = true;
                  else mat[i][j] = false;
              }
            else{
                if(toupper(s[i-1]) == t[j-1] && mat[i-1][j-1]) mat[i][j] = 1;
                else mat[i][j] = mat[i-1][j];
            }                 
           }         
        if(mat[ssize-1][tsize-1]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}