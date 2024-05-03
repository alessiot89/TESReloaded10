#pragma once

class CommandManager;	extern CommandManager*		TheCommandManager;
class SettingManager;	extern SettingManager*		TheSettingManager;
class ShaderManager;	extern ShaderManager*		TheShaderManager;
class TextureManager;	extern TextureManager*		TheTextureManager;
class RenderManager;	extern RenderManager*		TheRenderManager;
class FrameRateManager; extern FrameRateManager*	TheFrameRateManager;
class GameMenuManager;	extern GameMenuManager*		TheGameMenuManager;
class GameEventManager; extern GameEventManager*	TheGameEventManager;
class ShadowManager;	extern ShadowManager*		TheShadowManager;
class CameraManager;	extern CameraManager*		TheCameraManager;
class BinkManager;		extern BinkManager*			TheBinkManager;
class DebugManager;     extern DebugManager*		TheDebugManager;

class Main;					extern Main*					Global;
class TES;					extern TES*						Tes;
class PlayerCharacter;		extern PlayerCharacter*			Player;
class SceneGraph;			extern SceneGraph*				WorldSceneGraph;
class MainDataHandler;		extern MainDataHandler*			DataHandler;
class MenuInterfaceManager; extern MenuInterfaceManager*	InterfaceManager;
class QueuedModelLoader;	extern QueuedModelLoader*		ModelLoader;
class ShadowSceneNode;		extern ShadowSceneNode*			SceneNode;

#include "SettingManager.h"
#include "CommandManager.h"
#include "TextureManager.h"
#include "ShaderManager.h"
#include "RenderManager.h"
#include "FrameRateManager.h"
#include "GameEventManager.h"
#include "GameMenuManager.h"
#include "ShadowManager.h"
#include "CameraManager.h"
#include "BinkManager.h"

void InitializeManagers();