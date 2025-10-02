#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    int min;
    int cnt = 1;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    min = A[0];
    for(int i=1; i<N; i++){
        if(A[i]<min){
            cnt=1;
            min = A[i];
        }
        else if(A[i]==min){
            cnt++;
        }
    }

    cout << min << " " << cnt;

    return 0;
}
