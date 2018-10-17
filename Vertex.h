/*
 * Vertex.h
 *
 *  Created on: 12/05/2016
 *      Author: Freitas
 */

#ifndef VERTEX_H_
#define VERTEX_H_

/*
 *
 */
class Vertex {
	public:
		Vertex();
		Vertex(float x, float y, float z);
		virtual ~Vertex();
		float getX();
		float getY();
		float getZ();
		void setX(float x);
		void setY(float y);
		void setZ(float z);
		void printCoordinates();

	private:
		float x, y, z;
};

#endif /* VERTEX_H_ */
