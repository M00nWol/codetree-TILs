#include <iostream>
using namespace std;

int main() {
    string res[10];
    int score[4], n;
    int cnt = 0;
    double sum = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        sum = 0;

        for(int j=0; j<4; j++){
            cin >> score[j];
            sum += score[j];
        }

        if((sum/4)>=60){
            res[i] = "pass";
            cnt++;
        } else {
            res[i] = "fail";
        }
    }

    for(int i=0; i<n; i++){
        cout << res[i] << endl;
    }

    cout << cnt;

    return 0;
}