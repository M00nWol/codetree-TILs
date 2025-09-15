#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 1;

    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(j>i){
                cout << "  ";
            } else {
                cout << cnt << " ";
                cnt++;
                if(cnt>9){
                    cnt = 1;
                }
            }
        }
        cout << endl;
    }

    return 0;
}