#include <iostream>
using namespace std;

int main() {
    int age;
    int sum = 0, cnt = 0;
    double avg;

    cin >> age;

    while(age>=20 && age<=29){
        
        sum += age;
        cnt++;

        cin >> age;
    }

    avg = (double)sum/cnt;

    cout << fixed;
    cout.precision(2);

    cout << avg;
    return 0;
}