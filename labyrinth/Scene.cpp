#include "Scene.h"

void Scene::update(GLfloat dt)
{
	for (auto &var : cubeContainer) var.update(dt);
}

std::vector<Drawable*> Scene::getDrawables(void)
{
	std::vector<Drawable*> toDraw;

	for (auto &var : cubeContainer) toDraw.push_back(&var);

	return toDraw;
}

Scene::Scene()
{
	cubeContainer.push_back(Cube(0, 0));
	cubeContainer.push_back(Cube(0.5, 0));
	cubeContainer.push_back(Cube(1, 0));
	cubeContainer.push_back(Cube(1, 0.5));
	cubeContainer.push_back(Cube(1, -0.5));
}


Scene::~Scene()
{
}
