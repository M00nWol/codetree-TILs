#include <iostream>
using namespace std;

int main() {
    int wid, hei;
    char c;

    cin >> wid >> hei >> c;

    while(c != 'C'){
        cout << wid*hei << endl;

        cin >> wid >> hei >> c;
    }

    cout << wid*hei << endl;
    return 0;
}