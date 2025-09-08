#include <iostream>
using namespace std;

int main() {
    int h, w, b;

    cin >> h >> w;

    b = (10000*w)/(h*h);

    

    if(b>=25){
        cout << b << endl << "Obesity";
    } else{
        cout << b;
    }
    return 0;
}