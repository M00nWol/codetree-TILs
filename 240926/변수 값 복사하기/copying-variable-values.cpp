#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    
    a = b = c;

    cout << a << endl << b << endl << c;
    return 0;
}