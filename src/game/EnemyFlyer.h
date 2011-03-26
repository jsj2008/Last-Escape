#pragma once
#include "Enemy.h"

class EnemyFlyer : public Enemy
{
public:
	EnemyFlyer();
	~EnemyFlyer();
	virtual void update(float dt);
private:
	int patrolCountdown, patrolLength;
	float fly_speed;
	float speed_x;
	float speed_y;
}; 
