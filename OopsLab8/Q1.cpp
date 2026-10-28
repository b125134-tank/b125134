#include <iostream>
using namespace std;

class Character {
public:
    virtual int attack() {
        return 0;
    }
};

class Warrior : public Character {
    int strength;

public:
    Warrior(int s) {
        strength = s;
    }

    int attack() override {
        return 20 + 2 * strength;
    }
};

class Archer : public Character {
    int agility;

public:
    Archer(int a) {
        agility = a;
    }

    int attack() override {
        return 15 + 3 * agility;
    }
};

int main() {
    Warrior w(10);
    Archer a(15);

    cout << "Warrior Damage: " << w.attack() << endl;
    cout << "Archer Damage: " << a.attack() << endl;

    return 0;
}