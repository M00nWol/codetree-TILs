#include <iostream>
using namespace std;

int main() {
    string s;
    int a, len;

    cin >> s >> a;

    len = s.length()-1;

    while(a>0){
        cout << s[len];
        len--;
        a--;
    }
    return 0;
}