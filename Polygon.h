/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#ifndef POLYGON_H
#define POLYGON_H

#include <ostream>

class Polygon
{
    public:
        float getX();
        float getY();
        float getZ();
        void setX(float x);
        void setY(float y);
        void setZ(float z);
		virtual float getArea(void) = 0;
		virtual float getPerimetry(void) = 0;
		virtual std::string getType(void) = 0;
		virtual void printCoordinates(void) = 0;

    private:
        float x, y, z;
};

#endif // POLYGON_H
