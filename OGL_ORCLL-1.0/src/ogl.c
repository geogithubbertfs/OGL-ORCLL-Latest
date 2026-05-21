#include "OGL/ogl1.h"
#include "olbool.h"
#include <gtk/gtk.h>

void OS_DEBUG()
{
    #ifdef __APPLE__
        // This gets the current working directory for users on mac
        char cwdBuffer[2000];
        size_t __LEN__ = sizeof(cwdBuffer);
        getcwd(cwdBuffer, __LEN__);

        // needed for printing silicon/cpu type
        char chipBuffer[200];
        size_t bufferLen = 200;
        sysctlbyname("machdep.cpu.brand_string", &chipBuffer, &bufferLen, NULL, 0);
        
        olConsole_Log("GTK: I have started running.......\n");
        olConsole_Log("OGL.lib has initialized.......\n");
        olConsole_Log("OGL.lib has started running.......\n");
        olConsole_Log("OGL.lib: [OS INFO] OGL is currently Running on MacOS\n");

        olConsole_Log("[INFO.SYS]         > current provider..... %s\n", "Apple");
        olConsole_Log("[INFO.SYS]         > current processor vendor..... %s\n", chipBuffer);  
        olConsole_Log("[INFO.SYS]         > current working directory..... %s\n", cwdBuffer);

        olConsole_Log("                                              \n");
        olConsole_Log("OGL.lib: [INFO]    OGL is Now Showing... Window configurations\n");
    
    #elif __linux__
        olConsole_Log("GTK: I have started running.......\n");
        olConsole_Log("OGL.lib has initialized.......\n");
        olConsole_Log("OGL.lib has started running.......\n");
        olConsole_Log("OGL.lib: [OS INFO] OGL is currently Running on a Linux Distro\n");

        olConsole_Log("[INFO]             > current provider..... %s\n", "Linux");
        olConsole_Log("[INFO]             > current processor vendor..... %s\n", "cannot get processor name for linux users yet :(");  
        olConsole_Log("[INFO]             > current working directory..... %s\n", );

        olConsole_Log("                                              \n");
        olConsole_Log("OGL.lib: [INFO]    OGL is Now Showing... Window configurations\n");
    
    #else 
        olConsole_Log("Could not find OS type\n");
    #endif
}

void olInitApp()
{
    OS_DEBUG();
}

olApp * new_olApp(const olChar* ID)
{ 
    if (ID == NULL)
    {
        olConsole_Log("[INFO]             > application ID: %s\n", "There is no application ID set, please set one");
    }
    else 
    {
        olConsole_Log("[INFO]             > application ID: %s\n", ID);
    }

    return (olApp*)gtk_application_new((const char*)ID, G_APPLICATION_DEFAULT_FLAGS);
}

olWidget * new_olWindow(olApp* app)
{   
    return (olApp*)gtk_application_window_new(app);
}

void olSetWindowTitle(olWindow* window, const olChar* title)
{
    if(title == NULL)
    {
        olConsole_Log("[INFO]             > application Title: There is no title set\n");
        gtk_window_set_title(GTK_WINDOW(window), "(No Title)");
    }

    else {
        olConsole_Log("[INFO]             > application Title: \"%s\"\n", title);
        gtk_window_set_title(GTK_WINDOW(window), (const char*)title);
    }
}

void olSetWindowSize(olWindow* window, olInt width, olInt height)
{
    olConsole_Log("[INFO]             > application Size: w:%d x h:%d\n", width, height);
    gtk_window_set_default_size(GTK_WINDOW(window), width, height);
}

void olShow(olWindow* window, olBool ifShowable)
{
    if (ifShowable == 1)
    {
        olConsole_Log("[WINDOW]           > called window object's show method: It is set to: %s\n", ifShowable ? "true" : "false");
        gtk_window_present(GTK_WINDOW(window));
    }

    if (ifShowable == 0)
    {
        olConsole_Log("OGL.lib: [ERROR] > Window could not show itself: please set olShow(<window name>, False)<- to True\n                 > Press ^+C (control + c) to exit\n");
    }
}

olWidget * new_olButton(const olChar* text)
{
    olConsole_Log("WIDGET.lib [INFO] > this window has a button with the text: %s\n", text);
    return (const olChar*)gtk_button_new_with_label(text);
}

void olAddWidgetToWindow(olWindow* win, olWidget* widgetObj)
{
    gtk_window_set_child(GTK_WINDOW(win), G_OBJECT(widgetObj));
}

int olAppRun(olApp* app, int argc, char** argv)
{
    (olApp*)g_application_run(G_APPLICATION(app), argc, argv);
}

struct _olApp
{
    GtkApplication oAppExtend;
};

struct _oApp
{
    GApplication parentInstance;
};

struct _olWidget
{
    GtkWidget ParentInstance;
};

struct _olWindow
{
    olWidget olWidgetExtend;
};






