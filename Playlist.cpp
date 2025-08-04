#include "Playlist.h"

Playlist::Playlist() : name("") {}

Playlist::Playlist(string playlistName, const vector<Song>& songList) {
    name = playlistName;
    songs = songList;
}

void Playlist::addSong(const Song& song) {
    for (const auto& s : songs) {
        if (s == song) return;
    }
    songs.push_back(song);
}

Playlist Playlist::operator+(const Playlist& other) const {
    Playlist merged(name + " + " + other.name);
    for (const auto& s : songs) {
        merged.addSong(s);
    }
    for (const auto& s : other.songs) {
        merged.addSong(s);
    }
    return merged;
}

ostream& operator<<(ostream& os, const Playlist& playlist) {
    os << "Playlist: " << playlist.name << endl;
    for (const auto& song : playlist.songs) {
        os << song << endl;
    }
    return os;
}

string Playlist::getName() const {
    return name;
}