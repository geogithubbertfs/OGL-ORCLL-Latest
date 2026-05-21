#pragma once

#include <gtk/gtk.h>

#ifndef MACROS_H__
#define MACROS_H__

    // signal connection macro
#define olSignal(instance, CALLBACK_FUNC, specificSignal)           \
                 g_signal_connect(G_OBJECT(app), specificSignal, G_CALLBACK(CALLBACK_FUNC), NULL)
                
// all ogl macros
#define O_APP(inst)             (G_TYPE_CHECK_INSTANCE_CAST ((inst),        \
                                 G_TYPE_OBJECT, oApp))


                
#endif