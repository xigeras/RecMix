#include <iostream>
#include "Song.h"
#include "Playlist.h"
#include "Utilities.h"

using namespace std;

int main() {
    Song s1("Cradles", "Sub Urban", 209);
    Song s2("Necromancin Dancin", "Bear Ghost", 227);
    Song s3("Hell's Comin' With Me", "Poor Man's Poison", 213);

    Playlist p1("My Favorite Songs");
    Playlist p2("Indie Hits");
    p1.addSong(s1);
    p1.addSong(s2);
    p1.addSong(s3);
    p2.addSong(s1);
    p2.addSong(s2);

    cout << p1 << endl;
    cout << p2 << endl;

    Playlist merged = p1 + p2;
    cout << merged << endl;

    cout << "Display full info:\n";
    s1.display();
    s2.display();
    s3.display();
    cout << "\nDisplay title & artist only:\n";
    s1.display(false);
    s2.display(false);
    s3.display(false);

    int maxDuration = getMax(s1.getDuration(), s2.getDuration());
    cout << "\nMax duration is: " << maxDuration << " sec" << endl;

    Song longerSong = getMax(s1, s2);
    cout << "Longer song between " << s1.getTitle() << " and " << s2.getTitle() << " is: " << longerSong << endl;

    Song sA = s1, sB = s2;
    shufflePair(sA, sB);
    cout << "\nAfter shuffle: " << sA << " and " << sB << endl;

    PlaylistContainer<int> playCounts(120, 150);
    cout << "Longest play count: " << playCounts.getLongest() << endl;

    PlaylistContainer<Song> songPair(s2, s3);
    cout << "Longest song in pair: " << songPair.getLongest() << endl;

    return 0;
}