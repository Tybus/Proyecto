#ifndef HE_VERT_H
#define HE_VERT_H
#include "HE_edge.hh"
#define NULL 0

//! La clase HE_vert.
/*! Esta clase implementa un vertice.
*/
class HE_vert{
    public:
        HE_vert(void);
        HE_vert(float,float,HE_edge*);
        ~HE_vert(void);
        float x;
        float y;
        HE_edge * edge;
};
class HE_edge;

#endif // HE_VERT_H
