#include <iostream>
using namespace std;

int main() {
    int n, res;

    cin >> n;

    if(n<=7){
        if(n==2){
            res = 28;
        } else if(n%2==0){
            res = 30;
        } else {
            res = 31;
        }
    } else {
        if(n%2==0){
            res = 31;
        } else {
            res = 30;
        }
    }

    cout << res;
    return 0;
}