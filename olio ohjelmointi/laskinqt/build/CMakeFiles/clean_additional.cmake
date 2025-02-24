# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\laskinqt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\laskinqt_autogen.dir\\ParseCache.txt"
  "laskinqt_autogen"
  )
endif()
