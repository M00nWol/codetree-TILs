#include <iostream>
using namespace std;

int main() {
    double ft = 30.48;
    double input;

    cin >> input;

    cout << fixed;
    cout.precision(1);

    cout << input*ft;
    return 0;
}