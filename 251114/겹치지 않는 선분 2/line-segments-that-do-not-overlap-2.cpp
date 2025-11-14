#include <iostream>
#include <algorithm>

#define MAX 1000000
using namespace std;

class Line{
    public:
        int start;
        int end;

        Line(){};
        Line(int start, int end){
            this->start = start;
            this->end = end;
        }
};

bool Cmp(const Line& a, const Line& b){
    return a.start < b.start;
}

int main() {
    Line line[100];   
    int flag[100] = {};
    int n;
    int a, b;
    int cnt = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> line[i].start >> line[i].end;
    }

    sort(line, line+n,Cmp);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(flag[j]) continue;
            
            if(line[j].end<line[i].end){
                flag[i] = 1;
                flag[j] = 1;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(flag[i]==0){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}