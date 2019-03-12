#include <iostream>
#include "test.h"
#include <vector>
#include "algorithms.h"

int main()
{
    std::vector<int> v1{1,1,2,2,1};
    std::vector<int> v2{1,2,3,1,5};
    //var_3_1(v1.begin(), v1.end(), v2.begin(), v2.end());
    //var_4_1(v1.begin(), v1.end(), v2.begin(), v2.end());
    //var_5_1(v1.begin(), v1.end(), v2.begin(), v2.end());
    //var_7_1(v1.begin(), v1.end(), v2.begin(), v2.end(), 1);
    //var_8_1(v1.begin(), v1.end(), v2.begin(), v2.end());
    //var_9_1(v1.begin(), v1.end(), v2.begin(), v2.end());
    //var_10_1(v1.begin(), v1.end(), v2.begin(), v2.end(), -1);
    var_21_1(v1.begin(), v1.end(), v2.begin(), v2.end());




    return 0;
}
