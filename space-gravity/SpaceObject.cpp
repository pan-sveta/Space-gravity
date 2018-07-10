#include "SpaceObject.h"



SpaceObject::SpaceObject(unsigned int diameter, unsigned int mass)
{
	this->x = 0;
	this->y = 0;
	this->diameter = diameter;
	this->mass = mass;
}

SpaceObject::SpaceObject(unsigned int x, unsigned int y, unsigned int diameter, unsigned int mass)
{
	this->x = x;
	this->y = y;
	this->diameter = diameter;
	this->mass = mass;

	this->shape = sf::CircleShape();
	this->shape.setRadius(diameter);
	this->shape.setOrigin(diameter, diameter);
	this->shape.setPosition(x, y);
	this->shape.setFillColor(sf::Color::Green);
	
}

SpaceObject::~SpaceObject()
{
}

sf::CircleShape SpaceObject::GetShape()
{
	return this->shape;
}
