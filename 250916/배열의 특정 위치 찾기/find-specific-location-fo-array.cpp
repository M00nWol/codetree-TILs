#include <iostream>
using namespace std;

int main() {
    int arr[10];

    int sum2 = 0;
    int sum3 = 0, cnt = 0;
    double avg;

    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    for(int i=1; i<10; i+=2){
        sum2 += arr[i];
    }

    for(int i=2; i<10; i+=3){
        sum3 += arr[i];
        cnt++;
    }

    avg = (double)sum3/cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum2 << " " << avg;
    return 0;
}