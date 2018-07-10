#include <SFML/Graphics.hpp>

class SpaceObject
{
public:
	SpaceObject(unsigned int diameter, unsigned int mass);
	SpaceObject(unsigned int x, unsigned int y, unsigned int diameter, unsigned int mass);
	sf::CircleShape GetShape();
	~SpaceObject();
private:
	sf::CircleShape shape;
	unsigned int x;
	unsigned int y;
	unsigned int diameter;
	unsigned int mass;
};

