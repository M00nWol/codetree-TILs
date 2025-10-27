#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    int m, d;
    int day = 1;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cin >> m1 >> d1 >> m2 >> d2;

    m = m1;
    d = d1;

    while(true){
        if(m==m2 && d==d2){
            break;
        }

        day++;
        d++;

        if(d>num_of_days[m]){
            m++;
            d = 1;
        }
    }

    cout << day;
    return 0;
}