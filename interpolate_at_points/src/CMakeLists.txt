cmake_minimum_required(VERSION 3.4)

add_executable(interpolate_at_points
  interpolate_at_points.cpp
)

target_include_directories(interpolate_at_points
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(interpolate_at_points ${VTK_LIBRARIES})
