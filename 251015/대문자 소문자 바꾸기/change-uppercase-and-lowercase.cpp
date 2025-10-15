#include <iostream>
using namespace std;

int main() {
    string s;

    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='a'&&s[i]<='z'){
            cout << (char)toupper(s[i]);
        } else {
            cout << (char)tolower(s[i]);
        }
    }
    return 0;
}