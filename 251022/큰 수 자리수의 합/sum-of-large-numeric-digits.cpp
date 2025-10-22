#include <iostream>

using namespace std;

int a, b, c;

int sum(int n){
    if(n<10){
        return n;
    }

    return sum(n/10) + (n%10);
}

int main() {
    cin >> a >> b >> c;

    int n = a*b*c;

    cout << sum(n);

    return 0;
}