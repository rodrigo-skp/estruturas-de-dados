#include "../include/pair.hpp"

template <class T, class U>
Pair<T, U>::Pair(const T& first, const U& second) : _first{first}, _second{second} {}

template <class T, class U>
const T& Pair<T, U>::first() const {
    return _first;
}

template <class T, class U>
T& Pair<T, U>::first() {
    return _first;
}

template <class T, class U>
const U& Pair<T, U>::second() const {
    return _second;
}

template <class T, class U>
U& Pair<T, U>::second() {
    return _second;
}

template <class T, class U>
bool Pair<T, U>::operator==(const Pair<T, U>& other) const {
    return first() == other.first() and second() == other.second();
}

template <class T, class U>
bool Pair<T, U>::operator!=(const Pair<T, U>& other) const {
    return first() != other.first() and second() != other.second();
}

template <class T, class U>
bool Pair<T, U>::operator>(const Pair<T, U>& other) const {
    if (first() > other.first() or first() > other.second()){
        return true;
    } else if (second() > other.first or second() > other.second()) {
        return true;
    } else { 
        return false;
    }
}
 





