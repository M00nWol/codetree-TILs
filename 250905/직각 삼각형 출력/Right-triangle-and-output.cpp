#include <iostream>
using namespace std;

int main() {
    int n, cnt;

    cin >> n;

    for(int i=0; i<n;i++){
        cnt = 2*i+1;
        for(int j=0; j<cnt; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}