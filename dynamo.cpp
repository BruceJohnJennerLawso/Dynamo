// dynamo.cpp //////////////////////////////////////////////////////////////////
// Learning how to cross platform dynamic bind stuff in ////////////////////////
// C++ alongside SFML //////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"
//#include "Headers.hpp"
//#include "Source.cpp"
#include "polygon.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>


int main()
{	
	dynamoCircle cow(30);
	cow.Set_position(sf::Vector2f(20,20));
	sf::RenderWindow window(sf::VideoMode(400, 400), "Dynamo");
	while (window.isOpen())
	{	sf::Event event;
		while (window.pollEvent(event))
		{	if(event.type == sf::Event::Closed)
			{	window.close();
			}
		}
		window.clear();
		cow.Draw_polygon(window);
		window.display();
	}

	return 0;
}












