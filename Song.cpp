#include "Song.h"
#include <iostream>

using namespace std;

Song::Song() {
    title = "";
    artist = "";
    duration = 0;
}

Song::Song(string songTitle, string songArtist, int songDuration) {
    title = songTitle;
    artist = songArtist;
    duration = songDuration;
}

void Song::setTitle(string songTitle) {
    title = songTitle;
}

void Song::setArtist(string songArtist) {
    artist = songArtist;
}

void Song::setDuration(int songDuration) {
    duration = songDuration;
}

string Song::getTitle() const { return title; }
string Song::getArtist() const { return artist; }
int Song::getDuration() const { return duration; }

void Song::display() const {
    cout << "" " << title << " "" << "by " << artist << " [" << duration << " sec]" << endl;
}

void Song::display(bool fullInfo) const {
    if (fullInfo) {
        display();
    } else {
        cout << "" " << title << " "" << " by " << artist << endl;
    }
}

bool Song::operator==(const Song& other) const {
    return (title == other.title && artist == other.artist && duration == other.duration);
}

ostream& operator<<(ostream& os, const Song& song) {
    os << "" " << song.title << " "" << " by " << song.artist << " [" << song.duration << " sec]";
    return os;
}