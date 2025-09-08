#include <iostream>
using namespace std;

int main() {
    int n;
    string res;

    cin >> n;

    if(n==1){
        res = "John";
    } else if(n==2){
        res = "Tom";
    } else if(n==3){
        res = "Paul";
    } else {
        res = "Vacancy";
    }

    cout << res;
    return 0;
}