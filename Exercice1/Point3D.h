/*
 * Point3D.h
 *
 *  Created on: 14 nov. 2026
 *      Author: hP
 */

#ifndef EXERCICE1_POINT3D_H_
#define EXERCICE1_POINT3D_H_


#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x, y, z;

public:
    Point3D();
    Point3D(double x, double y, double z);

    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif


#endif /* EXERCICE1_POINT3D_H_ */
