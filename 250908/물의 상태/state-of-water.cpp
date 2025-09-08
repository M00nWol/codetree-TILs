#include <iostream>
using namespace std;

int main() {
    int tem;
    string res;

    cin >> tem;

    if(tem<0) {
        res = "ice";
    }else if(tem >=100){
        res = "vapor";
    } else {
        res = "water";
    }

    cout << res;
    return 0;
}