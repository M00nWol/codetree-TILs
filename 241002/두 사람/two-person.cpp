#include <iostream>
using namespace std;

int main() {
    int a, b;
    char A, B;

    cin >> a >> A >> b >> B;

    cout << ((a>=19&&A=='M') || (b>=19&&B=='M'));
    return 0;
}