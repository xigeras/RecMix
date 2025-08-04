#ifndef UTILITIES_H
#define UTILITIES_H

template <typename T>
T getMax(const T& a, const T& b) {
    return (a > b) ? a : b;
}

#include "Song.h"
template <>
Song getMax(const Song& a, const Song& b) {
    return (a.getDuration() > b.getDuration()) ? a : b;
}

template <typename T1, typename T2>
void shufflePair(T1& a, T2& b) {
    auto temp = a;
    a = b;
    b = temp;
}

template <typename T>
class PlaylistContainer {
    public: 
        T first;
        T second;

        PlaylistContainer(const T& a, const T& b) : first(a), second(b) {}

        T getLongest() const {
            return getMax(first, second);
        }
};

#endif