#include <iostream>
using namespace std;

int main() {
    string s;
    int q, op, a, b;
    char x, y, tmp;
    

    cin >> s >> q;

    for(int i=0; i<q; i++){
        cin >> op;
        if(op == 1){
            cin >> a >> b;
            tmp = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = tmp;

        } else if(op==2){
            cin >> x >> y;
            for(int i=0; i<s.length(); i++){
                if(s[i] == x){
                    s[i] = y;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}