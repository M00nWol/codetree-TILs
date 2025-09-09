#include <iostream>
using namespace std;

int main() {
    int a, b;
    char sa, sb;

    cin >> a >> sa;
    cin >> b >> sb;

    if((a>=19 && sa == 'M') || (b>=19 && sb == 'M')){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}