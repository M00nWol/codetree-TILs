#include <iostream>
using namespace std;

int main() {
    int n, area;

    cin >> n;

    area = n*n;

    if(n< 5){
        cout << area << endl << "tiny";
    } else {
        cout << area;
    }
    return 0;
}