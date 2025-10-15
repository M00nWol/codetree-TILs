#include <iostream>
using namespace std;

int main() {
    string s;

    cin >> s;

    s.erase(s.length()-2, 1);
    s.erase(1, 1);

    cout << s;
    return 0;
}