#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i=0; i<n; i++){
        // 공백 : i번째 줄에는 i개 (0시작)
        for(int j=0; j<2*i; j++){
            cout << " ";
        }
       // * : i 번째 줄에는 2*(n-i)-1개 
        for(int j=0; j<2*(n-i)-1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}