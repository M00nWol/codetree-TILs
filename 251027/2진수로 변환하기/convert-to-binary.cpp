#include <iostream>
using namespace std;

string Digit(int n){
    int digits[20] = {};
    int cnt = 0;
    string res = "";

    while(true){
        if(n<2){
            digits[cnt++] = n;
            break;
        }

        digits[cnt++] = n%2;
        n /= 2;
    }

    for(int i=cnt-1; i>=0; i--){
        res += to_string(digits[i]);
    }

    return res;
}

int main() {
    int n;

    cin >> n;

    cout << Digit(n);
    return 0;
}