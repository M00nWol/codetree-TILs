#include <iostream>
using namespace std;

int main() {
    string a, b;
    string ab, ba;
    int sum;

    cin >> a >> b;

    ab = a+b;
    ba = b+a;
    sum = stoi(ab)+stoi(ba);
    
    cout << sum;
    return 0;
}