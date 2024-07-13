#pragma once
class Player
{
public:
	//自機の最初の位置
	Vec2 player_pos{ 400,500 };

	//プレイヤーの移動関数
	Vec2 PlayerMove();
	//自機の描画
	void PlayerDraw();
protected:

private:
	//自機のテクスチャー
	const Texture PLAYER_TEXTURE{U"🤖"_emoji};
	//プレイヤーの移動スピード
	const double PLAYER_SPEED = 550.0;
};

