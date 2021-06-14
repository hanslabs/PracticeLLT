
project(bma C)

include_directories(include)
aux_source_directory(source SOURCE)

add_executable(bmad ${SOURCE})

add_library(bma ${SOURCE})
