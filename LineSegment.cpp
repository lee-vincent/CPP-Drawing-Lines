//
//  LineSegment.cpp
//  week6
//
//  Created by Vincent Lee on 5/10/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#include "LineSegment.h"


LineSegment::LineSegment() {
    p1 = Point();
    p2 = Point();
}

LineSegment::LineSegment(Point point1, Point point2) {
    p1 = point1;
    p2 = point2;
}


void LineSegment::setEnd1(const Point& point1) {
    p1 = point1;
}

void LineSegment::setEnd2(const Point& point2){
    p2 = point2;
}



Point LineSegment::getEnd1() const{
    return p1;
}

Point LineSegment::getEnd2() const{
    return p2;
}

double LineSegment::length() const{
    return p1.distanceTo(p2);
}

double LineSegment::slope() const{
    return (p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());
}
