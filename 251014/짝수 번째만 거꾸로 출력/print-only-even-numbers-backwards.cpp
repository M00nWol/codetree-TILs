#include <iostream>
using namespace std;

int main() {
    string s;
    int len;

    cin >> s;
    len = s.length();

    if(len%2!=0){
        len--;
    }

    for(int i=len-1; i>=0; i-=2){
        cout << s[i];
    }
    return 0;
}