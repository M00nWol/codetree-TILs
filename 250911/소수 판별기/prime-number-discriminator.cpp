#include <iostream>
using namespace std;

int main() {
    int n;
    bool res = true;

    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            res = false;
            break;
        }
    }

    if(res){
        cout << 'P';
    } else {
        cout << 'C';
    }
    return 0;
}