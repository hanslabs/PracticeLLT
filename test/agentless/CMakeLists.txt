
aux_source_directory(testcase TESTCASE)

add_executable(agentless agentless_main.cc ${TESTCASE})

target_link_libraries(agentless
        /usr/local/lib/libgtest.a
        /usr/local/lib/libmockcpp.a)

add_test(NAMES agentless COMMAND agentless)