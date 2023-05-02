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
		OBJECT(MODEL_BLUE_COIN, -1400, 3200, 1200, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1400, 3900, -1400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -200, 3300, -1400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 300, 2900, -1400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1400, 2900, -1400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1400, 3800, -1400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1400, 3800, 800, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1500, 2200, 1500, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1400, 3200, -100, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 4900, -2600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 4700, -2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 5000, -2900, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -1700, 3800, -1700, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_RED_COIN, 1400, 1200, -1400, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 100, 2200, -1500, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 300, 3300, -1400, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1400, 2550, -1400, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 850, 2600, -1400, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1400, 2700, -400, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1400, 2200, 100, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 850, 1800, -1350, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, 0, 4350, -3050, 0, 0, 0, (1 << 24) | (5 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -2500, 4700, 0, 0, 0, 0, (1 << 24) | (5 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -2500, 5050, 0, 0, 0, 0, (1 << 24) | (5 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -2500, 5400, 0, 0, 0, 0, (1 << 24) | (6 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -200, 3550, -1400, 0, 0, 0, (1 << 24) | (6 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -1100, 1600, -1400, 0, 0, 0, (1 << 24) | (5 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -1400, 2990, -800, 0, 0, 0, (1 << 24) | (5 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -2500, 4350, 0, 0, 0, 0, (1 << 24) | (4 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -500, 1500, -1400, 0, 0, 0, (1 << 24) | (6 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -1400, 3850, 1400, 0, 0, 0, (1 << 24) | (6 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_NONE, -1400, 1150, -200, 0, 0, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 3900, -2200, 0, 0, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4100, 3850, 0, 0, 90, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4100, 5600, 0, 0, 90, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 5000, -3100, 0, 0, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1400, 3550, 900, 0, 0, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1400, 3150, 600, 0, 0, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 4300, -3700, 0, 0, 0, (0 << 24) | (1 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1100, 1000, -1200, 0, 45, 0, (10 << 16), bhvAirborneDeathWarp),
		OBJECT(MODEL_STAR, 6150, 3700, -1400, 0, 0, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_STAR, 0, 6600, -3150, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, -2300, 5930, 0, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, -2450, 2850, 2300, 0, -45, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_STAR, -1400, 3700, 5500, 0, 0, 0, (4 << 24), bhvStar),
		OBJECT(MODEL_NONE, -1400, 3950, -1400, 0, 0, 0, (5 << 24), bhvHiddenRedCoinStar),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_PIRANHA_PLANT),
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
