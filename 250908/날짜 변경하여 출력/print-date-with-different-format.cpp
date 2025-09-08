#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    char a, b;

    cin >> y >> a >> m >> b >> d;
    
    a = b = '-';

    cout << m << a << d << b << y;
    return 0;
}