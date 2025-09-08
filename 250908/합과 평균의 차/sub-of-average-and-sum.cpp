#include <iostream>
using namespace std;

int main() {
    int a, b, c, total, avg;

    cin >> a >> b >> c;

    total = a+b+c;
    avg = total/3;

    cout << total << endl << avg << endl << total-avg;
    return 0;
}