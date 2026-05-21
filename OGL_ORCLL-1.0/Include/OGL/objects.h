#pragma once

#ifndef OBJECTS_H__
#define OBJECTS_H__
#include "variables.h"
#include "structs.h"
#include "defines.h"
#include "olbool.h"

// please keep structs.h include it is needed for the olApp*, olWindow*, defines/variable <- variables.h, defines.h
// methods for new object
OGLAPI olApp * new_olApp                    (const olChar* ID);

OGLAPI olWidget * new_olWindow              (olApp* app);

OGLAPI olWidget * new_olButton              (const olChar* text);

OGLMETHOD void olSetWindowTitle             (olWindow* window, 
                                             const olChar* title);

OGLMETHOD void olSetWindowSize              (olWindow* window, 
                                             olInt width, 
                                             olInt height);

OGLMETHOD void olShow                       (olWindow* window,
                                             olBool ifShowable);
               
OGLMETHOD void olAddWidgetToWindow          (olWindow* win, 
                                             olWidget* widgetObj);

OGLMETHOD void olInitApp                    (void);

OGLMETHOD int olAppRun                      (olApp* app,
                                             int argc,
                                             char** argv);


#endif