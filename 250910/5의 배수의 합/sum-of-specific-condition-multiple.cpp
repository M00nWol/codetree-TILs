#include <iostream>
using namespace std;

int main() {
    int a, b, max, min;
    int sum = 0;

    cin >> a >> b;

    if(a>=b){
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    for(int i=min; i<=max; i++){
        if(i%5==0){
            sum += i;
        }
    }

    cout << sum;
    return 0;
}