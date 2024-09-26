#include <iostream>
using namespace std;

int main() {
    double ft_to_cm = 30.48;
    double mi_to_cm = 160934;
    double a = 9.2;
    double b = 1.3;

    cout << fixed;
    cout.precision(1);
    cout << a << "ft = " << a*ft_to_cm << "cm";
    cout << endl;
    cout << b << "mi = " << b*mi_to_cm << "cm";
    return 0;
}