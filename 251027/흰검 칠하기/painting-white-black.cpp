#include <iostream>
using namespace std;

class Tile{
    public:
        int color;  // 1 : white , 2: black
        int wvalue;
        int bvalue;
        Tile(){
            this->color = 0;
            this->wvalue = 0;
            this->bvalue = 0;
        };
};

int main() {
    Tile tile[200001];
    int n, x[1000];
    char c[1000];
    int white=0, black=0, gray=0;
    int tmp = 100000;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x[i] >> c[i];
    }

    for(int i=0; i<n; i++){
        if(c[i]=='L'){
            for(int j=tmp; j>tmp-x[i];j--){
                tile[j].color = 1;
                tile[j].wvalue++;
            }
            tmp -= (x[i]-1);
        } else{
            for(int j=tmp; j<tmp+x[i]; j++){
                tile[j].color = 2;
                tile[j].bvalue++;
            }
            tmp += (x[i]-1);
        }
    }


    for(int i=0; i<200001; i++){
        if((tile[i].wvalue>=2) && (tile[i].bvalue>=2)){
            gray++;
            continue;
        } else if(tile[i].color ==1){
            white++;
            continue;
        } else if(tile[i].color ==2){
            black++;
            continue;
        }
    }


    cout << white << " " << black << " " << gray;
    return 0;
}