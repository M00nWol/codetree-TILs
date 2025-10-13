#include <iostream>
using namespace std;

int main() {
    string s[10];

    for(int i=0; i<10; i++){
        cin >> s[i];
    }

    for(int i=0; i<5; i++){
        cout << s[2*i] << endl;
    }
    return 0;
}