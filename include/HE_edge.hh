#ifndef HE_EDGE_H
#define HE_EDGE_H
#include "HE_face.hh"
#include "HE_vert.hh"
#include<string>
#include<iostream>
class HE_face;
class HE_vert;
//! La clase HE_edge.
/*!
* Esta clase representa un Medio Borde.
*/
class HE_edge
{
    public:
        //! Método Constructor.
        /*!
        * \brief Este método contruye el Medio Borde.
        */
        HE_edge();
        //! Método Constructor con parametros de entrada.
        /*!
        * \brief Construye un Medio Borde utilizando datos anteriores.
        */
        HE_edge(HE_vert*,HE_edge*,HE_face*,HE_edge*);
        //! Método Destructor
        ~HE_edge();
        //! Contiene la dirección del vértice perteneciente al Medio Borde.
        HE_vert* vert;
        //! Contiene la dirección de la otra mitad del Medio Borde.
        HE_edge* pareja;
        //! Contiene la dirección de la cara que contiene al Medio Borde.
        HE_face* face;
        //! Contiene la dirección de un medio borde adyacente al Medio Borde.
        HE_edge* next;
};
#endif // HE_EDGE_H
