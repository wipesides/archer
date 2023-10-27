# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/archer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/archer_autogen.dir/ParseCache.txt"
  "archer_autogen"
  )
endif()
