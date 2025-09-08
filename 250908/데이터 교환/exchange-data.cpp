#include <iostream>
using namespace std;

int main() {
    int a, b, c, t1, t2;

    a = 5;
    b = 6;
    c = 7;

    t1 = b;
    t2 = c;

    b = a;
    c = t1;
    a = t2;

    cout << a << endl << b << endl << c;

    return 0;
}