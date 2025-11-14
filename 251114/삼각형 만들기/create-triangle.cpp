#include <iostream>
#include <climits>
#include <cstdlib>

using namespace std;

int x[100]={};
int y[100]={};

int ReturnY(int i, int j, int k){
    if(y[i]==y[j]){
        return abs(x[i]-x[j]);
    } else if(y[j]==y[k]){
        return abs(x[j]-x[k]);
    } else if(y[k]==y[i]){
        return abs(x[k]-x[i]);
    }
    return 0;
}

int ReturnX(int i, int j, int k){
    if(x[i]==x[j]){
        return abs(y[i]-y[j]);
    } else if(x[j]==x[k]){
        return abs(y[j]-y[k]);
    } else if(x[k]==x[i]){
        return abs(y[k]-y[i]);
    }
    return 0;
}


int main() {
    int n;
    int sum = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                sum = max(sum, ReturnX(i,j,k)*ReturnY(i,j,k));
            }
        }
    }

    cout << sum;
    return 0;
}