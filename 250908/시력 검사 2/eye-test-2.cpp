#include <iostream>
using namespace std;

int main() {
    double a;
    string res;

    cin >> a;

    if(a>=1.0){
        res = "High";
    } else if(a>=0.5){
        res = "Middle";
    } else {
        res = "Low";
    }

    cout << res;
    return 0;
}