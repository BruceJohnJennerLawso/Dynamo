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
#include <iostream>

int renderPolygons();

int main()
{	
	#ifdef WINDOWS
		std::cout << "BAHAHA on WiNdOw$" << std::endl;
		return -2;
	#else
		#ifdef LINUX
			return renderPolygons();
		#else
			std::cout << "Reality is disintegrating, we hAVE NO OPERATING SYSTEM" << std::endl;
			std::cout << "(or we are on OSX)" << std::endl;
			return -1;
		#endif
	#endif
	
}


int renderPolygons()
{	
	#ifdef WINDOWS
	// load up some library containing a shape definition, and use it to create
	// some type of shape type
	#endif
	
	dynamoCircle cow(30, sf::Vector2f(20,20));
	sf::RenderWindow window(sf::VideoMode(400, 400), "Dynamo");
	while (window.isOpen())
	{	sf::Event event;
		while (window.pollEvent(event))
		{	if(event.type == sf::Event::Closed)
			{	window.close();
				return 0;
				// normally exited the loop, no problems here
			}
		}
		window.clear();
		cow.Draw_polygon(window);
		#ifdef WINDOWS
		// draw the given shape defined from the dynamic library here
		#endif
		window.display();
	}
	return -1;
	// something odd happened, since we didnt exit the loop by return after the
	// user closed it
}









