#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    cin >> n;

    int mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j%2==0){
                // tmp = 앞에서부터?
                tmp = 1+i;
            } else{
                // tmp =  뒤에서부터?
                tmp = n-i;
            }
            cout << tmp;
        }
        cout << endl;
    }
    return 0;
}