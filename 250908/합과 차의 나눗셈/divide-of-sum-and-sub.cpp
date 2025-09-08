#include <iostream>
using namespace std;

int main() {
    int a, b, add, sub;

    cin >> a >> b;

    add = a+b;
    sub = a-b;

    cout << fixed;
    cout.precision(2);

    cout << (double)add/sub;
    return 0;
}