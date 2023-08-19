
#include<iostream>
#include<deque>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string d="/";
        while (n--){
            string s; cin >> s;
            if (s=="pwd"){
                if (d=="/") cout << d << "\n";
                else cout << d << "/\n";
            }else{
                cin >> s;
                if (s[0]!='/'){
                    if (d=="/") d+=s;
                    else d=d+"/"+s;
                }else d=s;
                for (int i=d.find('.'); i!=-1; i=d.find('.')){
                    string t(d.begin(), d.begin()+i-1);
                    string r(d.begin()+i+2, d.end());
                    int j=t.rfind('/'); t=t.substr(0, j);
                    d=t+r;
                }
            }
        }
    }
}