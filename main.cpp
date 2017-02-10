//
//  main.cpp
//  week6
//
//  Created by Vincent Lee on 5/10/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#include <iostream>
#include "Point.h"

int main(int argc, const char * argv[]) {
    
    Point p0;
    Point p3(0, 1);
    p3.setYCoord(2);
    p3.setXCoord(4);
    
    
    Point p1(1, 3);
    Point p2(2, 4);
    
    
    
    
    std::cout << p0.getXCoord();
    return 0;
}
