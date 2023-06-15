cmake_minimum_required(VERSION 3.24)
project(raytracing_one_week)

set(CMAKE_CXX_STANDARD 17)

add_executable(raytracing_one_week main.cpp include/vec3.h include/color.h include/ray.h include/hittable.h include/sphere.h include/hittable_list.h include/rtweekend.h include/camera.h include/material.h)
