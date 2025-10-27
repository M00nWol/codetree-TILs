#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    int bm, bd, sm, sd;
    int month, day;
    bool rev = false;
    int idx = 0;

    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cin >> m1 >> d1 >> m2 >> d2;
    if(m1 > m2 || (m1==m2 && d1>d2)){
        bm = m1;
        bd = d1;
        sm = m2;
        sd = d2;
    } else{
        rev = true;
        bm = m2;
        bd = d2;
        sm = m1;
        sd = d1;
    }

    month = sm;
    day = sd;

    while(true){
        if(month==bm && day==bd){
            break;
        }

        idx++;
        day++;

        if(idx==7){
            idx = 0;
        }

        if(day>num_of_days[month]){
            month++;
            day = 1;
        }
    }


    if(rev) {
        cout << week[idx];
    } else{
        cout << week[7-idx];
    }
    return 0;
}