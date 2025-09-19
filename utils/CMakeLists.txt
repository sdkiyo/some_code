cmake_minimum_required(VERSION 4.0.1)

message("Starting compiling utils..." )

set(CMAKE_CXX_STANDARD 23)

project( utils
	VERSION 0.0.1
	LANGUAGES CXX )

set (LIBRARY_OUTPUT_PATH /home/eugene/FILES/Programming/Engine\ extended\ dev/Engine\ v0.0.0.1\ dev/bin/lib)# paste your project directory


add_library(${PROJECT_NAME} SHARED utils.cpp terminal.cpp timer.cpp custom_exception.cpp arg_function.cpp log.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES
	PREFIX ""
	OUTPUT_NAME "utils"
	SUFFIX ".so"
)
add_library(utils::utils ALIAS ${PROJECT_NAME})


add_library(${PROJECT_NAME}_static STATIC utils.cpp terminal.cpp timer.cpp custom_exception.cpp arg_function.cpp log.cpp)
set_target_properties( ${PROJECT_NAME}_static PROPERTIES
	PREFIX "static_"
	OUTPUT_NAME "utils"
	SUFFIX ".a"
)
add_library(utils::static_utils ALIAS ${PROJECT_NAME}_static)


add_library(${PROJECT_NAME}_terminal SHARED terminal.cpp)
set_target_properties(${PROJECT_NAME}_terminal PROPERTIES
	PREFIX ""
	OUTPUT_NAME "utils_terminal"
	SUFFIX ".so"
)
add_library(utils::terminal ALIAS ${PROJECT_NAME}_terminal)

#
#add_library( ${PROJECT_NAME}_timer SHARED timer.cpp )
#set_target_properties( ${PROJECT_NAME}_timer PROPERTIES
#	PREFIX ""
#	OUTPUT_NAME "utils_timer"
#	SUFFIX ".so"
#)
#add_library( utils::utils_timer ALIAS ${PROJECT_NAME}_timer )
#
#
#add_library( ${PROJECT_NAME}_custom_exception SHARED custom_exception.cpp )
#set_target_properties( ${PROJECT_NAME}_custom_exception PROPERTIES
#	PREFIX ""
#	OUTPUT_NAME "utils_custom_exception"
#	SUFFIX ".so"
#)
#add_library( utils::utils_custom_exception ALIAS ${PROJECT_NAME}_custom_exception )
#
#
#add_library( ${PROJECT_NAME}_arg_function SHARED arg_function.cpp )
#set_target_properties( ${PROJECT_NAME}_arg_function PROPERTIES
#	PREFIX ""
#	OUTPUT_NAME "utils_arg_function"
#	SUFFIX ".so"
#)
#add_library( utils::utils_arg_function ALIAS ${PROJECT_NAME}_arg_function )
#
#
#add_library( ${PROJECT_NAME}_log SHARED log.cpp )
#set_target_properties( ${PROJECT_NAME}_log PROPERTIES
#	PREFIX ""
#	OUTPUT_NAME "utils_log"
#	SUFFIX ".so"
#)
#add_library( utils::utils_log ALIAS ${PROJECT_NAME}_log )
