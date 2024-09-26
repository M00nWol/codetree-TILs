#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    int temp1 = b;
    int temp2 = c;
    b = a;
    c = temp1;
    a = temp2;

    cout << a << endl << b << endl << c;


    return 0;
}