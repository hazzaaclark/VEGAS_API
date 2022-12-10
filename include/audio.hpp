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
	static double NORMALISE_GAIN;

} AUDIO_EVENT;

struct AUDIO_FUNCTIONS
{
	static void AUDIO_MAIN();
	static bool SET_NORM;
};

struct AUDIO_ENUM
{
	enum AUDIO_GAIN
	{
		NORM = 1,
		GAIN = 2,
		NONE = 0
	};

	enum AUDIO_OPERATION
	{
		EQUAL = '=',
		NOT_EQ_TO = '!=',
	};
};
