/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#ifndef OFFPARSER_H
#define OFFPARSER_H

#include "OFF.h"
#include <ostream>

class OFFParser
{
    public:
        OFFParser();
        void offFileParser(std::string filename, OFF* off);
        virtual ~OFFParser();
};

#endif // OFFPARSER_H
