/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#include "Polygon.h"
#include <stdlib.h>
#include <stdio.h>

float Polygon::getX() {
    return x;
}

float Polygon::getY() {
    return y;
}

float Polygon::getZ() {
    return z;
}

void Polygon::setX(float x) {
    this->x = x;
}

void Polygon::setY(float y) {
    this->y = y;
}

void Polygon::setZ(float z) {
    this->z = z;
}
