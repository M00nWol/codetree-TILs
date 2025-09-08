#include <iostream>
using namespace std;

int main() {
    char c;
    string res;

    cin >> c;

    if(c=='S'){
        res = "Superior";
    } else if (c=='A'){
        res = "Excellent";
    } else if (c=='B'){
        res = "Good";
    } else if (c=='C'){
        res = "Usually";
    } else if (c=='D'){
        res = "Effort";
    } else {
        res = "Failure";
    }

    cout << res;
    return 0;
}