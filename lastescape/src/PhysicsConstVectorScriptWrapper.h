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

#pragma once
#include <QObject>
#include <chipmunk/chipmunk.h>

class PhysicsConstVectorScriptWrapper : public QObject
{
	Q_OBJECT
	Q_PROPERTY(double x READ getX)
	Q_PROPERTY(double y READ getY)
public:
	explicit PhysicsConstVectorScriptWrapper(cpVect * vect);
	PhysicsConstVectorScriptWrapper();
	~PhysicsConstVectorScriptWrapper();
	cpVect * vector;

signals:

public slots:
	double getX();
	double getY();

	void dump();
};

