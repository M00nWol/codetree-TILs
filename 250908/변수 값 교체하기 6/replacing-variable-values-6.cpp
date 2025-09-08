#include <iostream>
using namespace std;

int main() {
    int a, b, tmp;
    a = 2;
    b = 5;

    tmp = a;
    a = b;
    b = tmp;

    cout << a << endl << b;
    return 0;
}