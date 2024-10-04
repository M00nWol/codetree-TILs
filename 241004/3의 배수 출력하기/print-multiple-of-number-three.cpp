#include <iostream>
using namespace std;

int main() {
    int i = 3;
    int n;
    cin >> n;

    while(i<=n){
        cout << i << ' ';
        i+=3;
    }
    return 0;
}