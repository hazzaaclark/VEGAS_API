#pragma once

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#ifndef __AUDIO_H__
#define AUDIO_H
#else

#endif 

typedef struct
{
	static bool IS_AUDIO;
	static bool IS_VIDEO;
	static bool INVERT_PHASE;
	static bool PITCH_LOCKED;
	static bool GET_NORMALISE;
	static bool RESULT;
	static const double NORMALISE_GAIN;
	static bool SET_NORM;

} AUDIO_EVENT;

typedef enum AUDIO_GAIN
{
	NORM = 1,
	GAIN = 2,
	NONE = 0
};

typedef enum AUDIO_OPERATION
{
	EQUAL = '=',
	NOT_EQ_TO = '!=',
};

typedef enum CHANNEL_MAPPING
{
	NONE = 1000,
	DISABLE_L,
	DISABLE_R,
	MUTE_L,
	MUTE_R,
	MONO,
	SWAP
};
