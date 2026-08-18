#include <iostream>
#include <string>
using namespace std;

class Diary{
private:
    string ownerName;
    int numberOfEntries;
    string lastEntry;

public:
    Diary(string name, int entries, string entry){
        ownerName = name;
        numberOfEntries = entries;
        lastEntry = entry;
    }

    friend void displayDiary(Diary d);                                            // Friend function declaration
};


void displayDiary(Diary d){                                                    // Friend function definition
    cout << "Owner Name      : " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry      : " << d.lastEntry << endl;
}

int main(){
    Diary d("Tanishq", 25, "Today I completed my C++ laboratory work.");
    displayDiary(d);
    return 0;
}