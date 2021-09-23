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

    timeTotal.hours  = ((this->hours + rhs.hours) + ((this->minutes + rhs.minutes) / 60)) % 24;
    timeTotal.minutes = (this->minutes + rhs.minutes) % 60;

    return timeTotal;
}

int TimeHrMn::getHours() const {
    return hours;
}

int TimeHrMn::getMinutes() const {
    return minutes;
}

bool TimeHrMn::operator<(TimeHrMn rhs) {
    if (this->hours == rhs.hours) {
        return this->minutes < rhs.minutes;
    }

    return (this->hours < rhs.hours);

}

bool TimeHrMn::operator>=(TimeHrMn rhs) {
    return !(*this < rhs);
}

// int* i = address 1000
// address 1000 = 10
// i = address 1000
// *i = 10
// this = 100000
// address 100000 = current object TimeHrMn
// *this = current object TimeHrMn