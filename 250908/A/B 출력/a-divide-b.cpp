#include <iostream>
using namespace std;

int main() {
    int a, b, f, res;


    cin >> a >> b;
    
    f = a/b;
    res = a%b;

    cout << f << ".";

    for(int i=0; i<20; i++){
        a = 10*res;
        f = a/b;
        res = a%b;
        cout << f;
    }


    return 0;
}