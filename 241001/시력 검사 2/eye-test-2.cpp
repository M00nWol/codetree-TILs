#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;

    if(a>=1.0){
        cout << "High";
    } elif(a>=0.5){
        cout << "Middle";
    } else{
        cout << "Low";
    }
    return 0;
}