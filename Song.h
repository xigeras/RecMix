#ifndef SONG_H
#define SONG_H

#include <string>
using namespace std;

class Song {
    private:
        string title;
        string artist;
        int duration; // in seconds
    
    public:
        Song();
        Song(string songTitle, string songArtist, int songDuration);

        //setters
        void setTitle(string songTitle);
        void setArtist(string songArtist);
        void setDuration(int songDuration);

        //getters
        string getTitle() const;
        string getArtist() const;
        int getDuration() const;

        void display() const; // full info
        void display(bool fullInfo) const; // overloaded: if false, just title and artist 

        bool operator==(const Song& other) const;

        friend ostream& operator<<(ostream& os, const Song& song);
};

#endif