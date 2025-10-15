#include <iostream>
using namespace std;

int main() {
    char a;

    cin >> a;

    a++;
    if(a>'z'){
        a = 'a';
    }

    cout << a;
    return 0;
}