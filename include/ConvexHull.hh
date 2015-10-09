#ifndef ConvexHull_H
#define ConvexHull_H
#include "HE_face.hh"
#include "HE_vert.hh"
#include "Point2D.hh"
#include<string>
#include<iostream>
using namespace std;
//! Clase ConvexHull.
/*! Esta clase implementa un ConvexHull de un conjunto de puntos
*/
class ConvexHull{
    public:
	//! Método constructor sin parámetros
	/*! Construye un objeto sin especificar ningún dato.
	* Utiliza el constructor sin parámetros de Point2D.
	*/
        ConvexHull(void);
	//! Método constructor con parámetro Point2D.
	/*! Construye un objeto ConvexHull especificando una lista de 
	* puntos a evaluar. Se utiliza el constructor de copia de Point2D.
	*/	
        ConvexHull(Point2D);
	//! Método constructor con parámetros Point2D y HE_face*
	/*! Construye un objeto ConvexHull a partir de una lista de
	* puntos a evaluar y los asigna en un HE_face dado por la dirección del @param2
	*/	        
	ConvexHull(Point2D,HE_face*);
	//! Método constructor de copia.
	/*! Construye un nuevo objeto ConvexHull a partir de un objeto
	* ConvexHull anterior.	
	*/
        ConvexHull(const ConvexHull &obj);
 	//! Método destructor.
        ~ConvexHull(void);
	//! Puntero a la cara donde se guardó el convexHull.
	HE_face* convexhull;
    private:
	//! La dispersión de puntos se guarda acá.
        Point2D  points;
	//! Devuelve el punto mas a la izquierda de la dispesión.
        int getLeftMost(void);
	//! Obtiene el ConvexHull de la dispersión y lo almacena en HE_face* convexhull
        void getConvexHull(void);
};

#endif // ConvexHull_H
