/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

#define NUMBER_VERTEX_TRI 3

#include "Vertex.h"
#include "Polygon.h"

class Triangle : public Polygon
{
    public:

        Triangle(Vertex*, Vertex*, Vertex*);
        Triangle();
        virtual ~Triangle();
        float getArea();
        float getPerimetry();
        void printCoordinates();
        Vertex* getSide_1();
        Vertex* getSide_2();
        Vertex* getSide_3();
        void setSide_1(Vertex*);
        void setSide_2(Vertex*);
        void setSide_3(Vertex*);
        std::string getType(void);


    private:
        Vertex *side_1;
        Vertex *side_2;
        Vertex *side_3;
        std::string type = "Triangle";
};

#endif // TRIANGLE_H
