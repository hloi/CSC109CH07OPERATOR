//
// Created by hloi on 9/23/2021.
//

#ifndef CSC109CH07OPERATOR_TIMEHRMN_H
#define CSC109CH07OPERATOR_TIMEHRMN_H


class TimeHrMn {
public:
    TimeHrMn(int timeHours = 0, int timeMinutes = 0);
    void Print() const;
    TimeHrMn operator+(TimeHrMn rhs) ;
    int getHours() const;
    int getMinutes() const;
private:
    int hours;
   int minutes;


};


#endif //CSC109CH07OPERATOR_TIMEHRMN_H
