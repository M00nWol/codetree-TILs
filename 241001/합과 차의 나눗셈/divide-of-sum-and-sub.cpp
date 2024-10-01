#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout.precision(3);
    cout << (double)(a+b)/(a-b);
    return 0;
}