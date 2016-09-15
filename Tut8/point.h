typedef struct point * Point;

Point newPoint(double x, double y);
void setPoint(Point p, double x, double y);
void shiftPoint(Point p, double xDist, double yDist);
double getX(Point p);
double getY(Point p);
void destroyPoint(Point p);