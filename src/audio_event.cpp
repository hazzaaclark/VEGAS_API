#include "audio.hpp"
#include "COM.hpp"

#ifndef AUDIO_EVENT_MAIN
#define AUDIO_EVENT_MAIN

static AUDIO_EVENT MEDIA_TYPE(bool)
{
	AUDIO_TRACK::IS_VIDEO || AUDIO_TRACK::IS_AUDIO;
	return;
}

static EFFECT_COM AUDIO_COM()
{
	EVENT_COM::GET_EFFECT_COM;
	return;
}

static AUDIO_EVENT NORMALISE()
{
	AUDIO_EVENT::RESULT = false;
	EVENT_COM::GET_NORMALISE;
	return;
}

#endif
