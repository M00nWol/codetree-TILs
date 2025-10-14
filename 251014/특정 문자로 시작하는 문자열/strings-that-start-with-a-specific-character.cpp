#include <iostream>
using namespace std;

int main() {
    int n;
    string arr[20];
    char c;

    int cnt = 0;
    double sum = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> c;

    for(int i=0; i<n; i++){
        if(arr[i][0] == c){
            cnt++;
            sum += arr[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << cnt << " " << sum/cnt;


    return 0;
}