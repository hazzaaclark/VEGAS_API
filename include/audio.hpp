#pragma once

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#ifndef __AUDIO_H__
#define AUDIO
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
	static bool SET_NORM;
	static bool FORMAT_LOCK;
	static double NORMALISE_GAIN;
	static double GAIN_RESULT;
	static double FORMAT_SHIFT;

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

typedef enum TIME_STRETCH_PITCH_SHIFT
{
	CLASSIC = 1,
	ACID = 2,
	ELASTIQUE = 3,
	NONE
};

typedef struct STRETCH_ATTRIBUTES
{
	enum CLASSIC
	{
		A1,
		A2,
		A3,
		A4,
		A5,
		A6,
		A7,
		A8,
		A9,
		A10,
		A11,
		A12,
		A13,
		A14,
		A15,
		A16,
		A17,
		A18,
		A19
	};

	enum ELASTIQUE
	{
		PRO,
		EFFICIENT,
		SOLOIST_MONOPHONIC,
		SOLOIST_SPEECH
	};

};
