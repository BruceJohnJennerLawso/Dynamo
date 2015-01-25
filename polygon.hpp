// polygon.hpp /////////////////////////////////////////////////////////////////
// A core class that shapes in external modules will inherit from //////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"
//#include "Headers.hpp"
//#include "Source.cpp"
#include <SFML/Graphics.hpp>

class Polygon
{	protected:
	virtual void Draw_polygon(sf::RenderWindow &iwindow);
	virtual void Set_position(sf::Vector2f new_position);
	// guess thats pretty much it
};

class dynamoCircle: public Polygon
{	public:
	dynamoCircle(float initial_radius);
	
	float Radius;
	sf::CircleShape circle;
	
	float Get_radius();
	void Set_radius(float new_radius);
	void Draw_polygon(sf::RenderWindow &iwindow);
	void Set_position(sf::Vector2f new_position);
	~dynamoCircle();
};
