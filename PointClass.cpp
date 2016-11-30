#include "PointClass.h"

class Point 
{
	int _x, _y;
 
  public:
	Point() 
	{
		_x = _y = 0;
	}
	
	Point(const int xval, const int yval) 
	{
		_x = xval;
		_y = yval;
    	}
    	
    	Point(const Point &from) 
    	{
      		_x = from._x;
      		_y = from._y;
    	}

    	~Point() { /* Nothing to do! */ }
 
    	void setX(const int val);
    	void setY(const int val);
    	int getX() { return _x; }
    	int getY() { return _y; }
};

class Point3D : public Point 
{
	int _z;
  
public:
	Point3D() 
	{
      		setX(0);
      		setY(0);
      		_z = 0;
    	}
    	
    	Point3D( const int x, const int y, const int z) : Point(x, y) 
    	{
        	_z = z;
    	}

    	~Point3D() { /* Nothing to do */ }

    	int getZ() { return _z; }
    	void setZ(const int val) { _z = val; }
	
};

class Point_storage 
{
public:
	std::vector<Point3D> *v_points;
	
  	Point_storage() 
  	{
		v_points->push_back(Point3D(500.0,200,-20.0));
		v_points->push_back(Point3D(540.0,200.0,-20.0));
		v_points->push_back(Point3D(500.0,400.0,-20.0));
		v_points->push_back(Point3D(540.0,400.0,-20.0));
	}
	
	Point3D test(int p) 
	{
		return v_points->at(1);
	}
};
