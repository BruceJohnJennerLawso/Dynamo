// dynamo_rect.cpp /////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"
//#include "Source.c"

//#include "Headers.hpp"
//#include "Source.cpp"
#include <iostream>
#include "dynamo_rect.hpp"

dynamoSquare::dynamoSquare(float initial_size, sf::Vector2f init_position): Polygon(init_position)
{	rect.setSize(sf::Vector2f(initial_size, initial_size));
	rect.setFillColor(sf::Color(40, 50, 60));
}

DLLCLBK Polygon *modulePolygon(sf::Vector2f init_position)
{	return new dynamoSquare(4, init_position);
	// just set it to 4 for now, not worth worrying about just yet
}

void dynamoSquare::Draw_polygon(sf::RenderWindow &iwindow)
{	this->Set_position(polygon_position);
	iwindow.draw(this->rect);
}

void dynamoSquare::Set_position(sf::Vector2f new_position)
{	rect.setPosition(new_position);
}

dynamoSquare::~dynamoSquare()
{	
}