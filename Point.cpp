//
//  Point.cpp
//  week6
//
//  Created by Vincent Lee on 5/10/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#include "Point.h"
#include <cmath>



Point::Point() {
    x = 0.0;
    y = 0.0;
}


Point::Point(double xC, double yC) {
    x = xC;
    y = yC;
}


void Point::setXCoord(double xC) {
    x = xC;
}

void Point::setYCoord(double yC) {
    y = yC;
}

double Point::getXCoord() const {
    return x;
}

double Point::getYCoord() const {
    return y;
}

double Point::distanceTo(const Point& p) const {
    return sqrt((p.x - x) * (p.x - x) + (p.y - y) * (p.y - y));
}