# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\shakki_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\shakki_autogen.dir\\ParseCache.txt"
  "shakki_autogen"
  )
endif()
