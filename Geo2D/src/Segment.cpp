/*
 * Segment.cpp
 *
 *  Created on: 14 nov. 2026
 *      Author: hP
 */

#include <cmath>

Segment::Segment() : a(), b() {} // @suppress("Member declaration not found") // @suppress("Symbol is not resolved")
Segment::Segment(const Point& a, const Point& b) : a(a), b(b) {} // @suppress("Member declaration not found") // @suppress("Symbol is not resolved")

double Segment::longueur() const { // @suppress("Member declaration not found")
    double dx = b.getX() - a.getX(); // @suppress("Method cannot be resolved")
    double dy = b.getY() - a.getY(); // @suppress("Method cannot be resolved")
    return std::sqrt(dx * dx + dy * dy); // @suppress("Function cannot be resolved")
}


