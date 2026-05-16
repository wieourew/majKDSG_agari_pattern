enable_testing()

qt_add_executable(test_agari_tensuu_name
  test_agari_tensuu_name.cpp
  ../app/agari_tensuu_name.cpp
)

target_include_directories(test_agari_tensuu_name
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(test_agari_tensuu_name
    PRIVATE
        Qt6::Test
)

add_test(
    NAME test_agari_tensuu_name
    COMMAND test_agari_tensuu_name
)
