#include <iostream>
using namespace std;

int NumOfDays(int month, int day){
    int numOfDay[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cnt= 0;

    for(int i=1; i<month; i++){
        cnt += numOfDay[i];
    }

    cnt += day;

    return cnt;

}

int main() {
    int m1, d1, m2, d2;
    int days;
    int cnt = 0;
    int d;
    string s;

    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> s;

    days = NumOfDays(m2, d2) - NumOfDays(m1, d1);

    for(int i=0; i<7; i++){
        if(s == week[i]){
            d = i; 
            break;
        }
    }

    cnt += days/7;
    if((days%7)>=d){
        cnt++;
    }

    cout << cnt;
    return 0;
}