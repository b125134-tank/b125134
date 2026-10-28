#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Threats: " << threats << endl;
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic Scanner" << endl;
        cout << "Threats Detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Advanced Scanner" << endl;
        cout << "Threats Detected: " << threats << endl;
        cout << "Threats Remaining: "
             << threats * 0.10 << endl;
    }
};

int main() {
    int threats;
    cout << "Enter number of threats: ";
    cin >> threats;

    if (threats < 0) {
        cout << "Invalid number of threats!" << endl;
        return 0;
    }

    BasicScanner basic;
    AdvancedScanner advanced;

    SecurityScanner *ptr;

    ptr = &basic;
    ptr->scan(threats);

    ptr = &advanced;
    ptr->scan(threats);

    return 0;
}