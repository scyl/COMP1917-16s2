#include <stdio.h>
#include <stdlib.h>
#include "point.h"

struct point {
    double x;
    double y;
};

int myFunction();

Point newPoint(double x, double y) {
    Point new = malloc(sizeof(struct point));
    if (new == NULL) {
        printf("OUT OF MEMORY\n");
        exit(1);
    }
    
    new->x = x;
    new->y = y;
    
    
    
    return new;
}

void setPoint(Point p, double x, double y) {
    p->x=x;
    p->y=y;
}

void shiftPoint(Point p, double xDist, double yDist) {
    //p->x += xDist;
    //p->y += yDist;
    setPoint(p, getX(p)+xDist, getY(p)+yDist);
}

double getX(Point p) {
    return p->x;
}

double getY(Point p) {
    return p->y;
}

void destroyPoint(Point p) {
    free(p);
}