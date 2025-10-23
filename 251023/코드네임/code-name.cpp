#include <iostream>

#define MAX_N 5

using namespace std;

string codename;
int score;

class Agent{
    public:
        string codename;
        int score;

        Agent() {}

        Agent(string codename, int score){
            this->codename = codename;
            this->score = score;
        }
};

int low(Agent* agents, int num){
    int min = 0;
    for(int i=1; i<num; i++){
        if(agents[min].score>agents[i].score){
            min = i;
        }
    }
    
    return min;
}

int main() {
    Agent agents[5];
    int res_idx;

    for(int i=0; i<5; i++){
        cin >> codename >> score;
        agents[i] = Agent(codename, score);
    }

    res_idx = low(agents, 5);

    cout << agents[res_idx].codename << " " << agents[res_idx].score;
    return 0;
}
