#include <iostream>
using namespace std;

int main() {
    int a, b;
    int money;

    cin >> a >> b;

    
    if(a>=90 && b>=95){
        money = 100000;
    } else if (a>=90 && b>=90){
        money = 50000;
    } else {
        money = 0;
    }

    cout << money;

    return 0;
}