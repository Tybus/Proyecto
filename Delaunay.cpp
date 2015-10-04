#include "Delaunay.hh"
Delaunay::Delaunay(Point2D points){
    HE_face* convexHull;
    this->delaunay = new HE_face();
    this->points = points;
    this->getConvexHull();
    //this->triangulate();
    //this->getDelauny();
}
Delaunay::~Delaunay(){
}
void Delaunay::getConvexHull(){
    HE_edge* lado;
    HE_vert* vert;
    HE_edge* tempedge;
    int sizes = this->points.getAm();
    Point2D pointOnHull;
    Point2D p;
    Point2D endpoint;
    Point2D temp;
    int leftmost = this->points.getLeftMost();
    this->delaunay->edge = new HE_edge();
    this->delaunay->edge->vert = new HE_vert();
    this->delaunay->edge->vert->point = this->points.get(leftmost);
    this->delaunay->edge->vert->edge = NULL;
    this->delaunay->edge->face = this->delaunay;
    tempedge = this->delaunay->edge;
    pointOnHull = this->delaunay->edge->vert->point;
    cout<<"Se imprime el Hull"<<endl;
    cout<<pointOnHull.getx()<< " "<< pointOnHull.gety()<<endl;
    int i = 0;// Editar de aca para adelante.
    while((endpoint!=p)){
        cout<<"Entro al While"<<endl;
        p.assignn(i,pointOnHull);
        endpoint = this->points.get(0);
        for(int j = 0;j<sizes; ++j){
            temp = this->points.get(j)-p.get(i);
            if((endpoint==pointOnHull)||(temp.onLeft(endpoint-p.get(i)))){
                endpoint = this->points.get(j);
            }
        }
        i = i+1;

        pointOnHull = endpoint;
        cout<<pointOnHull.getx()<< " "<< pointOnHull.gety()<<endl;

        vert = new HE_vert();
        vert->edge = tempedge;
        vert->point =endpoint;
        lado = new HE_edge();
        lado->vert = vert;
        lado->face =this->delaunay;
        tempedge->next =lado;
        tempedge = lado;
    }
}
/*
void Delaunay::triangulate(){
    this->delaunay->
}
*/
