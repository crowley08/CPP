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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed    Point::getY( void ) const
{
	return (this->_y);
}
