#include "HE_face.hh"

HE_face::HE_face(){
    this->edge = NULL;
}
HE_face::HE_face(HE_edge * edge){
    this->edge = edge;
}

HE_face::~HE_face()
{
    //dtor
}
