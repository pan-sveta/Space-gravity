#include <SFML/Graphics.hpp>
#include <list>
#include "SpaceObject.h"

class Simulation
{
public:
	Simulation();
	~Simulation();
private:
	void Render();
	sf::RenderWindow *window;
	std::list<SpaceObject> SpaceObjects;
};

