//
// Created by swrainbow on 2023/6/15.
//

#ifndef RAYTRACING_ONE_WEEK_HITTABLE_H
#define RAYTRACING_ONE_WEEK_HITTABLE_H
#include "ray.h"

class material;
struct hit_record {
    point3 p;
    vec3 normal;
    double t;
    std::shared_ptr<material> mat_ptr;
    bool front_face;

    inline void set_face_normal(const ray& r, const vec3& outward_normal) {
        front_face = dot(r.direction(), outward_normal) < 0;
        normal = front_face ? outward_normal : -outward_normal;
    }
};

class hittable {
public:
    virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const = 0;
};
#endif //RAYTRACING_ONE_WEEK_HITTABLE_H
