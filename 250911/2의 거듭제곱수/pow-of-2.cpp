#include <iostream>
using namespace std;

int main() {
    int n;
    int x = 0;

    cin >> n;
    
    while(n!=1){
        n /= 2;
        x++;
    }

    cout << x;
    return 0;
}