#include <iostream>
using namespace std;

int main() {
    int y;
    string res;

    cin >> y;

    if(y%4==0){
        res = "true";
        if(y%100==0 && y%400!=0){
            res = "false";
        }
    }

    cout << res;
    return 0;
}