/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#include "OFF.h"
#include "Vertex.h"
#include "Polygon.h"
//#include "Geometry.h"

OFF::OFF()
{
    // Construtor OFF
}

void OFF::insertVertex(Vertex* vertex)
{
    this->vertexList.push_back(vertex);
}

void OFF::insertFace(Polygon* face)
{
    this->polygonList.push_back(face);
}

Polygon* OFF::getFace(int N_th)
{
    return this->polygonList.at(N_th);
}

Vertex* OFF::getVertex(int N_th)
{
    return this->vertexList.at(N_th);
}

int OFF::getSizeVertexList()
{
    return vertexList.size();
}

int OFF::getSizeFaceList()
{
    return polygonList.size();
}

void OFF::removeVertex(int N_th)
{
    this->vertexList.erase(vertexList.begin(), vertexList.begin()+N_th);
}

void OFF::removeFace(int N_th)
{
    this->polygonList.erase(polygonList.begin(), polygonList.begin()+N_th);
}

void OFF::printAllVertex()
{
    for (int i = 0; i < vertexList.size(); i++)
        vertexList[i]->printCoordinates();

}

void OFF::printAllFaces()
{
    for (int i = 0; i < polygonList.size(); i++)
        polygonList[i]->printCoordinates();

}

OFF::~OFF()
{
    // Destrutor OFF
}
