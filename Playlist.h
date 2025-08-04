#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
#include <string>
#include "Song.h"
#include <iostream>

using namespace std;

class Playlist {
    private:
        vector<Song> songs;
        string name;
    public:
        Playlist();
        Playlist(string playlistName, const vector<Song>& songList);
        Playlist(string playlistName);

        void setName(string playlistName);
        string getName() const;
        
 
        void addSong(const Song& song);

        Playlist operator+(const Playlist& other) const;

        friend ostream& operator<<(ostream& os, const Playlist& playlist);
};

#endif