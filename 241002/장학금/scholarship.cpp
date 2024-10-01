#include <iostream>
using namespace std;

int main() {
    int a, b, m;
    cin >> a >> b;

    if(a >= 90){
        if(b >= 95){
            m = 100000;
        }else if(b>=90){
            m = 50000;
        }else {
            m = 0;
        }
    } else {
        m = 0;
    }

    cout << m;
    return 0;
}