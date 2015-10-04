#ifndef DELAUNAY_H
#define DELAUNAY_H
#include "HE_face.hh"
#include "HE_vert.hh"
#include "Point2D.h"
#include<string>
#include<iostream>
using namespace std;
class Delaunay{
    public:
        Delaunay(Point2D);
        Delaunay(Point2D,HE_face*);
        ~Delaunay(void);
        HE_face* delaunay;
        HE_face* getVoronoi(void);
        Point2D  points;
    private:
        int getLeftMost(void);
        void getConvexHull(void);
        //void triangulate(void);
        //void getDelaunay(void);
};

#endif // DELAUNAY_H
