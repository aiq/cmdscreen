#ifndef CMDSCREEN_LAYOUT_PAD_H
#define CMDSCREEN_LAYOUT_PAD_H

#include "cmdscreen/csLayout.h"

/*******************************************************************************
********************************************************* Types and Definitions
********************************************************************************
 type
*******************************************************************************/

CMDSCREEN_API extern csBoxType const CS_Pad;

/*******************************************************************************
********************************************************************* Functions
********************************************************************************

*******************************************************************************/

CMDSCREEN_API csBox pad_cs( csPadding pad,
                            csStyle const* style,
                            csBox child );

CMDSCREEN_API bool layout_pad_cs( csBox box[static 1],
                                  csLimit limit,
                                  csPadding pad,
                                  cErrorStack es[static 1] );

#endif