#ifndef ConvexHull_H
#define ConvexHull_H
#include "HE_face.hh"
#include "HE_vert.hh"
#include "Point2D.hh"
#include<string>
#include<iostream>
using namespace std;
class ConvexHull{
    public:
        ConvexHull(void);
        ConvexHull(Point2D);
        ConvexHull(Point2D,HE_face*);
        ConvexHull(const ConvexHull &obj);
        ~ConvexHull(void);
        HE_face* convexhull;
        Point2D  points;
    private:
        int getLeftMost(void);
        void getConvexHull(void);
};

#endif // ConvexHull_H
