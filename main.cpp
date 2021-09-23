#include <iostream>
#include "TimeHrMn.h"

using namespace std;

int main() {
    TimeHrMn t1(18,50);
    TimeHrMn t2(12,30);
    TimeHrMn t3 = t1 + t2;
    t3.Print();
    return 0;
}
