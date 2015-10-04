#include "Point2D.h"
#include "Delaunay.hh"
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
    for(int i = 0; i<100;++i){
        temp.setx(100*((double)rand() / RAND_MAX));
        temp.sety(100*((double)rand() / RAND_MAX));
        points.assignn(i,temp);
        temp2 = points.get(i);
        cout<<temp2.getx()<<" "<<points.gety()<<endl;
    }
    Delaunay*holi = new Delaunay(points);
    return 0;
}
