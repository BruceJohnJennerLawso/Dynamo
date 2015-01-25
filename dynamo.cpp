// dynamo.cpp //////////////////////////////////////////////////////////////////
// Learning how to cross platform dynamic bind stuff in ////////////////////////
// C++ alongside SFML //////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"
//#include "Headers.hpp"
//#include "Source.cpp"

#include <iostream>


int main()
{	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{	sf::Event event;
		while (window.pollEvent(event))
		{	if(event.type == sf::Event::Closed)
			{	window.close();
			}
		}
		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}












