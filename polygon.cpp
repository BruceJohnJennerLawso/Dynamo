// polygon.cpp /////////////////////////////////////////////////////////////////
// A core class that shapes in external modules will inherit from //////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"
//#include "Headers.hpp"
//#include "Source.cpp"
#include "polygon.cpp"

void Polygon::Draw_polygon(sf::RenderWindow &iwindow)
{	std::cout << "Bad call to Polygon::Draw_polygon(sf::RenderWindow &iwindow)" << std::endl;
}

// Dynamo circle ///////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
	
dynamoCircle::dynamoCircle(float initial_radius)
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
{	iwindow.draw(this->circle);
}

void dynamoCircle::Set_position(sf::Vector2f new_position)
{	circle.setPosition(new_position);
}

dynamoCircle::~dynamoCircle()
{
}
