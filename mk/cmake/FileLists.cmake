
################################################################################
# SRC_FILES
################################################################################
set( SRC_FILES
)
aux_source_directory( ${SRC_DIR}/cmdscreen SRC_FILES )
aux_source_directory( ${SRC_DIR}/cmdscreen/_ SRC_FILES )
aux_source_directory( ${SRC_DIR}/uiinabox/box SRC_FILES )
aux_source_directory( ${SRC_DIR}/uiinabox SRC_FILES )

################################################################################
# TEST_FILES
################################################################################
set( TEST_FILES
)

aux_source_directory( ${TEST_DIR}/cmdscreen TEST_FILES )
aux_source_directory( ${TEST_DIR}/cmdscreen/csLayout TEST_FILES )
aux_source_directory( ${TEST_DIR}/uiinabox/uiLimit TEST_FILES )
aux_source_directory( ${TEST_DIR}/uiinabox/pad TEST_FILES )
aux_source_directory( ${TEST_DIR}/uiinabox/uiSize TEST_FILES )

################################################################################
# APP_FILES
################################################################################
set( APP_FILES
   ${APP_DIR}/cal/cal.c
   ${APP_DIR}/color-info/color-info.c
)
