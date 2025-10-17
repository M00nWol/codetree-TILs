#include <iostream>

using namespace std;

int y;

bool Check(int n){
    if(n%4!=0){
        return false;
    } else if(n%100==0 && n%400!=0) {
        return false;
    }
    return true;
}

int main() {
    cin >> y;
    string res;

    res = Check(y)?"true":"false";

    cout << res;
    return 0;
}