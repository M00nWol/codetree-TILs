#include <iostream>
using namespace std;

int main() {
    int n;
    string arr[10];
    string s;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        s += arr[i];
    }

    cout << s;
    return 0;
}