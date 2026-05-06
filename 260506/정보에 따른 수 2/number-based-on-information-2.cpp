#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, a, b;
    cin >> T >> a >> b;

    vector<int> S, N;

    for (int i = 0; i < T; i++) {
        char c;
        int x;
        cin >> c >> x;

        if (c == 'S')
            S.push_back(x);
        else
            N.push_back(x);
    }

    int answer = 0;

    for (int k = a; k <= b; k++) {

        int d1 = 1e9;
        int d2 = 1e9;

        // 가장 가까운 S 거리
        for (int s : S) {
            d1 = min(d1, abs(k - s));
        }

        // 가장 가까운 N 거리
        for (int n : N) {
            d2 = min(d2, abs(k - n));
        }

        // 특별한 위치인지 확인
        if (d1 <= d2)
            answer++;
    }

    cout << answer << '\n';

    return 0;
}