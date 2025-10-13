#include <iostream>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    int cnt = 0;
    char c;

    cin >> c;

    for(int i=0; i<5; i++){
        if(c == arr[i][2] || c == arr[i][3]) {
            cout << arr[i] << endl;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}