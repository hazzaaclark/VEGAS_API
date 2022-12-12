#pragma once

#ifndef __COM_H__
#define COM_H
#else
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BUS_TRACK_COM
#define COM
#define EFFECT_COM
#define EVENT_COM
#define EVELOPE_COM
#define FILE_OPEN_COM
#define IPLUGIN_NODE_COM(uint32_t)

typedef struct EFFECT_COM
{
	void GET_EFFECT_COUNT(int32_t COUNT);
	void GET_SESSION_ID(int32_t INDEX, uint32_t SESSION_ID);
	void GET_EFFECT_INDEX(uint32_t SESSION_ID, int32_t INDEX);
	void GET_EFFECT_PLUGIN(uint32_t SESSON_ID, IPLUGIN_NODE_COM);
	void ADD_EFFECT(IPLUGIN_NODE_COM COM, int32_t INDEX, uint32_t SESSION_ID);
	void REMOVE_EFFECT(uint32_t SESSION_ID);

};

typedef struct EVENT_COM
{
	void GET_INDEX(uint32_t TRACK_ID, uint64_t EVENT_ID);
	void GET_MEDIA_TYPE(uint32_t TRACK_ID, uint64_t EVENT_ID);
	void GET_NAME(uint32_t TRACK_ID, uint64_t EVENT_ID);
	void SET_NAME(uint32_t TRACK_ID, uint64_t EVENT_ID);
	void GET_LENGTH(uint32_t TRACK_ID, uint64_t EVENT_ID);
};

struct IPLUGIN_NODE_COM
{
	void GET_COUNT(int32_t COUNT);
	void GET_CHILD_BY_INDEX(int32_t INDEX, IPLUGIN_NODE_COM CHILD);
};
