#ifndef HE_VERT_H
#define HE_VERT_H
#include "HE_edge.hh"
#include "Point2D.h"
#include<string>
#include<iostream>
//! La clase HE_vert.
/*! Esta clase implementa un vertice.
*/
class HE_edge;
class HE_vert{
    public:
        HE_vert(void);
        HE_vert(Point2D,HE_edge*);
        ~HE_vert(void);
        Point2D point;
        HE_edge * edge;
};


#endif // HE_VERT_H
