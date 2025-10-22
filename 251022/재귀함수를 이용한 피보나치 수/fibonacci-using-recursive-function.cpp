#include <iostream>

using namespace std;

int N;

int Pib(int n){
    if(n==1){
        return 1;
    }

    if(n==2){
        return 1;
    }

    return Pib(n-1)+Pib(n-2);
}

int main() {
    cin >> N;

    cout << Pib(N);

    return 0;
}