#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int oddsum = 0, evensum = 0;
    int res;

    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    for(int i=0; i<10; i++){
        if(i%2==0) {
            oddsum += arr[i];
        } else {
            evensum += arr[i];
        }
    }

    if(oddsum>=evensum) res = oddsum-evensum;
    else res = evensum-oddsum;

    cout << res;
    
    return 0;
}