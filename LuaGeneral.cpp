/****************************************************************************
**
** Copyright (C) 2021 Donna Whisnant, a.k.a. Dewtronics.
** Contact: http://www.dewtronics.com/
**
** This file is part of the frsky_sport_tool Application.
**
** GNU General Public License Usage
** This file may be used under the terms of the GNU General Public License
** version 3.0 as published by the Free Software Foundation and appearing
** in the file gpl-3.0.txt included in the packaging of this file. Please
** review the following information to ensure the GNU General Public License
** version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and
** Dewtronics.
**
****************************************************************************/

#include "LuaGeneral.h"

extern "C" {
#include <lua/lua.h>
#include <lua/lualib.h>
#include <lua/lauxlib.h>
}

#include "Lua_lrotable.h"

// ============================================================================



// ============================================================================

const luaL_Reg lua_opentx_generalLib[] = {
//	{ "getTime", luaGetTime },
//	{ "getDateTime", luaGetDateTime },
#if defined(RTCLOCK)
//	{ "getRtcTime", luaGetRtcTime },
#endif
//	{ "getVersion", luaGetVersion },
//	{ "getGeneralSettings", luaGetGeneralSettings },
//	{ "getGlobalTimer", luaGetGlobalTimer },
//	{ "getRotEncSpeed", luaGetRotEncSpeed },
//	{ "getValue", luaGetValue },
//	{ "getRAS", luaGetRAS },
//	{ "getTxGPS", luaGetTxGPS },
//	{ "getFieldInfo", luaGetFieldInfo },
//	{ "getFlightMode", luaGetFlightMode },
//	{ "playFile", luaPlayFile },
//	{ "playNumber", luaPlayNumber },
//	{ "playDuration", luaPlayDuration },
//	{ "playTone", luaPlayTone },
//	{ "playHaptic", luaPlayHaptic },
//	{ "flushAudio", luaFlushAudio },
//	// { "popupInput", luaPopupInput },
//	{ "popupWarning", luaPopupWarning },
//	{ "popupConfirmation", luaPopupConfirmation },
//	{ "defaultStick", luaDefaultStick },
//	{ "defaultChannel", luaDefaultChannel },
//	{ "getRSSI", luaGetRSSI },
//	{ "killEvents", luaKillEvents },
//	{ "chdir", luaChdir },
//	{ "loadScript", luaLoadScript },
//	{ "getUsage", luaGetUsage },
//	{ "getAvailableMemory", luaGetAvailableMemory },
//	{ "resetGlobalTimer", luaResetGlobalTimer },
#if defined(PXX2)
//	{ "accessTelemetryPush", luaAccessTelemetryPush },
#endif
//	{ "sportTelemetryPop", luaSportTelemetryPop },
//	{ "sportTelemetryPush", luaSportTelemetryPush },
//	{ "setTelemetryValue", luaSetTelemetryValue },
#if defined(CROSSFIRE)
//	{ "crossfireTelemetryPop", luaCrossfireTelemetryPop },
//	{ "crossfireTelemetryPush", luaCrossfireTelemetryPush },
#endif
#if defined(RADIO_FAMILY_TBS)
//	{ "SetDevId", luaSetDevId },
//	{ "GetDevId", luaGetDevId },
#endif
#if defined(MULTIMODULE)
//	{ "multiBuffer", luaMultiBuffer },
#endif
//	{ "setSerialBaudrate", luaSetSerialBaudrate },
//	{ "serialWrite", luaSerialWrite },
//	{ "serialRead", luaSerialRead },

	// ----
	{ nullptr, nullptr }	// sentinel
};


// ----------------------------------------------------------------------------

const luaR_value_entry lua_opentx_const_general[] =
{
	{"UNIT_RAW", UNIT_RAW },
	{"UNIT_VOLTS", UNIT_VOLTS },
	{"UNIT_AMPS", UNIT_AMPS },
	{"UNIT_MILLIAMPS", UNIT_MILLIAMPS },
	{"UNIT_KTS", UNIT_KTS },
	{"UNIT_METERS_PER_SECOND", UNIT_METERS_PER_SECOND },
	{"UNIT_FEET_PER_SECOND", UNIT_FEET_PER_SECOND },
	{"UNIT_KMH", UNIT_KMH },
	{"UNIT_MPH", UNIT_MPH },
	{"UNIT_METERS", UNIT_METERS },
	{"UNIT_KM", UNIT_KM },
	{"UNIT_FEET", UNIT_FEET },
	{"UNIT_CELSIUS", UNIT_CELSIUS },
	{"UNIT_FAHRENHEIT", UNIT_FAHRENHEIT },
	{"UNIT_PERCENT", UNIT_PERCENT },
	{"UNIT_MAH", UNIT_MAH },
	{"UNIT_WATTS", UNIT_WATTS },
	{"UNIT_MILLIWATTS", UNIT_MILLIWATTS },
	{"UNIT_DB", UNIT_DB },
	{"UNIT_RPMS", UNIT_RPMS },
	{"UNIT_G", UNIT_G },
	{"UNIT_DEGREE", UNIT_DEGREE },
	{"UNIT_RADIANS", UNIT_RADIANS },
	{"UNIT_MILLILITERS", UNIT_MILLILITERS },
	{"UNIT_FLOZ", UNIT_FLOZ },
	{"UNIT_MILLILITERS_PER_MINUTE", UNIT_MILLILITERS_PER_MINUTE },
	{"UNIT_HERTZ", UNIT_HERTZ },
	{"UNIT_MS", UNIT_MS },
	{"UNIT_US", UNIT_US },
	{"UNIT_HOURS", UNIT_HOURS },
	{"UNIT_MINUTES", UNIT_MINUTES },
	{"UNIT_SECONDS", UNIT_SECONDS },
	{"UNIT_CELLS", UNIT_CELLS},
	{"UNIT_DATETIME", UNIT_DATETIME},
	{"UNIT_GPS", UNIT_GPS},
	{"UNIT_BITFIELD", UNIT_BITFIELD},
	{"UNIT_TEXT", UNIT_TEXT},
	// ----
	{ nullptr, 0 }
};

// ============================================================================
