#pragma once

#include <glm/glm.hpp>

struct Object {
    float size{1.0f};

    Object() = default;
    explicit Object(float s) : size(s) {}
};