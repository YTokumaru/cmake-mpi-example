add_executable(intro main.cpp)

target_link_libraries(
  intro
  PRIVATE cmake_mpi_example::cmake_mpi_example_options
          cmake_mpi_example::cmake_mpi_example_warnings)

target_link_system_libraries(
  intro
  PRIVATE
          CLI11::CLI11
          fmt::fmt
          spdlog::spdlog
          ftxui::screen
          ftxui::dom
          ftxui::component)

target_include_directories(intro PRIVATE "${CMAKE_BINARY_DIR}/configured_files/include")
