#include <iostream>
using namespace std;

int main() {
    int a, b, total;
    double avg;

    cin >> a >> b;

    total = a+b;
    avg = (double)total/2;

    cout << fixed;
    cout.precision(1);

    cout << total << " " <<avg;
    return 0;
}