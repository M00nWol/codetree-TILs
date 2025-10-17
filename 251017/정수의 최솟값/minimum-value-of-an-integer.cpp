#include <iostream>

using namespace std;

int a, b, c;

int min(int a, int b, int c){
    int min = a;
    if(min>b){
        min = b;
    }
    if(min>c){
        min = c;
    }

    return min;
}

int main() {
    cin >> a >> b >> c;
    cout << min(a, b, c);
    return 0;
}