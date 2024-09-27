#include <iostream>
using namespace std;

int main() {
    double ft_to_cm = 30.48;
    double a;

    cin >> a;

    cout << fixed;
    cout.precision(2);
    cout << a*ft_to_cm;
    return 0;
}