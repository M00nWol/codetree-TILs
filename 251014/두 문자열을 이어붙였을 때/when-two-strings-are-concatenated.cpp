#include <iostream>
using namespace std;

int main() {
    string a, b;
    string ab, ba;
    string res = "true";

    cin >> a >> b;

    ab = a+b;
    ba = b+a;

    for(int i=0; i<ab.length();i++){
        if(ab[i]!=ba[i]){
            res = "false";
            break;
        }
    }

    cout << res;
    return 0;
}