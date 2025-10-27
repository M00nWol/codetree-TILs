#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 0;
    int n; 
    string s;

    cin >> n;

    s = to_string(n);
    
    for(int i=0; i<s.length(); i++){
        num = 2*num + (s[i]-'0');
    }

    cout << num;

    return 0;
}