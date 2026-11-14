/*
 * Triangle.cpp
 *
 *  Created on: 14 nov. 2026
 *      Author: hP
 */

#include "Triangle.h"
#include "Segment.h"

Triangle::Triangle() : p1(), p2(), p3() {}
Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3)
    : p1(p1), p2(p2), p3(p3) {}

double Triangle::perimetre() const {
    return Segment(p1, p2).longueur()
         + Segment(p2, p3).longueur()
         + Segment(p3, p1).longueur();
}


