/*
Kory Dondzila
Garret Richardson

Model.hpp
10/08/2016

Model class, used for keeping track of models used in the
scene, entities have a pointer to a model to know what it
will render.

*/

#ifndef MODEL_H
#define MODEL_H

#include "../includes465/include465.hpp"

class Model
{
private:
	char* m_cModelFile; // Model file name
	int m_iVertices; // Number of vertices
	GLuint* m_gliVAO;
	GLuint* m_gliBuffer;
	GLuint* m_gliShaderProgram;
	GLuint* m_gliPosition;
	GLuint* m_gliColor;
	GLuint* m_gliNormal;
	float m_fBoundingRadius; // Bounding radius of model

	// Initialize and load model
	void Init();

public:
	Model(char* modelFile, int vertices,
		GLuint* VAO, GLuint* buffer, GLuint* shaderProgram,
		GLuint* position, GLuint* color, GLuint* normal);

	~Model();

	int Vertices() { return m_iVertices; }
	GLuint* VAO() { return m_gliVAO; }
	GLuint* Buffer() { return m_gliBuffer; }
	GLuint* ShaderProgram() { return m_gliShaderProgram; }
	GLuint* Position() { return m_gliPosition; }
	GLuint* Color() { return m_gliColor; }
	GLuint* Normal() { return m_gliNormal; }
	float BoundingRadius() { return m_fBoundingRadius; }
};

#endif
