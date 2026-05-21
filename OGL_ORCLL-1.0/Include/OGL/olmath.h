#ifndef OLMATH_H__
#define OLMATH_H__
#include "identifiers.h"
#include "variables.h"
#include <stdio.h>
// This stores 42
#define THE_ANSWER_TO_EVERYTHING 42

OGLMATH inline int mul(olInt numOne, olInt numTwo)
{
    return numOne * numTwo;
}

OGLMATH inline int add(olInt numOne, olInt numTwo)
{
    return numOne + numTwo;
}

OGLMATH inline int sub(olInt numOne, olInt numTwo)
{
    if (numOne > numTwo)
    {
        printf("Your first number should not be greater than your second number\n");
        return 1;
    }
    else 
    {
        return numOne - numTwo;    
    }
}

OGLMATH inline int div(olInt numOne, olInt numTwo)
{
    return numOne / numTwo; 
}

OGLMATH inline int pw(olInt numOne, olInt numTwo)
{
    return numOne ^ numTwo;
}

#endif