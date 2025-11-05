#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    string s;
    int len;

    cin >> s;
    len = s.length();

    for(int i=0; i<len; i++){
        if(s[i]=='('){
            for(int j=i; j<len; j++){
                if(s[j]==')'){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    
    return 0;
}