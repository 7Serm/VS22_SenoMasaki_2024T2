#include "Bullet.h"
#include "stdafx.h"
#include "Siv3D.hpp"

void Bullet::Shot()
{
	get_cooltime++;

	if ( get_cooltime == 100)
	{
		bulles << bullet_genepos;
		bullet_count++;
		get_cooltime = 0;
	}

}

void Bullet::BulletMove()
{
	for (auto& bullet : bulles)
	{
		bullet.y += bullet_speed;//*Random(1,5);
	}
}

void Bullet::BulletDraw()
{
	for (auto& bullet : bulles)
	{
		BULLET_TEXTURE.resized(50).drawAt(bullet);

	}

}
