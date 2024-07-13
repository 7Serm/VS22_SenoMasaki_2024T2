#include "stdafx.h"
#include "Player.h"

Vec2 Player::PlayerMove()
{
	player_pos = Cursor::Pos();
	player_pos.clamp(Scene::Rect());
	return player_pos;
}
void Player::PlayerDraw()
{
	PLAYER_TEXTURE.resized(80).drawAt(PlayerMove());
}
