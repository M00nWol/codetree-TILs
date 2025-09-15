#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 65;

    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << (char)cnt;
            cnt++;
            if(cnt>90) {
                cnt = 65;
            }
        }
        cout << endl;
    }
    return 0;
}