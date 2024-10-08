#include "cmdscreen/csScreen.h"

#include "_/CS_MainScreen.h"

/*******************************************************************************
********************************************************************* Functions
********************************************************************************

*******************************************************************************/

csScreen* cmdscreen_cs( void )
{
   // csScreen* scr = initscr();
   // raw();
   // noecho();
   // start_color();
   // init_main_screen();
   // return scr;
   init_main_screen();
   return NULL;
}

void cleanup_cmdscreen_cs()
{
   cleanup_main_screen();
   // endwin();
}

/*******************************************************************************

*******************************************************************************/

extern inline csScreen* new_screen_cs( uiRect rect );

extern inline uiSize screen_size_ui( csScreen* scr );

extern inline void remove_screen_cs( csScreen* scr );