#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = a+b;
    int sub = a-b;

    cout.precision(3);
    cout << double(sum)/sub;
    return 0;
}