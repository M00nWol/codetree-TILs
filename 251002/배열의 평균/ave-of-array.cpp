#include <iostream>
using namespace std;

int main() {
    double r1, r2, c1, c2, c3, c4, sum;
    int arr[2][4];

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            if(i==0){
                r1 += arr[i][j];
            } else {
                r2 += arr[i][j];
            }

            if(j==0){
                c1 += arr[i][j];
            } else if(j==1){
                c2 += arr[i][j];
            } else if(j==2){
                c3 += arr[i][j];
            } else {
                c4 += arr[i][j];
            }

            sum += arr[i][j];
        }
    }

    
    cout << fixed;
    cout.precision(1);

    r1/=4;
    r2/=4;
    c1/=2;
    c2/=2;
    c3/=2;
    c4/=2;
    sum/=8;

    cout << r1 << " " << r2 << endl;
    cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
    cout << sum;

    return 0;
}