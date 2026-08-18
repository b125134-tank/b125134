#include <iostream>
#include <string>
using namespace std;

class Song{
private:
    string songName;
    string artistName;
    float duration;

public:
    Song(string song, string artist, float time){
        songName = song;
        artistName = artist;
        duration = time;
    }

    friend void compareSongs(Song s1, Song s2);
};

void compareSongs(Song s1, Song s2){
    cout << "Song 1: " << s1.songName << endl;
    cout << "Artist: " << s1.artistName << endl;
    cout << "Duration: " << s1.duration << " minutes" << endl;

    cout << endl;

    cout << "Song 2: " << s2.songName << endl;
    cout << "Artist: " << s2.artistName << endl;
    cout << "Duration: " << s2.duration << " minutes" << endl;

    cout << endl;

    if (s1.duration > s2.duration){
        cout << "Song 1 is longer." << endl;
    }
    else if (s2.duration > s1.duration){
        cout << "Song 2 is longer." << endl;
    }
    else{
        cout << "Both songs have the same duration." << endl;
    }
}

int main(){
    Song s1("Perfect", "Ed Sheeran", 4.23);
    Song s2("Believer", "Imagine Dragons", 3.24);
    compareSongs(s1, s2);
    return 0;
}