/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#define NUMBER_VERTEX_RECT 4

#include "Polygon.h"
#include "Vertex.h"

class Rectangle : public Polygon
{
    public:
        Rectangle(Vertex*, Vertex*, Vertex*, Vertex*);
        Rectangle();
        virtual ~Rectangle();
        float getArea();
        float getPerimetry();
        void printCoordinates();
        Vertex* getSide_1();
        Vertex* getSide_2();
        Vertex* getSide_3();
        Vertex* getSide_4();
        void setSide_1(Vertex*);
        void setSide_2(Vertex*);
        void setSide_3(Vertex*);
        void setSide_4(Vertex*);
        std::string getType();

    private:
        Vertex *side_1;
        Vertex *side_2;
        Vertex *side_3;
        Vertex *side_4;
        std::string type = "Rectangle";

};

#endif // RECTANGLE_H
