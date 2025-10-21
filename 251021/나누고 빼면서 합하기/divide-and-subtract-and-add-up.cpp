#include <iostream>

using namespace std;

int n, m;
int A[100];

int Sum(){
    int sum = 0;

    sum += A[m-1];

    while(m!=1){
        if(m%2==0){
            m /= 2;
        } else {
            m--;
        }

        sum += A[m-1];
    }

    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << Sum();

    return 0;
}