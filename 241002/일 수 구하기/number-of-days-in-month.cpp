#include <iostream>
using namespace std;

int main() {
    int n, r;
    cin >> n;

    if(n%2!=0){
        if(n<=7) r = 31;
        else r = 30;
    } else {
        if(n==2) r = 28;
        else if(n<=7) r = 30;
        else r = 31;
    }
    return 0;
}