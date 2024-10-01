#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double sum = a+b;
    double sub = a-b;

    cout.precision(3);
    cout << sum/sub;
    return 0;
}