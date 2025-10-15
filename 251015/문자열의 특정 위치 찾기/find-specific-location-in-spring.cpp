#include <iostream>
using namespace std;

int main() {
    string s;
    char c;

    cin >> s >> c;

    for(int i=0; i<s.length(); i++){
        if(s[i]==c){
            cout << i;
            return 0;
        }
    }

    cout << "No";
    return 0;
}