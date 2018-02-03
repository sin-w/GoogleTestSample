set(GTEST_ROOT /usr/local/src/gtest)
include_directories(
    ${GTEST_ROOT}/googletest/include
    ${GTEST_ROOT}/googlemock/include
    )
cmake_policy(SET CMP0003 OLD)
add_executable(test1 test1.cpp)
target_link_libraries(test1 
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest.a
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest_main.a
    pthread
    )

#enable_testing()

#add_test(test01 ./test1)
