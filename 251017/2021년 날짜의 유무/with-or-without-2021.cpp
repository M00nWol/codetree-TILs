#include <iostream>

using namespace std;

int M, D;

bool Day(int m, int d){
    if(m==2){
        return d<=28;
    } else if((m<=7&&m%2!=0)||(m>7&&m%2==0)){
        return d<=31;
    } else {
        return d<=30;
    }
}

bool Month(int m){
    return (m>=1 && m<=12);
}

bool Check(int m, int d){
    if(Month(m)){
        if(Day(m, d)){
            return true;
        }        
    }

    return false;
}

int main() {
    cin >> M >> D;

    cout << (Check(M, D)?"Yes":"No");

    return 0;
}