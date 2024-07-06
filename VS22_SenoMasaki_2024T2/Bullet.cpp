#include "Bullet.h"
#include "stdafx.h"

void Bullet::ShotTime()
{
	
}

void Bullet::Shot(Vec2 pos)
{
	bulles << pos.moveBy(0, -50);
}

void Bullet::BulletMove()
{
	
}

void Bullet::BulletDraw()
{

}
