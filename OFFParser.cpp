/**
 * Author Details:
 * Diego de Freitas Bezerra
 * Federal Rural University of Pernambuco
 * Departament of Computer Science
 * {diegofreitaschaos} @gmail.com, @hotmail.com
 */

#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include "Vertex.h"
#include "OFFParser.h"

OFFParser::OFFParser()
{

}

void OFFParser::offFileParser(std::string filename, OFF* off)
{

    std::ifstream inFile(filename.c_str());
    std::string line;

    int nVertex, nFaces, nNormal;
    float x, y, z;
    int arg1, arg2, arg3, arg4, arg5;

    getline(inFile, line);

    // Verificando se o cabeçalho do arquivo segue o padrão OFF.
    // Em caso negativo, a aplicação encerra.
    if (line != "OFF")
    {
        std::cout << "This file is not in off format." << std::endl;
        return;
    }

    /**
     * A leitura dos dados do arquivo se baseou na manipulação de strings.
     * O uso da função find procura selecionar um intervalo para uma substring.
     * Os valores obtidos, seguindo o padrão OFF, são utilizados para inserção
     * instância das classes criadas.
     */
    getline(inFile, line);

    arg1 = line.find(" ", 0);
    nVertex = atoi(line.substr(0, arg1).c_str());

    arg2 = line.find(" ", arg1 + 1);
    nFaces = atoi(line.substr(arg1, arg2).c_str());

    arg3 = line.find(" ", arg2 + 1);
    nNormal = atoi(line.substr(arg2, arg3).c_str());

    /* Buscando os valores de cada vértice em cada substring.
       Assim que encontrados os valores referentes ao x, y, z*/
    for (int i = 0; i < nVertex; i++)
    {
        getline(inFile, line);

        arg1 = line.find(" ", 0);
        x = atof(line.substr(0, arg1).c_str());

        arg2 = line.find(" ", arg1 + 1);
        y = atof(line.substr(arg1, arg2 ).c_str());

        arg3 = line.find(" ", arg2 + 1);
        z = atof(line.substr(arg2, arg3 ).c_str());

        off->insertVertex(new Vertex(x, y, z));

    }

    /* Buscando os valores de cada face em cada substring. */
    for (int i = 0; i < nFaces; i++)
    {
        getline(inFile,line);

        arg1 = line.find(" ", 0);

        // Se o primeiro argumento for 3, então instancie um triangulo e insira no vector de Polygon.
        if(atoi(line.substr(0, arg1).c_str()) == 3)
        {
            arg2 = line.find(" ", arg1 + 1);
            int index_1 = atoi(line.substr(arg1, arg2).c_str());

            arg3 = line.find(" ", arg2 + 1);
            int index_2 = atoi(line.substr(arg2, arg3).c_str());

            arg4 = line.find(" ", arg3 + 1);
            int index_3 = atoi(line.substr(arg3, arg4).c_str());

            off->insertFace(new Triangle(off->getVertex(index_1), off->getVertex(index_2),
                                         off->getVertex(index_3)));
        }
        // Se o primeiro argumento for 4, então instancie um retângulo e insira no vector de Polygon.
        else if(atoi(line.substr(0, arg1).c_str()) == 4)
        {
            arg2 = line.find(" ", arg1 + 1);
            int index_1 = atoi(line.substr(arg1, arg2).c_str());

            arg3 = line.find(" ", arg2 + 1);
            int index_2 = atoi(line.substr(arg2, arg3).c_str());

            arg4 = line.find(" ", arg3 + 1);
            int index_3 = atoi(line.substr(arg3, arg4).c_str());

            arg5 = line.find(" ", arg4 + 1);
            int index_4 = atoi(line.substr(arg4, arg5).c_str());

            off->insertFace(new Rectangle(off->getVertex(index_1), off->getVertex(index_2),
                                         off->getVertex(index_3), off->getVertex(index_4)));
        }
    }
}

OFFParser::~OFFParser()
{

}
