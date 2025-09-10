#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    int sum = 0;
    double avg;

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> tmp;
        sum += tmp;
    }

    avg = (double)sum / n;

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << avg;
    return 0;
}