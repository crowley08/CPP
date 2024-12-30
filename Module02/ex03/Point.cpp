#include "Point.Class.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point( const Point & src )
{
	*this = src;
	return ;
}

Point::Point( float const x, float const y ): _x(x), _y(y)
{
}

Point::~Point()
{
}

Point &				Point::operator=( Point const & rhs )
{
	if ( this != &rhs )
		new (this)Point(rhs.getX().toFloat(), rhs.getY().toFloat());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	o << "x:(" << i.getX() << "); y:(" << i.getY() << ");";
	return o;
}

Fixed	Point::getX( void ) const
{
	return (this->_x.toFloat());
}

Fixed    Point::getY( void ) const
{
	return (this->_y.toFloat());
}
