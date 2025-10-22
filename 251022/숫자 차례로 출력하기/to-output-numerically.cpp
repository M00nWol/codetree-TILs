#include <iostream>

using namespace std;

int N;

void Print2(int n){
    if(n==0){
        return;
    }

    cout << n << " ";
    Print2(n-1);
}

void Print1(int n){
    if(n==0){
        return;
    }

    Print1(n-1);
    cout << n << " ";
}

int main() {
    cin >> N;

    Print1(N);
    cout << endl;
    Print2(N);

    return 0;
}