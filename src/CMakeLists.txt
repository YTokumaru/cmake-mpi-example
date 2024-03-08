add_subdirectory(sample_library)
add_subdirectory(ftxui_sample)

add_executable(
    main main.cpp
)
target_link_system_libraries(
    main
    PRIVATE
    boost_mpi
)