#ifndef DELAUNAY_H
#define DELAUNAY_H
#include "HE_face.hh"
#include "HE_vert.hh"
#include<string>
#include<iostream>
#define NULL 0
using namespace std
class Delaunay{
    public:
        Delaunay(double**);
        Delaunay(double**,HE_face*);
        ~Delaunay(void);
        HE_face* delaunay;
        HE_face* getVoronoi(void);
        double **  points;
    private:
        bool onLeft(double, double, double, double);
        void getConvexHull(void);
        void triangulate(void);
        void getDelaunay(void);
};

#endif // DELAUNAY_H
