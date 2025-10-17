#include <iostream>

using namespace std;

int a, b;

bool Prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int Sum(int a, int b){
    int sum = 0;
    for(int i=a; i<=b; i++){
        if(Prime(i)){
            sum += i;
        }
    }
    return sum;
}

int main() {
    cin >> a >> b;

    int sum = Sum(a, b);

    cout << sum;

    return 0;
}