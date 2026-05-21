#pragma once

#ifndef OLBOOL_H__
#define OLBOOL_H__
#include "identifiers.h"
#include "variables.h"

// ogl's native homemade boolean function
OGLAPI typedef olInt olBool;

OGLAPI olEnum _olBoolValues olBoolValues;
OGLBOOL enum _olBoolValues
{
    OL_TRUE               = 1,
    OL_FALSE              = 0
};

#define True OL_TRUE
#define False OL_FALSE



#endif