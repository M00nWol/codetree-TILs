#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, k, idx;
    int max_idx = 0;
    char c[10000] = {};
    int max_score=INT_MIN;
    int score;

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> idx;
        cin >> c[idx];
        max_idx = max(max_idx, idx);
    }


    for(int i=1; i<=10000-k; i++){
        score = 0;
        for(int j=i; j<=i+k; j++){
            if(c[j]=='G'){
                score += 1;
            } else if(c[j]=='H'){
                score += 2;
            }
        }
        max_score = max(max_score, score);
    }

    cout << max_score;

    return 0;
}