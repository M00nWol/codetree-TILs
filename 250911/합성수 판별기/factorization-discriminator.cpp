#include <iostream>
using namespace std;

int main() {
    int n;
    bool res;

    res = false;

    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            res = true;
            break;
        }
    }

    if(res){
        cout << 'C';
    } else {
        cout << 'N';
    }
    return 0;
}