#pragma once

class Bullet {
public:
	
	//弾を扱うための配列
	Array<Vec2> bulles;

	//クールタイムを終えたかどうか
	bool bullets_flag;
	//弾を打つ打つ間のクールタイム管理
	void ShotTime();
	//弾を打つ関数
	void Shot(Vec2 pos);
	//弾の移動
	void BulletMove();
	//弾の描画
	void BulletDraw();
protected:

private:
	//弾が移動する速さ
     double player_speed = 500;

	 //弾を連続で発射しないようにクールタイムを設ける
	 const double SHOT_COOLTIME = 0.1;
	 //クールタイムを管理するための変数
	 double shot_cooltimer = 0.0;
};
