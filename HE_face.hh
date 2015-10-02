#ifndef HE_FACE_H
#define HE_FACE_H
#include "HE_edge.hh"
#define NULL 0

class HE_face
{
    public:
        HE_face(void);
        HE_face(HE_edge*);
        ~HE_face(void);
        HE_edge* edge;
};
class HE_edge;

#endif // HE_FACE_H
