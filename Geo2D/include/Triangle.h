/*
 * Triangle.h
 *
 *  Created on: 14 nov. 2026
 *      Author: hP
 */

#ifndef GEO2D_INCLUDE_TRIANGLE_H_
#define GEO2D_INCLUDE_TRIANGLE_H_
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    Point p1, p2, p3;

public:
    Triangle();
    Triangle(const Point& p1, const Point& p2, const Point& p3);

    double perimetre() const;
};

#endif




#endif /* GEO2D_INCLUDE_TRIANGLE_H_ */
