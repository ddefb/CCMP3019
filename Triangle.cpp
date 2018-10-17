/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Triangle.h"

Triangle::Triangle(Vertex* side_1, Vertex* side_2, Vertex* side_3)
{
    this->side_1 = side_1;
    this->side_2 = side_2;
    this->side_3 = side_3;
}

Triangle::Triangle()
{

}

Vertex* Triangle::getSide_1()
{
    return side_1;
}

Vertex* Triangle::getSide_2()
{
    return side_2;
}

Vertex* Triangle::getSide_3()
{
    return side_3;
}

void Triangle::setSide_1(Vertex* side_1)
{
    this->side_1 = side_1;
}

void Triangle::setSide_2(Vertex* side_2)
{
    this->side_2 = side_2;
}

void Triangle::setSide_3(Vertex* side_3)
{
    this->side_3 = side_3;
}

void Triangle::printCoordinates()
{
    std::cout << NUMBER_VERTEX_TRI << std::endl;
    side_1->printCoordinates();
    side_2->printCoordinates();
    side_3->printCoordinates();
    std::cout << "" << std::endl;
}

float Triangle::getArea()
{
    std::cout << "Teste Area Triangle" << std::endl;
    return 0;
}

float Triangle::getPerimetry()
{
    std::cout << "Teste Perimetry Triangle" << std::endl;
    return 0;
}

std::string Triangle::getType()
{
    return type;
}

Triangle::~Triangle()
{
    //dtor
}
