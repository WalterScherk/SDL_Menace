#pragma once
#include "Scene.h"
#include "TestObject.h"
#include "TextObject.h"
#include "Spawner.h"
class Gameplay : public Scene
{
public:
	Gameplay() = default;

	void OnEnter() override {
	
		SPAWNER.SpawnObject(new TestObject());
		SPAWNER.SpawnObject(new TestObject());
		TextObject* text = new TextObject("Hola");
		text->GetTransform()->position.x = 200;
		text->GetTransform()->position.y = 200;
		_ui.push_back(text);
	}

	void OnExit() override { Scene::OnExit(); }

	void Update() override { Scene::Update(); }

	void Render() override { Scene::Render(); }

};
