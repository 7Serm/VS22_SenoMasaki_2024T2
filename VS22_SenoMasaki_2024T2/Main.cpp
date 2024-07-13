# include <Siv3D.hpp>
# include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

void Main()
{
	Player player;
	Enemy enemy;
	Bullet bullet;
	while(System::Update())
	{
		bullet.Shot();
		bullet.BulletMove();
		bullet.BulletDraw();
		player.PlayerDraw();
		enemy.EnemyDraw();
	}
}
