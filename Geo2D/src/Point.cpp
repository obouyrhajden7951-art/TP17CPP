/*
 * Point.cpp
 *
 *  Created on: 14 nov. 2026
 *      Author: hP
 */


Point::Point() : x(0), y(0) {} // @suppress("Symbol is not resolved") // @suppress("Member declaration not found")
Point::Point(double x, double y) : x(x), y(y) {} // @suppress("Member declaration not found") // @suppress("Symbol is not resolved")

double Point::getX() const { return x; } // @suppress("Member declaration not found")
double Point::getY() const { return y; } // @suppress("Member declaration not found")

