//
//  Point.h
//  week6
//
//  Created by Vincent Lee on 5/10/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#ifndef week6_Point_h
#define week6_Point_h


class Point {
    
    public:
        
        
        Point();
        Point (double xC, double yC);
        
        void setXCoord(double xC);
        void setYCoord(double yC);
        
        double getXCoord() const;
        double getYCoord() const;
        
        double distanceTo(const Point& p) const;
        
    private:

        double x;
        double y;
        
    
};








#endif
