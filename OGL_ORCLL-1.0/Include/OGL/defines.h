#pragma once

#ifndef DEFINES_H__
#define DEFINES_H__

#define objnull NULL
#define __null NULL 
#define ret return 
                  
// ogl's specific signals
#define OL_ACTIVATE                 "activate"
#define OL_ONCLICK                  "clicked"

// gtk syntax being tranferred to my syntax
#define OL_APP_TYPE                 G_TYPE_APPLICATION
#define OL_TYPE_CHECK_INST          G_TYPE_CHECK_INSTANCE_CAST

// custom main method since this isn't c++ I love both c and c++ btw
#define ogl_main                    int main(int argc, char** argv)
#endif