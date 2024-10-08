#ifndef UIINABOX_UIPOINT_H
#define UIINABOX_UIPOINT_H

#include "uiinabox/apidecl.h"
#include "clingo/clingo.h"

/*******************************************************************************
********************************************************* Types and Definitions
********************************************************************************
 type
*******************************************************************************/

struct uiPoint
{
   int16_t x;
   int16_t y;
};
typedef struct uiPoint uiPoint;

/*******************************************************************************
********************************************************************* Functions
********************************************************************************

*******************************************************************************/

UIINABOX_API inline uiPoint point_ui( int16_t x, int16_t y )
{
   return (uiPoint){ .x=x, .y=y };
}

#endif