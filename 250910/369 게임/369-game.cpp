#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, tmp;
    string s;

    cin >> n;

    for(int i=1; i<=n; i++){
        if(tmp%3==0) {
            cout << 0 << " ";
            continue;
        }

        // 10의 자리
        tmp = i/10;
        if(tmp==3 || tmp==6 || tmp==9){
            cout <<  0 << " ";
            continue;
        }

        // 1의 자리
        tmp = i%10;
        if(tmp==3 || tmp==6 || tmp==9){
            cout << 0 << " ";
            continue;
        }

        cout << i << " ";
    }
    return 0;
}