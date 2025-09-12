#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    // i 번째 줄에 (n-i)개의 *, 2i개의 공백, (n-i)개의 *
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        for(int j=0; j<2*i; j++){
            cout << " ";
        }
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}