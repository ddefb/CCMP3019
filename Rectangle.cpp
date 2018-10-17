/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#include <iostream>
#include "Rectangle.h"
#include <stdlib.h>
#include <stdio.h>

Rectangle::Rectangle(Vertex* side_1, Vertex* side_2, Vertex* side_3, Vertex* side_4)
{
    this->side_1 = side_1;
    this->side_2 = side_2;
    this->side_3 = side_3;
    this->side_4 = side_4;
}

Rectangle::Rectangle()
{

}

Vertex* Rectangle::getSide_1()
{
    return side_1;
}

Vertex* Rectangle::getSide_2()
{
    return side_2;
}

Vertex* Rectangle::getSide_3()
{
    return side_3;
}

Vertex* Rectangle::getSide_4()
{
    return side_4;
}

void Rectangle::setSide_1(Vertex* side_1)
{
    this->side_1 = side_1;
}

void Rectangle::setSide_2(Vertex* side_2)
{
    this->side_2 = side_2;
}

void Rectangle::setSide_3(Vertex* side_3)
{
    this->side_3 = side_3;
}

void Rectangle::setSide_4(Vertex* side_4)
{
    this->side_4 = side_4;
}

void Rectangle::printCoordinates()
{
    std::cout << NUMBER_VERTEX_RECT << std::endl;
    side_1->printCoordinates();
    side_2->printCoordinates();
    side_3->printCoordinates();
    side_4->printCoordinates();
    std::cout << "" << std::endl;
}

float Rectangle::getArea()
{
    std::cout << "Teste Area Rectangle" << std::endl;
    return 0;
}

float Rectangle::getPerimetry()
{
    std::cout << "Teste Perimetry Rectangle" << std::endl;
    return 0;
}

std::string Rectangle::getType()
{
    return type;
}

Rectangle::~Rectangle()
{
    //dtor
}
