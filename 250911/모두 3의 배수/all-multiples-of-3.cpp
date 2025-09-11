#include <iostream>
using namespace std;

int main() {
    int n;
    bool res = true;

    for(int i=0; i<5; i++){
        cin >> n;
        if(n%3!=0){
            res = false;
            break;
        }
    }

    if(res){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}