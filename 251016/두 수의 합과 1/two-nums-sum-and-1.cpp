#include <iostream>
using namespace std;

int main() {
    int a, b;
    string s;
    int cnt = 0;

    cin >> a >> b;

    s = to_string(a+b);

    for(int i=0; i<s.length(); i++){
        if(s[i] == '1'){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}