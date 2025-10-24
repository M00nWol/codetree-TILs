#include <iostream>
#include <string>

using namespace std;

int n;
string date;
string day;
string weather;

class Fut{
    public:
        string date, day, weather;
        Fut() {};
        Fut(string date, string day, string weather){
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
};

int main() {
    cin >> n;
    Fut futs[n];
    int idx = -1;

    for (int i = 0; i < n; i++) {
        cin >> date >> day >> weather;
        futs[i] = Fut(date, day, weather);
    }

    for(int i=0; i<n; i++){
        if(futs[i].weather == "Rain" && (idx==-1 || futs[i].date < futs[idx].date)){
            idx = i;
        }
    }

    cout << futs[idx].date << " " << futs[idx].day << " " << futs[idx].weather;

    return 0;
}