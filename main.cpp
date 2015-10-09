#include "Point2D.hh"
#include "ConvexHull.hh"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include<string>
#include<iostream>
int main(void){
    srand(time(NULL));
    Point2D points;
    Point2D temp;
    Point2D temp2;
    /*
    temp.setx(3);
    temp.sety(4);
    points.assignn(0,temp);
    temp.setx(5);
    temp.sety(3);
    points.assignn(1,temp);
    temp.setx(3);
    temp.sety(5);
    points.assignn(2,temp);
    temp.setx(5);
    temp.sety(5);
    points.assignn(3,temp);
*/
    for(int i = 0; i<100;++i){
        temp.setx(100*((double)rand() / RAND_MAX));
        temp.sety(100*((double)rand() / RAND_MAX));
        points.assignn(i,temp);
        temp2 = points.get(i);
        //cout<<temp2.getx()<<" "<<temp2.gety()<<endl;
    }
    ConvexHull * holi = new ConvexHull(points);
    return 0;
}
