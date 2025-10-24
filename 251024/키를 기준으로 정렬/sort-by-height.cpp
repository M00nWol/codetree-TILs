#include <iostream>
#include <algorithm>

using namespace std;

int n;
string name;
int height;
int weight;

class Human{
    public:
        string name;
        int height, weight;

        Human(){};
        Human(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(const Human &a, const Human &b){
    return a.height < b.height;
}

int main() {
    cin >> n;

    Human human[n];

    for (int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        human[i] = Human(name, height, weight);
    }

    sort(human, human+n, cmp);

    for(int i=0; i<n; i++){
        cout << human[i].name << " " << human[i].height << " " << human[i].weight << endl;
    }

    return 0;
}