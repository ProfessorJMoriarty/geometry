#pragma once


class triangle {
private:
	int topX;
	int topY;
	int bottomLeftx;
	int bottomLefty;
	int bottomRightx;
	int bottomRighty;
	bool dead;

public:
	void generatePoints();
	void move();
	void kill();
	void initTriangle();
	void drawTriangle();


};