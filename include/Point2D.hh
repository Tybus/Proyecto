#ifndef POINT2D_H
#define POINT2D_H
#include<string>
#include<iostream>
using namespace std;
//! Clase Point2D
/*! Esta clase implemente un punto en un plano.
*/
class Point2D
{
    public:
        //!Método constructor sin parámetros.
        /*! \brief Este método crea un nuevo Point2D, cuya coordenada es (0,0) y los punteros apuntan a NULL
        */
        Point2D(void);
        //!Método constructor con Coordenada.
        /*! \brief Este metodo crea un nuevo Point2D, cuya coordenada es (x,y). el puntero next apunta a NULL.
        */
        Point2D(double,double);
        //!Método constructor de copia.
        /*! \brief Este metodo crea un nuevo Point2D a partir de un objeto Point2D ya existente.Es un nuevo objeto, pero sigue apuntando al mismo next.
        */
        Point2D(const Point2D &obj);
        //!Método Destructor.
        ~Point2D(void);
        //! Método getx.
        /*! \brief Este método retorna la coordenada x del punto en cuestión.
        */
        double getx(void);
        //! Método gety.
        /*! \brief Este método retorna la coordenada y del punto en cuestión.
        */
        double gety(void);
        //! Método setx.
        /*! \brief Este método asigna un valor a la coordenada x del punto en cuestión.
        */
        void setx(double);
        //! Método sety.
        /*! \brief Este método asigna un valor a la coordenada y del punto en cuestión.
        */
        void sety(double);
        //! Métod sett.
        /*! \brief Este método asigna valores a las coordenadas x e y en el putno en cuestión.
        */
        void sett(double,double);
        //! Método setNext.
        /*! \brief Este método crea un nuevo Point2D, luego le asigna Point2D *next la dirección de el nuevo objeto.
        * Además retorna un puntero al mismo objeto.
        */
        Point2D* setNext(double,double);
        //! Método setNext.
        /*! \brief Este método asigna a this->next una dirección a un Point2D ya existente.
        */
        void setNext(Point2D*);
        //! Método getAm.
        /*! \brief Este método retorna la cantidad de elementos que están presentes en la lista.
        */
        int getAm(void);
        //! Método get.
        /*! \brief Este método retorna una entrada (Point2D)a elegir de la lista a partir de el punto en cuestion
        */
        Point2D get(int);
        //! Método !=
        /*! \brief Este método retorna TRUE en caso de que las coordenadas de dos puntos sean diferentes.
        */
        bool operator!=(Point2D);
        //! Método assignn
        /*! \brief Este método le asigna un Point2D a una entrada especifica a partir del punto en cuestión.
        */
        void assignn(int,Point2D);
        //! Método ==
        /*! \brief Este método retorna TRUE en caso de que las coordenadas de dos puntos sean iguales.
        */
        bool operator==(Point2D);
        //! Método -
        /*! \brief Este método retorna un nuevo Point2D con el resultado de la resta vectorial de dos puntos.
        */
        Point2D operator-(Point2D);
        //! Método onLeft
        /*! \brief Este metodo retorna TRUE si *this esta a la izquierda de el Point2D de entrada.
        */
        bool onLeft(Point2D);
        //! Método getLeftMost
        /*! \brief Este método retorna la entrada de la lista en la cual se encuentra el punto de coordenada x menor.
        */
        int getLeftMost(void);
    private:
        //! Variable next, privada.
        /*! Esta variable contiene un puntero a la siguiente entrada de la lista.
        */
        Point2D* next;
        //! Variable x, privada.
        /*! Esta variable contiene el valor de la coordenada x del punto
        */
        double x;
        //! Variable y, privada.
        /*! Esta variable contiene el valor de la coordenada y del punto.
        */
        double y;
};

#endif // POINT2D_H
