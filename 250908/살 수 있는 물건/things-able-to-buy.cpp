#include <iostream>
using namespace std;

int main() {
    int n;
    string res;

    cin >> n;

    if(n>=3000){
        res = "book";
    } else if (n>=1000){
        res = "mask";
    } else {
        res = "no";
    }
    
    cout << res;

    return 0;
}