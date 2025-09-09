#include <iostream>
using namespace std;

int main() {
    int m;
    string season;

    cin >> m;

    if(m>=3 && m<=5){
        season = "Spring";
    } else if (m>=6 && m<=8){
        season = "Summer";
    } else if (m>=9 && m<=11){
        season = "Fall";
    } else {
        season = "Winter";
    }

    cout << season;
    return 0;
}