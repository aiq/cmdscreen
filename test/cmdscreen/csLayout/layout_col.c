#include "clingo/io/write.h"
#include "clingo/lang/expect.h"
#include "uiinabox/uiBox.h"
#include "cmdscreen/csScreen.h"
#include "uiinabox/box/box.h"

#include "distinct_styles.h"

int main( void )
{
   init_tap_c_();
   cmdscreen_cs();

   csStyle const tealStyle = TEAL_;
   csStyle const maroonStyle = MAROON_;
   csStyle const greyStyle = GREY_;
   csStyle const navyStyle = NAVY_;

   uiBox root = col_ui(
      0,
      &tealStyle,
      boxes_cs_(
         fixed_ui(
            size_ui( 10, 4 ),
            &maroonStyle,
            none_ui()
         ),
         fill_ui_( 
            2,
            center_ui_(
               fixed_ui(
                  size_ui( 4, 2 ),
                  &navyStyle,
                  none_ui()
               )
            )
         ),
         right_ui_(
            fixed_ui(
               size_ui( 3, 3 ),
               &maroonStyle,
               none_ui()
            )
         ),
         fill_ui_(
            5,
            fixed_ui(
               size_ui( 1, 1 ),
               &navyStyle,
               none_ui()
            )
         )
      )
   );

   uiLimit limit = fix_limit_ui( 12, 24 );
   cErrorStack* es = &error_stack_c_( 256 );
   layout_box_ui( &root, limit, es );
   globalise_ui( &root );
   dump_box_layout_ui( c_c( "layout_col.ppm" ), &root, es );

   uiBox exp = exp_cs_(
      rect_ui( 0, 0, 12, 24 ),  // col
      exp_cs_(  // fixed
         rect_ui( 0, 0, 10, 4 ),
         none_ui()
      ),
      exp_cs_(  // fill
         rect_ui( 0, 4, 12, 4 ),
         exp_cs_(   // center
            rect_ui( 0, 4, 12, 4 ),
            exp_cs_(    // fixed
               rect_ui( 4, 5, 4, 2 ),
               none_ui()
            )
         )
      ),
      exp_cs_(  // right
         rect_ui( 0, 8, 12, 3 ),
         exp_cs_(   // fixed
            rect_ui( 9, 8, 3, 3 ),
            none_ui()
         )
      ),
      exp_cs_(  // fill
         rect_ui( 0, 11, 12, 13 ),
         exp_cs_(   // fixed
            rect_ui( 0, 11, 1, 1 ),
            none_ui()
         )
      )
   );

   cRecorder* rec = &dyn_recorder_c_( 0 );
   record_box_diff_ui( rec, &exp, &root );
   print_recorded_c( rec );
   free_recorder_mem_c( rec );

   cleanup_cmdscreen_cs();
   return finish_tap_c_();
}