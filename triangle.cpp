#include"triangle.h"
#include <cstdlib>
#include<allegro5\allegro.h>
#include<allegro5\allegro_primitives.h>
#include<iostream>
using namespace std;

//class triangle {
//private:
//	int topX;
//	int topY;
//	int bottomLeftx;
//	int bottomLefty;
//	int bottomRightx;
//	int bottomRighty;
//	bool dead;
//
//public:
//	void generatePoints();
//	void move();
//	void kill();
//  
//
//};

void triangle::initTriangle() {
	topX = rand()%200+200;
	topY = rand() % 200 + 200;;
	bottomLeftx=400;
	bottomLefty=400;
	bottomRightx=400+ rand() % 200 + 200;
	bottomRighty=400+ rand() % 200 + 200;
	dead = false;


}

void triangle::drawTriangle() {
	cout << "flag1";
	al_draw_filled_triangle(topX, topY, bottomLeftx, bottomLefty, bottomRightx, bottomRighty, al_map_rgb(50, 150, 20));
	cout << "flag2";


}