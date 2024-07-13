#pragma once

class Bullet {
public:
	Vec2 bullet_genepos{ 400.0,150.0 };
	//弾を扱うための配列
	Array<Vec2> bulles;

	//クールタイムを終えたかどうか
	bool bullets_flag = false;
	//弾を打つ打つ間のクールタイム管理
	 bool ShotTime();
	//弾を打つ関数
	void Shot();
	//弾の移動
	void BulletMove();
	//弾の描画
	void BulletDraw();
protected:

private:
	//弾が移動する速さ
     double bullet_speed = 0.1;

	 //弾を連続で発射しないようにクールタイムを設ける
	  float get_cooltime = 0;
	 //クールタイムを管理するための変数
	 double shot_cooltimer = 10;
	 double bullet_count = 0;
	 const Texture BULLET_TEXTURE{ U"☠️"_emoji };
};
