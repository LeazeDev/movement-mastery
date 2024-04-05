#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		WARP_NODE(0x0A, LEVEL_JRB, 0x01, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN, -350, 3100, 0, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -350, 3100, 0, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -250, 2900, 1900, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -250, 2780, -900, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -250, 1700, -800, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -250, 2850, 1050, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -350, 2950, 0, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_RED_COIN, 250, 1530, 600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 250, 3500, 0, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 250, 2100, -2200, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 0, 2100, 0, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -250, 3400, -2200, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -250, 1800, 1000, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 0, 1300, -1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 0, 2900, 1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, 0, 3000, -3900, 0, 0, 0, (1 << 24) | (6 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 0, 4300, 3500, 0, 0, 0, (1 << 24) | (6 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_NONE, -900, 4100, 0, 0, 90, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1400, 3000, 0, 0, 90, 0, (4 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 1300, 1600, 0, 0, 0, (4 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -250, 1600, -3100, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 250, 3400, -3100, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 250, 3200, 2400, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -250, 2300, -3300, -10, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -250, 3100, 2900, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2450, 2700, 0, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 4600, -2900, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 5100, -3140, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 5600, -2890, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -250, 4500, 5390, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -450, 5500, 5390, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 2650, -3900, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 250, 1400, 3100, 0, -180, 0, (10 << 16), bhvAirborneDeathWarp),
		OBJECT(MODEL_STAR, 5450, 4300, 0, 0, 0, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_STAR, -150, 6070, 5700, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, 0, 3250, -5900, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, 0, 6252, -2900, 0, -45, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_STAR, -1600, 5800, -300, 0, 0, 0, (4 << 24), bhvStar),
		OBJECT(MODEL_NONE, -250, 1500, 3000, 0, 0, 0, (5 << 24), bhvHiddenRedCoinStar),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_WATER),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
