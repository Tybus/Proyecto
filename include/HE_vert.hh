#ifndef HE_VERT_H
#define HE_VERT_H
#include "HE_edge.hh"
#include "Point2D.hh"
#include<string>
#include<iostream>
class HE_edge;
//! La clase HE_vert.
/*! Esta clase implementa un vertice.
*/
class HE_vert{
    public:
        //! Metodo Constructor sin parámetros.
        HE_vert(void);
        //! Método Constructor con parámetros.
        /*! \brief Este constructor asigna los valores de las cordenadas del punto y la dirección de memoria del siguiente Medio Borde.
        */
        HE_vert(Point2D,HE_edge*);
        //! Método Destructor.
        ~HE_vert(void);
        //! Una variable publica point (Point2D)
        /*! \brief Esta variable contiene la coordenada en donde se encuentra el punto.
        */
        Point2D point;
        //! Una variable pública edge(HE_edge *)
        /*! \brief Esta variable contiene la direccion de memoria del proximo Medio Borde.
        */
        HE_edge * edge;
};


#endif // HE_VERT_H
