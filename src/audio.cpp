#include "audio.hpp"
#include "track.hpp"

static bool OPERATION()
{
	OPERATOR::EQUAL;
	OPERATOR::NOT_EQ_TO;
}

static double NORMALISE_GAIN()
{
	AUDIO_EVENT::RESULT = false;
	AUDIO_EVENT::GET_NORMALISE = TRACK_EVENT::TRACK_ID, TRACK_EVENT::EVENT_ID;
	return AUDIO_EVENT::RESULT;
	AUDIO_FUNCTIONS::SET_NORM = TRACK_EVENT::TRACK_ID, TRACK_EVENT::EVENT_ID, FLAGS::NORM, NULL, 1.0;
}
