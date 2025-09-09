#include <iostream>
using namespace std;

int main() {
    int a, b, c, mid;

    cin >> a >> b >> c;

    if(a>b){
        if(b>c){
            mid = b;
        } else if(c>a){
            mid = a;
        } else {
            mid = c;
        }
    } else {
        if (a>c) {
            mid = a;
        } else if (c>b){
            mid = b;
        } else {
            mid = c;
        }
    }

    cout << mid;
    return 0;
}