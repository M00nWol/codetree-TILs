#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    while(n!=25){
        if(n>25){
            cout << "Higher" << endl;
        } else {
            cout << "Lower" << endl;
        }

        cin >> n;
    }
    return 0;
}