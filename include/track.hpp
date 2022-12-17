#pragma once

#ifndef __TRACK_H__
#define TRACK_H
#else
#endif 

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#ifndef COM 
#define COM
#include "COM.hpp"
#endif 

static __readonly COM_H::EFFECT_COM;

typedef struct
{
	static const uint32_t TRACK_ID;
	static const uint32_t EVENT_ID;

} TRACK_EVENT;
