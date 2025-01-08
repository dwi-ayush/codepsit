#include "factorial.h"
#include <iostream>
namespace factero{
    int factorial(int n){
        if (n<2)
            return 1;
        else
            return factorial(n-1)*n;
    }
}