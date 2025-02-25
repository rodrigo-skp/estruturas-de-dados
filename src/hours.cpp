#include "../include/hours.hpp"

    Hours::Hours() : hours{0}, minutes{0}, seconds{0} {}

    Hours::Hours(int h, int m, int s) : hours{h}, minutes{m}, seconds{s} {}

    void Hours::set_time(int h, int m, int s){

        hours = h;
        minutes = m;
        seconds = s;

    }

    int Hours::get_hours() const {
        return hours;
    }

    int Hours::get_minutes() const {
        return minutes;
    }

    int Hours::get_seconds() const {
        return seconds;
    }

    int Hours::to_seconds() const{

        return hours*3600 + minutes*60 + seconds;
    }







