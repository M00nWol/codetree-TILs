#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    cin >> b >> a;

    if(b%2==0) i = b;
    else i = b-1;

    while(i>=a){
        cout << i << ' ';
        i-=2;
    }    
    return 0;
}