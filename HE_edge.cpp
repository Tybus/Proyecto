#include "HE_edge.hh"

HE_edge::HE_edge(){
    this->vert = NULL;
    this->pareja = NULL;
    this->face = NULL;
    this->next = NULL;
}
HE_edge::HE_edge(HE_vert* vert, HE_edge* pareja, HE_face* face, HE_edge* next){
    this->vert = vert;
    this->pareja = pareja;
    this->face = face;
    this->next = next;
}

HE_edge::~HE_edge(){
}
