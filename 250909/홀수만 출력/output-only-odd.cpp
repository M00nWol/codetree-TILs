#include <iostream>
using namespace std;

int main() {
    int a, b;
    int i;

    cin >> a >> b;

    if(a%2==0) {
        i = a+1;
    } else {
        i = a;
    }

    for (i; i<=b; i+=2){
        cout << i << " ";
    }
    return 0;
}