#include "user.hpp"

class User {
private:
	int xLocation;
	int yLocation;

public:
	User(int xStart, int yStart) {
		xLocation = xStart;
		yLocation = yStart;
	}

	void move(MovementKeys direction) {
		if (direction == MovementKeys::Up) {
			yLocation += 1;
		}
		else if (direction == MovementKeys::Left) {
			xLocation -= 1;
		}
		else if (direction == MovementKeys::Down) {
			yLocation -= 1;
		}
		else if (direction == MovementKeys::Right) {
			xLocation += 1;
		}
	}
};