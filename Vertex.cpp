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
#include <cstdlib>
#include "Vertex.h"

Vertex::Vertex()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vertex::Vertex(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

float Vertex::getX()
{
    return x;
}

float Vertex::getY()
{
    return y;
}

float Vertex::getZ()
{
    return z;
}

void Vertex::setX(float x)
{
    this->x = x;
}

void Vertex::setY(float y)
{
    this->y = y;
}

void Vertex::setZ(float z)
{
    this->z = z;
}

void Vertex::printCoordinates()
{
    std::cout << this->x << " " << this->y << " " << this->z << std::endl;
}

Vertex::~Vertex()
{

}


