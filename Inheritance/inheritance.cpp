#include <iostream>
#include <string>

//If we want to override an function you need to mark 
//the base function in the base class as vitual.

class Entity 
{
	public:
		float	x, y;

		void	move(float _x, float _y)
		{
			x += _x;
			y += _y;
			std::cout << "X: " << x << "Y: " << y << std::endl;
		}
		virtual std::string getName() { return "Entity"; }	
};

//Everything what is not private in Entity class is now available in Player class.
class Player : public Entity //sub-class of the Entity class. So class Player have both types
{
	private:
		std::string m_Name;
	public:
		Player(const std::string &name) : m_Name(name){}

		std::string getName() { return m_Name; }
};

int	main(void)
{
	Entity *e = new Entity();
	std::cout << e->getName() << std::endl;

	Player *p = new Player("Cherno");
	std::cout << p->getName() << std::endl;

	Entity *entity = p;
	std::cout << entity->getName() << std::endl;

	p->move(10, 20);

	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;

	return (0);
}

