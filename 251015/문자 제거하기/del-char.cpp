#include <iostream>
using namespace std;

int main() {
    string s;
    int n, len;

    cin >> s;

    while(s.length()>1){
        cin >> n;
        len = s.length();

        if(n>=len){
            s.erase(len-1, 1);
        } else {
            s.erase(n, 1);
        }
        cout << s << endl;
    }
    return 0;
}
