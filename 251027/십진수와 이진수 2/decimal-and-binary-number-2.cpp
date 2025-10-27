#include <iostream>
using namespace std;

void Digit(int n){
    int res[20] = {};
    int cnt = 0; 

    while(true){
        if(n<2){
            res[cnt++] = n;
            break;
        }

        res[cnt++] = n%2;
        n /= 2;
    }

    for(int i=cnt-1; i>=0; i--){
        cout << res[i];
    }
}

int main() {
    int n;
    int num = 0;

    string s;

    cin >> n;

    s = to_string(n);

    for(int i=0; i<s.length(); i++){
        num = 2*num + (s[i]-'0');
    }

    Digit(num*17);
    return 0;
}