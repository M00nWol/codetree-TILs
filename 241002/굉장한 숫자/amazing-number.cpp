#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if ((a%2!=0 && a%3==0) || (a%2==0 && a%5==0)){
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}