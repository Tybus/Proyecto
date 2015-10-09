#include "ConvexHull.hh"
ConvexHull::ConvexHull(const ConvexHull &obj){
this->convexhull = obj.convexhull;
this->points = obj.points;
this->getConvexHull();
}
ConvexHull::ConvexHull(){
    this->convexhull = new HE_face();
}
ConvexHull::ConvexHull(Point2D points){
    this->convexhull = new HE_face();
    this->points = points;
    this->getConvexHull();
}
ConvexHull::~ConvexHull(){
}
void ConvexHull::getConvexHull(){
    int amm = this->points.getAm();
    Point2D pointOnHull;
    Point2D p;
    Point2D endpoint;
    Point2D temp;
    Point2D temp2;
    pointOnHull = this->points.get(this->points.getLeftMost());
    int i =0;
    do{
        p.assignn(i,pointOnHull);
        endpoint = this->points.get(0);//El problema está aqui
        for(int j = 1;j< amm;j++){//ammount se sale
            temp = this->points.get(j) - p.get(i);
            temp2 = endpoint-p.get(i);
            if((endpoint ==pointOnHull)||(temp.onLeft(temp2))){
                endpoint = this->points.get(j);
            }
        }
        i = i+1;
        pointOnHull = endpoint;
    }
    while(endpoint != p.get(0));
    HE_vert verts[p.getAm()];
    for(int w =0;w<p.getAm(); w++){
        cout<<p.get(w).getx()<< " "<< p.get(w).gety()<<endl;
        verts[w].point = p.get(w);
        verts[w].edge = new HE_edge();
        if(w!=(p.getAm()-1)){
            verts[w].edge->vert = &verts[w+1];
        }
        else{
        verts[w].edge->vert = &verts[0];
        }
    }
}
