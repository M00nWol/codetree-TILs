#include <iostream>
using namespace std;

int main() {
    int a, b;
    int res[10] = {};
    int sum = 0;

    cin >> a >> b;


    while(a>1){
        res[a%b]++;
        a /= b;
    }

    for(int i=0; i<=b-1; i++){
        sum += res[i]*res[i];
    }

    cout << sum;
    return 0;
}