#include <iostream>
using namespace std;

int main() {
    int day=11, hour=11, min=11;
    int a, b, c;
    int time = 0;

    cin >> a >> b >> c;

    if(a<11 || (a==11&&b<11) || (a==11&&b==11&&c<11)){
        cout << -1;
        return 0;
    }

    while(true){
        if(day==a && hour==b && min==c){
            break;
        }

        time++;
        min++;

        if(min==60){
            hour++;
            min=0;
        }

        if(hour==24){
            day++;
            hour = 0;
        }
    }

    cout << time;

    return 0;
}