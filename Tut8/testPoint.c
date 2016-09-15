#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int main(int argc, char* argv[]){
    Point p = newPoint(0,0);
	shiftPoint(p,1,-1);
	printf("x value is: %f\n", getX(p));
	printf("y value is: %f\n", getY(p));
	destroyPoint(p);

    return EXIT_SUCCESS;
}