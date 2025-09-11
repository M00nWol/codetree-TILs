#include <iostream>
using namespace std;

int main() {
    int n;
    int res;

    cin >> n;

    res = n;
    for(int i=1; i<=n; i++){
        res /= i;
        if(res <= 1){
            cout << i;
            break;
        }
    }
    return 0;
}