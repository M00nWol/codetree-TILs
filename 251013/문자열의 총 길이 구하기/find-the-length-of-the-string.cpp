#include <iostream>
using namespace std;

int main() {
    string s;
    int sum = 0;

    for(int i=0; i<10; i++){
        cin >> s;
        sum += s.length();
    }

    cout << sum;
    return 0;
}