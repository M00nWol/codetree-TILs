#include <iostream>
using namespace std;

int main() {
    int s, a;
    string res;

    cin >> s >> a;

    if(s==0){
        if(a>=19){
            res = "MAN";
        } else {
            res = "BOY";
        }
    } else {
        if(a>=19){
            res = "WOMAN";
        } else {
            res = "GIRL";
        }
    }

    cout << res;
    return 0;
}