#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 65;

    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(j>i){
                cout << "  ";
            } else {
                cout << (char)cnt << " ";
                cnt++;
                if(cnt>90){
                    cnt = 65;
                }
            }
        }
        cout << endl;
    }
    return 0;
}