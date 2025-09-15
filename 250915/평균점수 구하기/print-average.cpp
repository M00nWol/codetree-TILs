#include <iostream>
using namespace std;

int main() {
    double sco[8], avg;
    double sum = 0;

    for(int i=0; i<8; i++){
        cin >> sco[i];
        sum += sco[i];
    }

    avg = sum/8;

    cout << fixed;
    cout.precision(1);

    cout << avg;

    return 0;
}