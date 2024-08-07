#include "ultra64.h"
#include "global.h"

s16 BuffDekuSkelPanicAnimFrameData[193] = {
	0xfffb, 0x0073, 0x4000, 0x0000, 0xffff, 0xf985, 0xf941, 0x01fe, 0x01d7, 0xeb63, 0xff15, 0xf059, 0xefc0, 0x0b4f, 0x0c53, 0x0ce0, 
	0x0c53, 0x0b4f, 0x0ac2, 0xe83e, 0xea80, 0xebb7, 0xea80, 0xe83e, 0xe707, 0xfd40, 0x0047, 0x01cf, 0x0047, 0xfd40, 0xfb6d, 0x062e, 
	0xfa9e, 0xf46f, 0xfa9e, 0x062e, 0x0c49, 0x4f5c, 0x508f, 0x50dd, 0x508f, 0x4f5c, 0x4e54, 0x091d, 0x076a, 0x0692, 0x076a, 0x091d, 
	0x0a1c, 0xe769, 0xeae1, 0xecc1, 0xeae1, 0xe769, 0xe590, 0x887c, 0x8964, 0x89cb, 0x8964, 0x887c, 0x87e7, 0xb94a, 0xb586, 0xb3ed, 
	0xb586, 0xb94a, 0xbbeb, 0xd4a9, 0xd8b8, 0xdaf5, 0xd8b8, 0xd4a9, 0xd28f, 0xf938, 0xfc7b, 0xfdcd, 0xfc7b, 0xf938, 0xf6da, 0xf3ab, 
	0xf2a5, 0xf21c, 0xf2a5, 0xf3ab, 0xf43e, 0x09fd, 0x0925, 0x08ab, 0x0925, 0x09fd, 0x0a6d, 0x9533, 0x933a, 0x922e, 0x933a, 0x9533, 
	0x9646, 0xf556, 0xf66c, 0xf6f9, 0xf66c, 0xf556, 0xf4b5, 0x18a9, 0x15e8, 0x146c, 0x15e8, 0x18a9, 0x1a23, 0x8b93, 0x8c2a, 0x8c70, 
	0x8c2a, 0x8b93, 0x8b35, 0x1190, 0xf1e9, 0xe33b, 0xf1e9, 0x1190, 0x1cf9, 0x4b73, 0x4a56, 0x4c3b, 0x4a56, 0x4b73, 0x4e23, 0xd98c, 
	0xba36, 0xabb4, 0xba36, 0xd98c, 0xe4ca, 0x1938, 0x187f, 0x1810, 0x187f, 0x1938, 0x198e, 0x04a9, 0x0575, 0x05d7, 0x0575, 0x04a9, 
	0x0431, 0xb8ba, 0xb2c6, 0xaf91, 0xb2c6, 0xb8ba, 0xbbe9, 0x7652, 0x73dd, 0x728b, 0x73dd, 0x7652, 0x77a4, 0xe1c9, 0xe516, 0xe687, 
	0xe516, 0xe1c9, 0xdf8c, 0xfff7, 0xf189, 0xe9d4, 0xf189, 0xfff7, 0x0777, 0xf9e0, 0xfd12, 0xfe6e, 0xfd12, 0xf9e0, 0xf7af, 0x23fa, 
	0x203a, 0x1d4e, 0x203a, 0x23fa, 0x2557, 0x01c6, 0x0edd, 0x1591, 0x0edd, 0x01c6, 0xfab2, 0xfb1b, 0xf652, 0xf2f1, 0xf652, 0xfb1b, 
	0xfd29, };

JointIndex BuffDekuSkelPanicAnimJointIndices[18] = {
	{ 0x0000, 0x000d, 0x0001, },
	{ 0x0002, 0x0003, 0x0002, },
	{ 0x0003, 0x0003, 0x0013, },
	{ 0x0004, 0x0004, 0x0005, },
	{ 0x0004, 0x0003, 0x0006, },
	{ 0x0004, 0x0003, 0x0004, },
	{ 0x0019, 0x001f, 0x0025, },
	{ 0x002b, 0x0031, 0x0037, },
	{ 0x003d, 0x0043, 0x0049, },
	{ 0x004f, 0x0055, 0x005b, },
	{ 0x0061, 0x0067, 0x006d, },
	{ 0x0073, 0x0079, 0x007f, },
	{ 0x0085, 0x008b, 0x0091, },
	{ 0x0004, 0x0003, 0x0097, },
	{ 0x009d, 0x00a3, 0x00a9, },
	{ 0x0007, 0x0008, 0x0009, },
	{ 0x00af, 0x00b5, 0x00bb, },
	{ 0x000a, 0x000b, 0x000c, },
};

AnimationHeader BuffDekuSkelPanicAnim = { { 6 }, BuffDekuSkelPanicAnimFrameData, BuffDekuSkelPanicAnimJointIndices, 13 };

