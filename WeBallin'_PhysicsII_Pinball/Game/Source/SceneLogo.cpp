#include "App.h"
#include "Input.h"
#include "Textures.h"
#include "Audio.h"
#include "Render.h"
#include "Window.h"
#include "SceneLogo.h"
#include "EntityManager.h"
#include "Physics.h"

#include "Defs.h"
#include "Log.h"

SceneLogo::SceneLogo(bool startEnabled) : Module(startEnabled)
{
	name.Create("sceneLogo");
}

// Destructor
SceneLogo::~SceneLogo()
{}

// Called before render is available
bool SceneLogo::Awake(pugi::xml_node& config)
{
	LOG("Loading SceneLogo");
	bool ret = true;


	return ret;
}

// Called before the first frame
bool SceneLogo::Start()
{

	return true;
}

// Called each loop iteration
bool SceneLogo::PreUpdate()
{
	return true;
}

// Called each loop iteration
bool SceneLogo::Update(float dt)
{

	return true;
}

// Called each loop iteration
bool SceneLogo::PostUpdate()
{
	bool ret = true;

	if (app->input->GetKey(SDL_SCANCODE_ESCAPE) == KEY_DOWN)
		ret = false;

	return ret;
}

// Called before quitting
bool SceneLogo::CleanUp()
{
	LOG("Freeing scene");

	return true;
}