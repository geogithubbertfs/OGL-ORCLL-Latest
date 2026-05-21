#pragma once

#ifndef STRUCTS_H__
#define STRUCTS_H__
#include "identifiers.h"

OGLAPI typedef struct _oApp oApp;
OGLOBJECT struct _oApp;

OGLAPI typedef struct _olApp olApp;
OGLOBJECT struct _olApp;

OGLAPI typedef struct _olWidget olWidget;
OGLOBJECT struct _olWidget;

OGLAPI typedef struct _olWindow olWindow;
OGLOBJECT struct _olWindow;

OGLAPI typedef struct _olColor olColor;
OGLOBJECT struct _olColor
{
    olFloat red;
    olFloat green;
    olFloat blue;
    olFloat alpha;
};

OGLAPI typedef struct _olFrameArray olFrameArray;
OGLOBJECT struct _olFrameArray
{
    const olChar* Title;
    int width;
    int height;
};

#endif