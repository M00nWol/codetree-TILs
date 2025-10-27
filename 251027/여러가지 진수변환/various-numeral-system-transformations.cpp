#include <iostream>
using namespace std;

void Tran(int n, int b){
    int res[10] = {};
    int cnt = 0;

    while(true){
        if(n < b){
            res[cnt++] = n;
            break;
        }

        res[cnt++] = n%b;
        n /= b;
    }

    for(int i=cnt-1; i>=0; i--){
        cout << res[i];
    }
}

int main() {
    int n, b;

    cin >> n >> b;

    Tran(n, b);

    return 0;
}