# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qt_Calc_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qt_Calc_autogen.dir\\ParseCache.txt"
  "Qt_Calc_autogen"
  )
endif()
