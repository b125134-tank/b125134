#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual int calculateTarget(int score) {
        return score;
    }
};

class T20Match : public MatchFormat {
public:
    int calculateTarget(int score) override {
        return score + ceil(score * 0.01);
    }
};

class ODIMatch : public MatchFormat {
public:
    int calculateTarget(int score) override {
        return score + ceil(score * 0.02);
    }
};

int main() {
    int score;
    cout << "Enter first innings score: ";
    cin >> score;

    if (score < 0) {
        cout << "Invalid score!" << endl;
        return 0;
    }

    T20Match t20;
    ODIMatch odi;

    cout << "T20 Target: "
         << t20.calculateTarget(score) << endl;

    cout << "ODI Target: "
         << odi.calculateTarget(score) << endl;

    return 0;
}