#include <iostream>

using namespace std;

int N;

void Print(int n){
    if(n==0){
        return;
    }

    cout << n << " ";
    Print(n-1);
    cout << n << " "; 
}

int main() {
    cin >> N;

    Print(N);

    return 0;
}