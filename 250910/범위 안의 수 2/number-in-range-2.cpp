#include <iostream>
using namespace std;

int main() {
    int sum = 0, cnt=0, tmp;
    double avg;

    for(int i=0; i<10; i++){
        cin >> tmp;

        if(tmp>=0 && tmp <=200){
            sum += tmp;
            cnt++;
        }
    }

    avg = (double)sum/cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << avg;
    return 0;
}