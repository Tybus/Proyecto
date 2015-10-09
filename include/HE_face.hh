#ifndef HE_FACE_H
#define HE_FACE_H
#include "HE_edge.hh"
#include<string>
#include<iostream>
class HE_edge;
//!La clase HE_face
/*!
* Esta clase implementa una cara de la figura.
*/
class HE_face
{
    public:
        //! Constructor sin parámetros.
        /*!
        * \brief Este constructor no recibe ninguna parámetro. Es el constructor estandar.
        */
        HE_face(void);
        //! Constructor con parametro HE_edge*
        /*!
        * \brief Construye un objeto cara que apunta al primer medio borde de la figura.
        */
        HE_face(HE_edge*);
        //! Método Destructor.
        ~HE_face(void);
        //! Una variable pública.
        /*!
        * \brief Esta variable se encarga de guardar la direccion del primer medio borde perteneciente a la figura.
        */
        HE_edge* edge;
};


#endif // HE_FACE_H
