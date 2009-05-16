#ifndef GESTURES_H
#define GESTURES_H

#include "mtouch.h"

////////////////////////////////////////////////////////

#define GS_MOVE 0
#define GS_BUTTON 1

////////////////////////////////////////////////////////

struct Gestures {
	unsigned type;
	int dx, dy;
	int nbt, btix[DIM_BUTTON], btval[DIM_BUTTON];
};

////////////////////////////////////////////////////////

void extract_gestures(struct Gestures *gs, struct MTouch* mt);

////////////////////////////////////////////////////////

#endif