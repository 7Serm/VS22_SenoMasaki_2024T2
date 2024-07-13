#pragma once
class Enemy
{
public:
	Vec2 enemy_pos{ 400,150 };

	void EnemyDraw();

private:
	const Texture ENEMY_TEXTURE{ U"🤡"_emoji };

};

