#include "stdafx.h"
#include "Enemy.h"

void Enemy::EnemyDraw()
{
	ENEMY_TEXTURE.resized(140).drawAt(enemy_pos);
}
