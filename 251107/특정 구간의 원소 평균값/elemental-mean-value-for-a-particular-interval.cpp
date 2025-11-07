#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int cnt = 0;
    double avg;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // 시작점 -> 끝점 
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }

            avg = (double)sum/(j-i+1);

            for(int k=i; k<=j; k++){
                if(avg == (double)arr[k]){
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}