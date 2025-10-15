#include <iostream>
using namespace std;

int main() {
    char a, b;
    int m, n;

    cin >> a >> b;

    m = (int)a;
    n = (int)b;

    cout << m+n << " " << (m>n?(m-n):(n-m));

    return 0;
}