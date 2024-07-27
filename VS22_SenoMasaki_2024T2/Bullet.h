#pragma once

class Bullet {
public:
	Vec2 bullet_genepos{ 400.0,150.0 };
	//弾を扱うための配列
	Array<Vec2> bulles;

	//クールタイムを終えたかどうか
	bool bullets_flag = false;
	//弾を打つ関数
	void Shot();
	//弾の移動
	void BulletMove();
	//弾の描画
	void BulletDraw();
protected:

private:
	//弾が移動する速さ
     double bullet_speed = 1.0f;

	 //弾を連続で発射しないようにクールタイムを設ける
	  float get_cooltime = 0;
	 //クールタイムを管理するための変数
	 double shot_cooltimer = 10;
	 //打ち出した弾の数を記録する
	 double bullet_count = 0;
	 //弾のデザイン
	 const Texture BULLET_TEXTURE{ U"☠️"_emoji };
};
