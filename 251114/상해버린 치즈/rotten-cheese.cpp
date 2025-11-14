#include <iostream>
#include <algorithm>

using namespace std;

class Cheese{
    public:
        int p;
        int m;
        int t;

        Cheese(){};
        Cheese(int p, int m, int t){
            this->p = p;
            this->m = m;
            this->t = t;
        }
};

class Record{
    public:
        int p;
        int t;

        Record(){};
        Record(int p, int t){
            this->p = p;
            this->t = t;
        }
};

bool Cmp(const Cheese& a, const Cheese& b){
    return a.t <= b.t;
}

int main() {
    int n, m, d, s;
    int sick, time;
    int cnt = 0;
    int check[50] = {};
    int oldCheese[50] = {};
    int infected[50] = {};
    Cheese cheese[1000];
    Record record[50];

    cin >> n >> m >> d >> s;

    for(int i=0; i<d; i++){
        cin >> cheese[i].p >> cheese[i].m >> cheese[i].t;
        cheese[i].p--;
        cheese[i].m--;
    }

    // Cheese 기록 시간 순으로 나열
    sort(cheese, cheese+d, Cmp);

    for(int i=0; i<s; i++){
        cin >> record[i].p >> record[i].t;
        record[i].p--;
    }

    // 아픈 시점으로 치즈 체크
    for(int i=0; i<s; i++){
        time = record[i].t;
        sick = record[i].p;

        int j=0;
        for(int i=0; i<d; i++){
            check[i] = 0;
        }
        // time 전까지 sick이 먹은 모든 치즈에 체크 
        while(cheese[j].t <= time){
            if(cheese[j].p == sick && check[cheese[j].m]==0){
                oldCheese[cheese[j].m]++;
                check[cheese[j].m]=1;
            }
            j++;
        }
    }


    // 치즈 인덱스에서 s와 그 값이 같을 경우에만 그 치즈를 먹은 사람 카운트
    for(int i=0; i<d; i++){
        int chnum = cheese[i].m;
        if(oldCheese[chnum]>=s){
            // cout << i << endl;
            infected[cheese[i].p]=1;
        }
    }

    for(int i=0; i<n; i++){
        if(infected[i]==1){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}