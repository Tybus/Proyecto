#include "Delaunay.hh"
Delaunay::Delaunay(double** points){
    HE_face* convexHull;
    this->delauny = new HE_face();
    this->points = points;
    this->getConvexHull();
    this->triangulate();
    this->getDelauny();
}

Delaunay::~Delaunay(){
}
void Delaunay::getConvexHull(){
    HE_edge* lado;
    HE_vert* vert;
    HE_edge* tempedge;
    int sizes = sizeof(this->points);
    double pointOnHull[2];
    double p[2][sizes];
    double endpoint[2];
    int leftmost = this->getLeftMost();
    this->delauny->edge = new HE_edge();
    this->delauny->edge->vert = new HE_vert();
    this->delauny->edge->vert->x = new double;
    this->delauny->edge->vert->y = new double;
    this->delauny->edge->vert->x = this->points[0][leftmost];
    this->delauny->edge->vert->y = this->points[1][leftmost];
    this->delauny->edge->vert->edge = NULL;
    this->delauny->edge->face = this->delaunay;
    tempedge = this->delauny->edge;
    pointOnHull[0] = this->delauny->edge->vert->x;
    pointOnHull[1] = this->delauny->edge->vert->y;
    int i = 0;
    while((endpoint[0]!=p[0][0])||(endpoint[1]!=p[1][0])){
        p[0][i] = pointOnHull[0];
        p[1][i] = pointOnHull[1];
        endpoint[0] = this->points[0][0];
        endpoint[1] = this->points[1][0];
        for(int j = 0;j<sizes; ++j){
            if((endpoint[0]==pointOnHull[0]&&enpoint[1]==pointOnHull[1])||this->onLeft(this->points[0][j]-p[0][i],this->points[1][j]-p[1][i],endpoint[0]-p[0][i],endpoint[1]-p[1][i]){//modificar el onleft
                endpoint[0] = this->puntos[0][j];
                endpoint[1] = this->puntos[1][j];
            }
        }
        i = i+1;

        pointOnHull[0] = endpoint[0];
        pointOnHull[1] = endpoint[1];

        vert = new HE_vert();
        vert->edge = tempedge;
        vert->x =endpoint[0];
        vert->y =endpoint[1];
        lado = new HE_edge();
        lado->vert = vert;
        lado->face =this->delauny;
        tempedge->next =lado;
        tempedge = lado;
    }
}

bool onLeft::getLeftMost(double x1,double y1, double x2, double y2){//modiiificar y verificar
    double dot = x1*x2+y1*y2;
    return (dot < 0);
}
