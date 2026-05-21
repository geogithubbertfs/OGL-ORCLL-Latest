#pragma once

#define IDENTIFIERS_H__

// Identifier is used to show what is for:
/*
* for example:
*   typedef struct _rand rand;
*   struct _rand;
*   OGLAPI typedef struct _randObj randObj;
*   OGLOBJ struct _randObj
*   {
*       rand randObjMade;
*   };
*   in your main file:
*   randObj* obj;
*/
// regular identifiers
#ifndef OGLAPI
    #define OGLAPI 
#endif

#ifndef OGLMETHOD
    #define OGLMETHOD 
#endif


// special identifiers
#ifndef OGLSIGNAL
    #define OGLSIGNAL 
#endif

#ifndef OGLMACRO
    #define OGLMACRO 
#endif

#ifndef OGLOBJECT
    #define OGLOBJECT 
#endif

#ifndef OGLTYPE
    #define OGLTYPE
#endif

#ifndef OGLBOOL
    #define OGLBOOL 
#endif

#ifndef OGLMATH
    #define OGLMATH 
#endif

// for deprecated purposes only:
#ifndef OGLDEPRECATED
    #define OGLDEPRECATED 
#endif

#ifndef OGLIO
    #define OGLIO 
#endif

#undef IDENTIFIERS_H__