// polygon.hpp /////////////////////////////////////////////////////////////////
// A core class that shapes in external modules will inherit from //////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"
//#include "Headers.hpp"
//#include "Source.cpp"
#include "os.hpp"
#include <SFML/Graphics.hpp>

#ifdef WINDOWS
	#define DLLCLBK extern "C" __declspec(dllexport)
	// defined for msvc
#endif

class Polygon
{	public:
	Polygon(sf::Vector2f init_position);
	protected:
	virtual void Draw_polygon(sf::RenderWindow &iwindow);
	virtual void Set_position(sf::Vector2f new_position);
	
	
	sf::Vector2f polygon_position;
	// guess thats pretty much it
};

DLLCLBK Polygon *modulePolygon(sf::Vector2f init_position);

class dynamoCircle: public Polygon
{	public:
	dynamoCircle(float initial_radius, sf::Vector2f init_position);
	
	float Radius;
	sf::CircleShape circle;
	
	float Get_radius();
	void Set_radius(float new_radius);
	void Draw_polygon(sf::RenderWindow &iwindow);
	void Set_position(sf::Vector2f new_position);
	~dynamoCircle();
};
