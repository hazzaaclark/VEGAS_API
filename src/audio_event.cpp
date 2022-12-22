#include "audio.hpp"
#include "COM.hpp"

#ifndef AUDIO_EVENT_MAIN
#define AUDIO_EVENT_MAIN

static AUDIO_EVENT MEDIA_TYPE(bool)
{
	AUDIO_TRACK::IS_VIDEO || AUDIO_TRACK::IS_AUDIO;
	return;
}

#endif