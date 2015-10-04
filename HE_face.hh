#ifndef HE_FACE_H
#define HE_FACE_H
#include "HE_edge.hh"
#include<string>
#include<iostream>
class HE_edge;
class HE_face
{
    public:
        HE_face(void);
        HE_face(HE_edge*);
        ~HE_face(void);
        HE_edge* edge;
};


#endif // HE_FACE_H
