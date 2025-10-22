#include <iostream>

using namespace std;

int N;

int Get(int n){
    if(n==1){
        return 2;
    }

    if(n==2){
        return 4;
    }

    return (Get(n-1)*Get(n-2))%100;
}

int main() {
    cin >> N;

    cout << Get(N);

    return 0;
}