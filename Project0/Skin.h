

#pragma once

#include "Core.h"
#include "Joint.h"
#include "Tokenizer.h"
#include <iostream>
#include "Vertex.h"
#include "Skeleton.h"

class Skin
{

public:

	Skin(Skeleton* skel);
	~Skin();

	bool Load(const char *file);
	void Update(glm::mat4 parentW);
	void Draw(const glm::mat4 &viewProjMtx, uint shader);
	void BindShader();
	void SyncShaderArrays();

	unsigned int numV;
	std::vector<Vertex*> vertices;
	Skeleton* skeleton;

	std::vector<float> shaderVerts;
	std::vector<unsigned int> shaderIndices;
	std::vector<float> shaderNormals;
	GLuint shader;
	GLuint VBO, VBO2, VAO, EBO;


private:


};