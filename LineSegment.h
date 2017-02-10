//
//  LineSegment.h
//  week6
//
//  Created by Vincent Lee on 5/10/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#ifndef __week6__LineSegment__
#define __week6__LineSegment__

#include "Point.h"




class LineSegment {

public:
    
    
    LineSegment();
    LineSegment(Point point1, Point point2);
    
    void setEnd1(const Point& point1);
    void setEnd2(const Point& point2);
    
    Point getEnd1() const;
    Point getEnd2() const;
    
    double length() const;
    double slope() const;

    
    
private:
    
    Point p1, p2;
    

};






#endif /* defined(__week6__LineSegment__) */
