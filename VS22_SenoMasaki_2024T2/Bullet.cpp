#include "Bullet.h"
#include "stdafx.h"
#include "Siv3D.hpp"

bool Bullet::ShotTime()
{
	get_cooltime += 1;
	if ( shot_cooltimer <= get_cooltime)
	{
		bullets_flag = true;
	}
	shot_cooltimer = 10;
	return bullets_flag;
}

void Bullet::Shot()
{
	if ( ShotTime() && bullet_count < 100)
	{
		bulles << bullet_genepos;
		bullet_count++;
	}
	bullets_flag = false;

}

void Bullet::BulletMove()
{
	for (auto& bullet : bulles)
	{
		bullet.y += bullet_speed*Random(1,5);
	}
}

void Bullet::BulletDraw()
{
	for (auto& bullet : bulles)
	{
		BULLET_TEXTURE.resized(50).drawAt(bullet);

	}

}
