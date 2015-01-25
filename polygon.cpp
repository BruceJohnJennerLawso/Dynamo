// polygon.cpp /////////////////////////////////////////////////////////////////
// A core class that shapes in external modules will inherit from //////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"
//#include "Headers.hpp"
//#include "Source.cpp"
#include <iostream>
#include "polygon.hpp"

Polygon::Polygon(sf::Vector2f init_position)
{	this->Set_position(init_position);
}

void Polygon::Draw_polygon(sf::RenderWindow &iwindow)
{	std::cout << "Bad call to Polygon::Draw_polygon(sf::RenderWindow &iwindow)" << std::endl;
}

void Polygon::Set_position(sf::Vector2f new_position)
{	polygon_position = new_position;
}

// Dynamo circle ///////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
	
dynamoCircle::dynamoCircle(float initial_radius, sf::Vector2f init_position): Polygon(init_position)
{	Radius = initial_radius;
	circle.setRadius(Radius);
	circle.setFillColor(sf::Color(250, 150, 100));
}

float dynamoCircle::Get_radius()
{	return Radius;
}

void dynamoCircle::Set_radius(float new_radius)
{	Radius = new_radius;
}

void dynamoCircle::Draw_polygon(sf::RenderWindow &iwindow)
{	this->Set_position(polygon_position);
	iwindow.draw(this->circle);
}

void dynamoCircle::Set_position(sf::Vector2f new_position)
{	circle.setPosition(new_position);
}

dynamoCircle::~dynamoCircle()
{
}
