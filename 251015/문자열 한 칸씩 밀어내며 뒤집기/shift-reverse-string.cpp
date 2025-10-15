#include <iostream>

using namespace std;


int main() {
    string s, tmp;
    int q, a, len;

    cin >> s >> q;
    len = s.length();

    for(int i=0; i<q; i++){
        cin >> a;
        if(a==1){
            s = s.substr(1,len-1) + s.substr(0,1);
        }else if(a==2){
            s = s.substr(len-1, 1) + s.substr(0, len-1);
        }else {
            tmp = "";
            for(int j=len-1; j>=0; j--){
                tmp += s[j];
            }
            s = tmp;
        }

        cout << s << endl;
    }



    return 0;
}
