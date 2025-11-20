#include "user.hpp"


int xLocation;
int yLocation;
User::User(int xStart, int yStart) {
	xLocation = xStart;
	yLocation = yStart;
}

void move(char direction) {
	if (direction == 'w') {
		yLocation += 1;
	}
	else if (direction == 'a') {
		xLocation -= 1;
	}
	else if (direction == 's') {
		yLocation -= 1;
	}
	else if (direction == 'd') {
		xLocation += 1;
	}
}