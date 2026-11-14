/*
 * Segment.h
 *
 *  Created on: 14 nov. 2026
 *      Author: hP
 */

#ifndef GEO2D_INCLUDE_SEGMENT_H_
#define GEO2D_INCLUDE_SEGMENT_H_
#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"

class Segment {
private:
    Point a, b;

public:
    Segment();
    Segment(const Point& a, const Point& b);

    double longueur() const;
};

#endif




#endif /* GEO2D_INCLUDE_SEGMENT_H_ */
