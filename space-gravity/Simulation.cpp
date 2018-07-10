#include "Simulation.h"


Simulation::Simulation():window(new sf::RenderWindow(sf::VideoMode(800, 800), "foo"))
{
	Render();
}


Simulation::~Simulation()
{
}


void Simulation::Render()
{
	while (window->isOpen())
	{
		

		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
			if (event.type == sf::Event::MouseButtonPressed)
			{
				SpaceObject o = SpaceObject(sf::Mouse::getPosition(*window).x, sf::Mouse::getPosition(*window).y, 25, 0);
				SpaceObjects.push_back(o);
			}
		}

		window->clear();
		for (SpaceObject obj : SpaceObjects)
		{
			window->draw(obj.GetShape());
		}

		window->display();
	}
}
