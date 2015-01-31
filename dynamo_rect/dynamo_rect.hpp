// dynamo_rect.hpp /////////////////////////////////////////////////////////////
// the external module for rectangles in the ///////////////////////////////////
// dynamo program. These will hopefully be linked and used /////////////////////
// at runtime by the program ///////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"
//#include "Source.c"

//#include "Headers.hpp"
//#include "Source.cpp"
#include "../polygon.hpp"
// weird, but it works...

class dynamoSquare: public Polygon
{	public:
	dynamoSquare(float initial_size, sf::Vector2f init_position);

	sf::RectangleShape rect;
	
	void Draw_polygon(sf::RenderWindow &iwindow);
	void Set_position(sf::Vector2f new_position);
	~dynamoSquare();
};
