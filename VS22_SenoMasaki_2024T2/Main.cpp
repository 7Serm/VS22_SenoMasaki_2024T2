# include <Siv3D.hpp>
# include "Player.h"

void Main()
{
	Player player;
	

	while(System::Update())
	{
		player.PlayerDraw();
	}
}
