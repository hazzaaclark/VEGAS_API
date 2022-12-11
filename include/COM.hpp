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
#define EVENT_COM
#define EVELOPE_COM 
#define FILE_OPEN_COM

typedef struct EVENT_COM
{
	void GET_INDEX(unsigned int TRACK_ID, uint32_t EVENT_ID);
	void GET_MEDIA_TYPE(unsigned int TRACK_ID, uint32_t EVENT_ID);
	void GET_NAME(unsigned int TRACK_ID, uint32_t EVENT_ID);
	void SET_NAME(unsigned int TRACK_ID, uint32_t EVENT_ID);
	void GET_LENGTH(unsigned int TRACK_ID, uint32_t EVENT_ID);

};