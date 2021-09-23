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


    void testPlusOperator2() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TimeHrMn t1(15,50);  // test constructors
        TS_ASSERT_EQUALS(15, t1.getHours());
        TS_ASSERT_EQUALS(50, t1.getMinutes());
        TimeHrMn t2(12,30);
        TS_ASSERT_EQUALS(12, t2.getHours());
        TS_ASSERT_EQUALS(30, t2.getMinutes());
        TimeHrMn t3 = t1 + t2;
        TS_ASSERT_EQUALS(4, t3.getHours());
        TS_ASSERT_EQUALS(20, t3.getMinutes());


        t3.Print();
    }

    //  a       b
    //  |-------|
    void testLessOperator2() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TimeHrMn t1(15,50);  // test constructors
        TS_ASSERT_EQUALS(15, t1.getHours());
        TS_ASSERT_EQUALS(50, t1.getMinutes());
        TimeHrMn t2(12,30);
        TS_ASSERT_EQUALS(12, t2.getHours());
        TS_ASSERT_EQUALS(30, t2.getMinutes());

        TS_ASSERT(t2 < t1);
    }

    void testLessOperator3() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TimeHrMn t1(15,50);  // test constructors
        TS_ASSERT_EQUALS(15, t1.getHours());
        TS_ASSERT_EQUALS(50, t1.getMinutes());
        TimeHrMn t2(15,50);
        TS_ASSERT_EQUALS(15, t2.getHours());
        TS_ASSERT_EQUALS(50, t2.getMinutes());

        TS_ASSERT(!(t1 < t2));
    }

    void testGEOperator2() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TimeHrMn t1(15,50);  // test constructors
        TS_ASSERT_EQUALS(15, t1.getHours());
        TS_ASSERT_EQUALS(50, t1.getMinutes());
        TimeHrMn t2(12,30);
        TS_ASSERT_EQUALS(12, t2.getHours());
        TS_ASSERT_EQUALS(30, t2.getMinutes());

        TS_ASSERT(t1 >= t2);
    }

    void testGEOperator3() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TimeHrMn t1(15,50);  // test constructors
        TS_ASSERT_EQUALS(15, t1.getHours());
        TS_ASSERT_EQUALS(50, t1.getMinutes());
        TimeHrMn t2(15,50);
        TS_ASSERT_EQUALS(15, t2.getHours());
        TS_ASSERT_EQUALS(50, t2.getMinutes());

        TS_ASSERT(t1 >= t2);
    }
    void testGEOperator4() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TimeHrMn t1(15,50);  // test constructors
        TS_ASSERT_EQUALS(15, t1.getHours());
        TS_ASSERT_EQUALS(50, t1.getMinutes());
        TimeHrMn t2(12,30);
        TS_ASSERT_EQUALS(12, t2.getHours());
        TS_ASSERT_EQUALS(30, t2.getMinutes());

        TS_ASSERT(!(t2 >= t1));
    }
};

#endif //CSC109CH07OPERATOR_NEWCXXTEST_H
