//
// Created by hloi on 9/23/2021.
//
#include <iostream>

#include "TimeHrMn.h"
using namespace std;

TimeHrMn::TimeHrMn(int hours, int minutes) {
    this->hours  = hours;
    this->minutes = minutes;
}

void TimeHrMn::Print() const {
    cout << "H:" << hours << ", " << "M:" << minutes << endl;
}

// Overload + operator for TimeHrMn
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
    TimeHrMn timeTotal;

    timeTotal.hours   = this->hours   + rhs.hours;
    timeTotal.minutes = this->minutes + rhs.minutes;

    return timeTotal;
}

int TimeHrMn::getHours() const {
    return hours;
}

int TimeHrMn::getMinutes() const {
    return minutes;
}

