#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool res = false;

    cin >> a >> b >> c;

    for(int i=a; i<=b; i++){
        if(i%c==0){
            res = true;
            break;
        }
    }

    if(res){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}