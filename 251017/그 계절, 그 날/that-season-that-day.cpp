#include <iostream>

using namespace std;

int Y, M, D;



string Season(int m){
    switch(m){
        case 3: case 4: case 5: return "Spring";
        case 6: case 7: case 8: return "Summer";
        case 9: case 10: case 11: return "Fall";
        default: return "Winter";
    }
}

bool Special(int y){
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
            return true;
            }
            return false;
        }
        return true;

    }
    return false;
}

int Exist(int y, int m, int d){
    if(m==2){
        if(Special(y)) return 29;
        else return 28;
    } else if(m==4 || m==6 || m==9 || m==11){
        return 30;
    }
    return 31;
}

string Check(int y, int m, int d){
    if(d <= Exist(y, m, d)){
        return Season(m);
    } else {
        return "-1";
    }
}

int main() {
    cin >> Y >> M >> D;

    cout << Check(Y, M, D);

    return 0;
}