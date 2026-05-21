#pragma once
#define OGL_H__

// requried for macOS debug: for printing Processor name, and current working directory
#include <sys/types.h>
#include <sys/sysctl.h>
#include <stdlib.h>

// required for linux Distro debug
/* Can find includes yet */

// all includes of needed header in the project folder
// So they don't need to be included indivually
#include "variables.h"
#include "macros.h"
#include "objects.h"
#include "structs.h"
#include "typedefs.h"
#include "variables.h"
#include "defines.h"
#include "io.h"
#include "olmath.h"
#include "olbool.h"
// why #include "identifiers.h" isn't here: 
// identifiers.h has to be specially included because, 
// it is meant for if you are using this library to make your own library,
// so atlast only use it unless you know what it is for,
// They are also included in the other header files

#undef OGL_H__