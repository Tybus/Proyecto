#include "Point2D.h"

Point2D::Point2D(){
    this->next = 0;
    this->x = 0;
    this->y =0;
}
Point2D::Point2D(double x, double y){
    this->x = x;
    this->y = y;
    this->next = 0;
}
Point2D::Point2D(const Point2D &obj){
    this->x = obj.x;
    this->y = obj.y;
    this->next = obj.next;
}
double Point2D::getx(){
    return this->x;
}
double Point2D::gety(){
    return this->y;
}
Point2D* Point2D::setNext(double x,double y){
    Point2D* point2d  = new Point2D(x,y);
    this->next = point2d;
    return this->next;
}
void Point2D::setNext(Point2D* point2d){
    this->next = point2d;
}
void Point2D::setx(double x){
    this->x = x;
    }
void Point2D::sety(double y){
    this->y =y;
}
int Point2D::getAm(){
    int i =1;
    Point2D point = *this;
    while(!point.next){
        point = *point.next;
        i=i+1;
    }
    return i;
}
void Point2D::sett(double x, double y){
    this->x =x;
    this->y =y;
}
Point2D Point2D::get(int j){
    Point2D temp;
    Point2D ret;
    temp = *this;
    for(int i = 0; i<j+1 ;i++){
        ret = temp;
        if(!temp.next) break;
        temp = *temp.next;
    }
    return ret;
}
bool Point2D::operator!=(Point2D otro){
    bool a = this->x != otro.x;
    bool b = this->y != otro.y;
    return a||b;
}
void Point2D::assignn(int j, Point2D otro){
    Point2D *temp;
    Point2D *ret;
    temp = this;
    for(int i=0;i<j+1;i++){
        ret = temp;
        if(i!=j && !temp->next){
            temp->next = new Point2D();
        }
        if(!temp->next) break;
        temp = temp->next;
    }
    *ret = otro;
}
bool Point2D::operator==(Point2D otro){
    bool a = this->getx()==otro.getx();
    bool b = this->gety()==otro.gety();
    return a&&b;
}
Point2D Point2D::operator-(Point2D otro){
    Point2D ret;
    double x = this->getx()-otro.getx();
    double y = this->getx()-otro.getx();
    ret.setx(x);
    ret.sety(y);
    return ret;
}
bool Point2D::onLeft(Point2D otro){
    double dot = this->getx()*otro.getx()+this->gety()*otro.gety();
    return (dot < 0);
}
int Point2D::getLeftMost(){
    double minvalue = this->getx();
    int j = 0;
    Point2D temp;
    double tem;
    for(int i =0;i<this->getAm();++i){
        temp = this->get(i);
        tem = temp.getx();
        if(tem<minvalue){
            minvalue = tem;
            j=i;
        }
    }
    return j;
}
Point2D::~Point2D(){
}
