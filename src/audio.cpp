#include "audio.h"
#include "track.h"

static double NORMALISE_GAIN()
{
	AUDIO_EVENT::RESULT = false;
	AUDIO_EVENT::GET_NORMALISE = TRACK_EVENT::TRACK_ID, TRACK_EVENT::EVENT_ID;
	return AUDIO_EVENT::RESULT;

	SET_NORMALISE();
}