#include <iostream>
#include <cctype>
using namespace std;

void analyzeText(char *ptr){
    int digits = 0;
    int alphabets = 0;
    int spaces = 0;

    while (*ptr != '\0'){
        if (isdigit(*ptr))
            digits++;
        else if (isalpha(*ptr))
            alphabets++;
        else if (*ptr == ' ')
            spaces++;

        ptr++;
    }

    cout << "Number of digits = " << digits << endl;
    cout << "Number of alphabets = " << alphabets << endl;
    cout << "Number of spaces = " << spaces << endl;
}

int main(){
    char sentence[200];

    cout << "Enter a sentence: ";
    cin.getline(sentence, 200);

    analyzeText(sentence);

    return 0;
}