#include<iostream>
using namespace std;

class Player{
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    Player(string name,int h,int s,int l){
        playerName=name;
        health=h;
        score=s;
        level=l;
    }

    friend class GameManager;
};

class GameManager{
public:
    void display(Player p){
        cout<<"Player Name:"<<p.playerName<<endl;
        cout<<"Health     :"<<p.health<<endl;
        cout<<"Score      :"<<p.score<<endl;
        cout<<"Level      :"<<p.level<<endl;
    }

    void checkAlive(Player p){
        if(p.health>0){
            cout<<"Player is alive"<<endl;
        }else{
            cout<<"Player is dead"<<endl;
        }
    }

    void displayLevelandScore(Player p){
        cout<<"Level is:"<<p.level<<endl;
        cout<<"Score is:"<<p.score;
    }
};

int main(){
    Player p("Tanishq",95,1750,9);
    GameManager manager;
    manager.display(p);
    manager.checkAlive(p);
    manager.displayLevelandScore(p);
    return 0;
}