#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;

    // i번째 줄에 공백 n-i-1개 * i+1개
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i=n-2; i>=0; i--){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}