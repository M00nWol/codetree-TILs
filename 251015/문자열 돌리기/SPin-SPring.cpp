#include <iostream>
using namespace std;

int main() {
    string s;
    int len;

    cin >> s;
    len = s.length();

    for(int i=0; i<len; i++){
        s = s.substr(len-1, 1) + s.substr(1, len-1);
        cout << s << endl;
    }

    return 0;
}