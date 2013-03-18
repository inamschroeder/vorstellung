/*******************************************************************************
 *  Vector2D.cpp
 *
 *  (C) 2004 AG Computergraphik
 *           Universitaet Koblenz-Landau
 ******************************************************************************/

//--- Includes -----------------------------------------------------------------

#include <cmath>
#include "Vector2D.h"


//--- Klassenimplementierung ---------------------------------------------------

Vector2D::Vector2D()
{
   setXY(0, 0);
}


Vector2D::Vector2D(float x, float y)
{
   setXY(x, y);
}


float Vector2D::x() const
{
   return mElement[X];
}


float Vector2D::y() const
{
   return mElement[Y];
}


float Vector2D::get(int index) const
{
   return mElement[index];
}


void Vector2D::set(int index, float value)
{
   mElement[index] = value;
}


void Vector2D::setX(float value)
{
   mElement[X] = value;
}


void Vector2D::setY(float value)
{
   mElement[Y] = value;
}


void Vector2D::setXY(float newX, float newY)
{
   mElement[X] = newX;
   mElement[Y] = newY;
}


float Vector2D::length() const
{
	//Länge des Vectors
   return 0;
}


Vector2D& Vector2D::operator +=(const Vector2D& rhs)
{
   mElement[X] += rhs.mElement[X];
   mElement[Y] += rhs.mElement[Y];

   return *this;
}


Vector2D& Vector2D::operator -=(const Vector2D& rhs)
{
   mElement[X] -= rhs.mElement[X];
   mElement[Y] -= rhs.mElement[Y];

   return *this;
}


Vector2D& Vector2D::operator *=(float rhs)
{
   mElement[X] *= rhs;
   mElement[Y] *= rhs;

   return *this;
}


Vector2D& Vector2D::operator /=(float rhs)
{
   mElement[X] /= rhs;
   mElement[Y] /= rhs;

   return *this;
}


//--- Verwandte Funktionen -----------------------------------------------------

const Vector2D operator +(const Vector2D& lhs, const Vector2D& rhs)
{
	//Addition
   return Vector2D(0, 0);
}


const Vector2D operator -(const Vector2D& lhs, const Vector2D& rhs)
{
	//Subtraktion
   return Vector2D(0, 0);
}


const Vector2D operator *(float lhs, const Vector2D& rhs)
{
   return Vector2D(rhs) *= lhs;
}


const Vector2D operator *(const Vector2D& lhs, float rhs)
{
	//skalare Multiplikation
   return Vector2D(0, 0);
}


const Vector2D operator /(const Vector2D& lhs, float rhs)
{
	//skalare Division
   return Vector2D(0, 0);
}


float dot(const Vector2D& lhs, const Vector2D& rhs)
{
	//Dot-Produkt
   return 0;
}

const Vector2D normalize(const Vector2D& v){
	//Normalisierung des eingegebenen Vectors
	return Vector2D(0, 0);
}
