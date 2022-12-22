#pragma once

#ifndef __COM_H__
#define COM_H
#else
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#ifndef EFFECT 
#define EFFECT

typedef struct EFFECT_COM
{
	static void GET_EFFECT_COUNT(int32_t COUNT);
	static void GET_SESSION_ID(int32_t INDEX, uint32_t SESSION_ID);
	static void GET_EFFECT_INDEX(uint32_t SESSION_ID, int32_t INDEX);
	static void GET_EFFECT_PLUGIN(uint32_t SESSON_ID);
	static void ADD_EFFECT(int32_t INDEX, uint32_t SESSION_ID);
	static void REMOVE_EFFECT(uint32_t SESSION_ID);
	static void GET_PRESET_COUNT(uint32_t SESSION_ID, int32_t COUNT);
	static void GET_PRESET_NAME(uint32_t SESSION_ID, int32_t INDEX, char* NAME);
	static void GET_CURRENT_PRESET();

};

#endif 

#ifndef EVENT
#define EVENT

typedef struct EVENT_COM
{
	static void GET_INDEX(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void GET_START(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void GET_LENGTH(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void GET_CHANNEL_REMAPPING(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_CHANNEL_REMAPPING(uint32_t TRACK_ID, uint64_t EVENT_ID);

	static void GET_TIME_STRETCH_PITCH_SHIFT(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_TIME_STRETCH_PITCH_SHIFT(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void GET_PTICH_LOCK(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_PTICH_LOCK(uint32_t TRACK_ID, uint64_t EVENT_ID);

	static void GET_PITCH_SEMIS(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_PITCH_SEMIS(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void GET_CLASSIC_ATTR(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_CLASSIC_ATTR(uint32_t TRACK_ID, uint64_t EVENT_ID);

	static void GET_ELASTIQUE_ATTR(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_ELASTIQUE_ATTR(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void GET_FORMAT_LOCK(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_FORMAT_LOCK(uint32_t TRACK_ID, uint64_t EVENT_ID);

	static void GET_FORMAT_SHIFT(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_FORMAT_SHIFT(uint32_t TRACK_ID, uint64_t EVENT_IDM);
	static void GET_INVERSE_PHASE(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_INVERSE_PHASE(uint32_t TRACK_ID, uint64_t EVENT_ID);

	static void MAINTAIN_ASPECT(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_ASPECT(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void REDUCE_INTERLACE(uint32_t TRACK_ID, uint64_t EVENT_ID);

};

typedef struct TRACK_COM
{
	static void GET_AUDIO_VOLUME_TRIM(uint32_t TRACK_ID, float EVENT_ID);
	static void SET_AUDIO_VOLUME_TRIM(uint32_t TRACK_ID, float EVENT_ID);
	static void GET_MEDIA_TYPE(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void GET_NAME(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void SET_NAME(uint32_t TRACK_ID, uint64_t EVENT_ID);
	static void GET_AUDIO_PAN_X(uint32_t TRACK_ID, float VALUE);
	static void SET_PAN_X_TOUCH(uint32_t TRACK_ID, bool VALUE);

};


#endif

#ifndef IPLUGIN
#define IPLUGIN

typedef struct IPLUGIN_NODE_COM
{
	void GET_COUNT(int32_t COUNT);
	void GET_CHILD_BY_INDEX(int32_t INDEX, IPLUGIN_NODE_COM CHILD);
};

#endif
