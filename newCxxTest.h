//
// Created by hloi on 9/23/2021.
//

#ifndef CSC109CH07OPERATOR_NEWCXXTEST_H
#define CSC109CH07OPERATOR_NEWCXXTEST_H

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include "TimeHrMn.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testPlusOperator() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TimeHrMn t1(5,20);  // test constructors
        TS_ASSERT_EQUALS(5, t1.getHours());
        TS_ASSERT_EQUALS(20, t1.getMinutes());
        TimeHrMn t2(12,30);
        TS_ASSERT_EQUALS(12, t2.getHours());
        TS_ASSERT_EQUALS(30, t2.getMinutes());
        TimeHrMn t3 = t1 + t2;
        TS_ASSERT_EQUALS(17, t3.getHours());
        TS_ASSERT_EQUALS(50, t3.getMinutes());


        t3.Print();
    }
};

#endif //CSC109CH07OPERATOR_NEWCXXTEST_H
