add_executable(test1 test1.cc)
target_link_libraries(test1 PUBLIC sort)

add_executable(test2 test2.cc)
target_link_libraries(test2 PUBLIC sort)

add_executable(test3 test3.cc)
target_link_libraries(test3 PUBLIC sort)

add_executable(test4 test4.cc)
target_link_libraries(test4 PUBLIC sort)