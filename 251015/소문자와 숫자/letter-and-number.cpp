#include <iostream>
using namespace std;

int main() {
    string s;

    cin >> s;
    
    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9'){
            cout << s[i];
        } else if((s[i]>='A' && s[i]<='Z') || (s[i]>='a'&&s[i]<='z')){
            cout << (char)tolower(s[i]);
        }
    }
    return 0;
}