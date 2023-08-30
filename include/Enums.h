#pragma once

enum STATUS {

	NO_PIECE = 11,
	NOT_YOUR_PIECE = 12,
	DISTENETION_NOT_FREE = 13,
	INVALID_MOVE = 21,
	MOVE_MAKE_SELF_CHECK = 31,
	VALID_MOVE = 42,
	MOVE_MAKE_CHECK = 41,
};

enum PLAYER {
	BLACK,
	WHITE
};
