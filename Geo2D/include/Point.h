/*
 * Point.h
 *
 *  Created on: 14 nov. 2026
 *      Author: hP
 */

#ifndef GEO2D_INCLUDE_POINT_H_
#define GEO2D_INCLUDE_POINT_H_

#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;

public:
    Point();
    Point(double x, double y);

    double getX() const;
    double getY() const;
};

#endif



#endif /* GEO2D_INCLUDE_POINT_H_ */
