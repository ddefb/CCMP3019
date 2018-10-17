/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#ifndef OFF_H
#define OFF_H

#include <vector>
#include "Vertex.h"
#include "Triangle.h"
#include "Rectangle.h"

class OFF
{
    public:
        OFF();
        void insertVertex(Vertex*);
        void insertFace(Polygon*);
        void removeVertex(int);
        void removeFace(int);
        Polygon* getFace(int);
        Vertex* getVertex(int);
        int getSizeVertexList();
        int getSizeFaceList();
        void printAllVertex();
        void printAllFaces();

        virtual ~OFF();

    private:
        std::vector<Vertex*> vertexList;
        std::vector<Polygon*> polygonList;


};

#endif // OFF_H
