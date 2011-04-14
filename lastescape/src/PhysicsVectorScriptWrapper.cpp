/*
 *  This file is part of Last Escape.
 *
 *  Last Escape is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Last Escape.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QtCore>
#include "PhysicsVectorScriptWrapper.h"

PhysicsVectorScriptWrapper::PhysicsVectorScriptWrapper(cpVect *vect) :
	QObject(0)
{
	vector = vect;
}

PhysicsVectorScriptWrapper::PhysicsVectorScriptWrapper() :
		QObject(0)
{
	vector = NULL;
}

PhysicsVectorScriptWrapper::~PhysicsVectorScriptWrapper()
{
	qDebug() << "deleting vector wrapper";
}


double PhysicsVectorScriptWrapper::getX()
{
	return vector->x;
}

void PhysicsVectorScriptWrapper::setX(double newX)
{
	vector->x = newX;
}

double PhysicsVectorScriptWrapper::getY()
{
	return vector->y;
}

void PhysicsVectorScriptWrapper::setY(double newY)
{
	vector->y = newY;
}

void PhysicsVectorScriptWrapper::dump()
{
	qDebug() << vector->x << ", " << vector->y;
}
