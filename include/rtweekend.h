//
// Created by swrainbow on 2023/6/15.
//

#ifndef RAYTRACING_ONE_WEEK_RTWEEKEND_H
#define RAYTRACING_ONE_WEEK_RTWEEKEND_H
// Usings
#include <cmath>
#include <limits>
#include <memory>
// Common Headers


#include <random>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double() {
    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator;
    return distribution(generator);
}
inline double random_double(double min, double max) {
    // Returns a random real in [min,max).
    return min + (max-min)*random_double();
}

inline double clamp(double x, double min, double max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

inline int random_int(int min, int max) {
    // Returns a random integer in [min,max].
    return static_cast<int>(random_double(min, max+1));
}
#include "ray.h"
#include "vec3.h"
#endif //RAYTRACING_ONE_WEEK_RTWEEKEND_H
