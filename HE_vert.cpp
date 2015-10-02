#include "HE_vert.hh"

HE_vert::HE_vert(){
    this->x = NULL;
    this->y = NULL;
    this->edge = NULL;
}
HE_vert::HE_vert(double x, double y, HE_edge* edge);
    this->x = x;
    this->y = y;
    this->edge = edge;
HE_vert::~HE_vert(){
}

