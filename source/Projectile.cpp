#include "BackGround.h"

void BackGround::Update()
{
	_transform->position.x -= 0.05f;

	if (_transform->position.x <= -500)
	{
		SPAWNER.SpawnObject(new BackGround(Vector2(RM->WINDOW_WIDTH+ RM->WINDOW_WIDTH/2, 500)));
		GetDestroyed();
	}

	Object::Update();
}
