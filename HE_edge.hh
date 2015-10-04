#ifndef HE_EDGE_H
#define HE_EDGE_H
#include "HE_face.hh"
#include "HE_vert.hh"
#include<string>
#include<iostream>
class HE_face;
class HE_vert;
class HE_edge
{
    public:
        HE_edge();
        HE_edge(HE_vert*,HE_edge*,HE_face*,HE_edge*);
        ~HE_edge();
        HE_vert* vert;
        HE_edge* pareja;
        HE_face* face;
        HE_edge* next;
};
#endif // HE_EDGE_H
