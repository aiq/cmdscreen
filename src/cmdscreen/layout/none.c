#include "cmdscreen/layout/none.h"

#include "cmdscreen/layout/_/util.h"

static bool none_func( csBox box[static 1],
                       csLimit limit,
                       void const* i,
                       cErrorStack es[static 1] )
{
   box->rect.w = 0;
   box->rect.h = 0;
   return true;
}
csLayout none_layout_cs( void )
{
   return (csLayout){ .i=NULL, .f=none_func };
}