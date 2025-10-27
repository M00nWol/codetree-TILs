#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int hour, min;
    int time = 0;

    cin >> a >> b >> c >> d;

    hour = a;
    min = b;

    while(true){
        if(hour == c && min == d){
            break;
        }

        min++;
        time++;

        if(min == 60){
            hour++;
            min = 0;
        }
    }

    cout << time;
    return 0;
}