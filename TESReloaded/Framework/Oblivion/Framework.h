#pragma once
#pragma warning (disable: 4244) //disable warning for possible loss of data in implicit cast between int, float and double

#define DETOURS_INTERNAL
#define assert(a) static_assert(a, "Assertion failed")
#define DIRECTINPUT_VERSION 0x0800

#include <windows.h>
#include <CommCtrl.h>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <d3d9.h>
#include <d3dx9math.h>
#include <dinput.h>
#include <dsound.h>
#include "../Common/Lib/Detours/detours.h"
#include "../Common/Lib/Nvidia/nvapi.h"
#include "../Common/Base/Logger.h"
#include "../Common/Base/Types.h"
#include "../Common/Base/SafeWrite.h"
#include "../Common/Base/PluginVersion.h"
#include "Plugin.h"
#include "GameNi.h"
#include "GameHavok.h"
#include "Game.h"
#include "Defines.h"
#include "Base.h"
#include "Managers.h"
#include "../Core/Hooks/GameCommon.h"
#include "../Core/Hooks/FormsCommon.h"
#include "../Core/Hooks/SleepingCommon.h"
#include "../Core/Hooks/Script.h"
#include "../Core/Hooks/Oblivion/Settings.h"
#include "../Core/Hooks/Oblivion/Game.h"
#include "../Core/Hooks/Oblivion/ShaderIO.h"
#include "../Core/Hooks/Oblivion/Render.h"
#include "../Core/Hooks/Oblivion/Forms.h"
#include "../Core/Hooks/Oblivion/Events.h"
#include "../Core/Hooks/Oblivion/Animation.h"
#include "../Core/Hooks/Oblivion/Shadows.h"
#include "../Core/Hooks/Oblivion/FrameRate.h"
#include "../Core/Hooks/Oblivion/Texture.h"
#include "../Core/Hooks/Oblivion/Occlusion.h"
#include "../Core/Hooks/Oblivion/Memory.h"
#include "../Core/Hooks/Oblivion/Grass.h"
#include "../Core/Hooks/Oblivion/Camera.h"
#include "../Core/Hooks/Oblivion/Equipment.h"
#include "../Core/Hooks/Oblivion/Mounted.h"
#include "../Core/Hooks/Oblivion/Sleeping.h"
#include "../Core/Hooks/Oblivion/Dodge.h"
#include "../Core/Hooks/Oblivion/FlyCam.h"
