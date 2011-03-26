#include "EnemyFlyer.h"
#include "Player.h"
#include "Map.h"

EnemyFlyer::EnemyFlyer()
:Enemy()
{
	patrolLength = 400;
	
	fly_speed = 120.f;
	
	speed_x = 0;
	speed_y = 0;
	patrolCountdown = patrolLength;
	
	facing_direction = FACING_LEFT;
	
	setPlaceholder(sf::Color(255, 0, 0), 16, 32, 0.5f, 1.0f);
}

EnemyFlyer::~EnemyFlyer()
{
}

void EnemyFlyer::update(float dt) {
	const float vision_range = 320;
	
	patrolCountdown--;
	
	if(patrolCountdown == 0) {
		flipDirection();
		patrolCountdown = patrolLength;
	}
	
	if(facing_direction == FACING_LEFT) {
		move(-1, 0);
	} else if(facing_direction == FACING_RIGHT) {
		move(1, 0);
	}
	
	checkCollisions();
}


