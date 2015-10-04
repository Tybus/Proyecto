#ifndef POINT2D_H
#define POINT2D_H


class Point2D
{
    public:
        Point2D(void);
        ~Point2D(void);
        Point2D(double,double);
        Point2D(const Point2D &obj);
        double getx(void);
        double gety(void);
        void setx(double);
        void sety(double);
        void sett(double,double);
        Point2D* setNext(double,double);
        void setNext(Point2D*);
        int getAm(void);
        Point2D get(int);
        bool operator!=(Point2D);
        void assignn(int,Point2D);
        bool operator==(Point2D);
        Point2D operator-(Point2D);
        bool onLeft(Point2D);
        int getLeftMost(void);
    private:
        Point2D* next;
        double x;
        double y;
};

#endif // POINT2D_H
