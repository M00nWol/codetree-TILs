#include <iostream>
using namespace std;

int main() {
    int n;
    string arr[10];
    int sum = 0, a = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        sum += arr[i].length();
        if(arr[i][0] == 'a'){
            a++;
        }
    }

    cout << sum << " " << a;
    return 0;
}