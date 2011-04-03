/*
 *  This file is part of Last Escape.
 *
 *  Last Escape is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  Last Escape is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Last Escape.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "Map.h"
#include "AnimatedActor.h"
#include "Sound.h"
#include "globals.h"
#include "StartPoint.h"

class Player : public AnimatedActor {
public:
	Player(float x, float y);

	virtual bool isPlayer() { return true; }

	virtual void update(float dt);
	virtual void draw();
	virtual void die();
	//virtual void collide(Actor & otherActor);
	virtual void onColliding(Actor & otherActor);
	virtual void onDestroy();
	virtual void onAnimationComplete(std::string anim);
	virtual bool doDamage(float damage, bool knockback = true);
	virtual void onDamage();
	virtual void onLevelUp(int newLevel);
	virtual void resetPhysicsCustom(float start_x, float start_y);
	
	void addExperience(int exp);
	int getCurrentExperience();
	
	StartPoint * findStart();
	
	StartPoint * currentStart;
	void init();

	void jump(float dt);
	void shoot();
	void crouch();

	void upgradeWeapon();

	int currentWeapon;

	float time;
	float last_shoot_time;
	float last_jump_time;

	float energy;
	float energy_max;

	float speed_x;
	float speed_y;
	
	float shoot_duration;
	
	bool crouched;
	bool walking;
	
	int armor;
	int lives;
	int energyBalls;
	float recoveryTime;
	float recoveryTimer;
	
	float baseMaxEnergy;
	float energyPerLevel;
	
	Sound * fireSound;
	Sound * jumpSound;
	Sound * dieSound;
	
	int currentExperience;
};


#endif
