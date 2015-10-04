#include "HE_vert.hh"

HE_vert::HE_vert(){
    this->edge = NULL;
}
HE_vert::HE_vert(Point2D point, HE_edge* edge){
    this->point = point;
    this->edge = edge;
    }
HE_vert::~HE_vert(){
}

