#include<bits/stdc++.h>
#include<string>
using namespace std;

string findAndRemove(string temp){
    int i = 0;
    while(temp[i] != '@'){
        if(temp[i] == '.'){
            temp.erase(i, 1);
        }
        i++;
    }
    return temp;
}
string findAndRemoveAfter(string temp){
    int i = 0;
    int len = temp.size();
    int atIndex = temp.find('@');
    int plusIndex = -1;
    while(temp[i] != '@'){
        if(temp[i] == '+'){
            plusIndex = i;
            break;
        }
        i++;
    }
    if(plusIndex > 0){
        return temp.erase(plusIndex, (atIndex-plusIndex));
    }else{
        return temp;
    }

}
int main(){
    string emails[18] = {"fg.r.u.uzj+o.pw@kziczvh.com","r.cyo.g+d.h+b.ja@tgsg.z.com","fg.r.u.uzj+o.f.d@kziczvh.com","r.cyo.g+ng.r.iq@tgsg.z.com","fg.r.u.uzj+lp.k@kziczvh.com","r.cyo.g+n.h.e+n.g@tgsg.z.com","fg.r.u.uzj+k+p.j@kziczvh.com","fg.r.u.uzj+w.y+b@kziczvh.com","r.cyo.g+x+d.c+f.t@tgsg.z.com","r.cyo.g+x+t.y.l.i@tgsg.z.com","r.cyo.g+brxxi@tgsg.z.com","r.cyo.g+z+dr.k.u@tgsg.z.com","r.cyo.g+d+l.c.n+g@tgsg.z.com","fg.r.u.uzj+vq.o@kziczvh.com","fg.r.u.uzj+uzq@kziczvh.com","fg.r.u.uzj+mvz@kziczvh.com","fg.r.u.uzj+taj@kziczvh.com","fg.r.u.uzj+fek@kziczvh.com"};

    set<string> ansSet;
    for(int i = 0; i < 18; i++){
        cout<<findAndRemoveAfter(findAndRemove(emails[i]))<<endl;
        ansSet.insert(findAndRemoveAfter(findAndRemove(emails[i])));
        cout<<findAndRemoveAfter(findAndRemove(emails[i]))<<endl;
    }
    cout<<ansSet.size()<<endl;
    return 0;
}
