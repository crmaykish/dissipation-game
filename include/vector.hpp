#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "game_geometry.hpp"

class Vector2D
{
private:
    float Magnitude = 0.0;
    float Angle = 0.0;

public:
    Vector2D();
    Vector2D(Vector2D &v);
    Vector2D(Point point);
    Vector2D(float magnitude, float angle);
    Point GetPoint();
    float GetMagnitude();
    float GetAngle();
    bool NonZero();

    Vector2D Scale(float scaleFactor);
    Vector2D Normalize();
    Vector2D Add(Vector2D v);
    Vector2D Subtract(Vector2D v);
    Vector2D Rotate(float angle);
};

#endif // VECTOR_HPP
