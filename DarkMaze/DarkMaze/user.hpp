#ifndef USER_HPP
#define USER_HPP

class User {
	int xLocation;
	int yLocation;

	User(int xStart, int yStart);

	void move(char direction);
};

#endif