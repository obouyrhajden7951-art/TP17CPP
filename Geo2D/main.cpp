/*
 * main.cpp
 *
 *  Created on: 14 nov. 2026
 *      Author: hP
 */

#include <iostream>
#include "Point.h"
#include "Segment.h"
#include "Triangle.h"
using namespace std;

int main() {
    Point a(0, 0), b(3, 0), c(0, 4);

    Segment s(a, b);
    cout << "Longueur du segment AB : " << s.longueur() << endl;

    Triangle t(a, b, c);
    cout << "Perimetre du triangle ABC : " << t.perimetre() << endl;
    return 0;
}


