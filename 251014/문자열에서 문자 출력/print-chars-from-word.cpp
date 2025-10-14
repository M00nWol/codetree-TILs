#include <iostream>
using namespace std;

int main() {
    int len;
    string s;

    cin >> s;
    len = s.length();

    for(int i=0; i<len; i++){
        cout << s[i] << endl;
    }
    return 0;
}