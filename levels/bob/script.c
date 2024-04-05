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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN, -1100, 6750, 200, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1500, 6550, 800, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -900, 6650, 900, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -300, 6650, 1300, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -150, 6550, 150, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -150, 6550, 150, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -150, 6550, 150, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -150, 6550, 150, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -150, 6450, 150, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_RED_COIN, -1000, 2750, 0, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 0, 3400, 1000, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1850, 3750, 750, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1400, 4350, -850, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 920, 5050, -900, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 960, 6150, 1140, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 0, 6150, 800, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -800, 6150, 0, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, 2800, 3850, 0, 0, -90, 0, (1 << 24) | (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 0, 6400, 800, 0, -90, 0, (1 << 24) | (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -800, 6400, 0, 0, -90, 0, (1 << 24) | (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, 950, 5000, 1600, 0, 0, 0, (0 << 24) | (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 350, 5110, 1600, 0, 0, 0, (0 << 24) | (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1000, 3300, 0, 0, 0, 0, (0 << 24) | (1 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 3100, -1000, 0, 0, 0, (0 << 24) | (1 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1100, 5000, -1050, 0, 0, 0, (0 << 24) | (1 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1300, 2400, -1300, 0, 0, 0, (0 << 24) | (1 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 900, 2800, -900, 0, 0, 0, (0 << 24) | (1 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1800, 3900, -100, 0, 0, 0, (0 << 24) | (1 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 150, 6500, -150, 0, 0, 0, (0 << 24) | (1 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -200, 4600, 0, -90, -90, 0, (0 << 24) | (3 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -200, 3000, 0, -90, -90, 0, (0 << 24) | (3 << 16) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2000, 2900, 2000, 0, 135, 0, (10 << 16), bhvAirborneDeathWarp),
		OBJECT(MODEL_STAR, -100, 5600, 1000, 0, 0, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_STAR, 1800, 5200, 0, 0, -45, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, 0, 4700, 0, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, -1520, 6900, 1620, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_STAR, -1290, 5730, -900, 0, 0, 0, (4 << 24), bhvStar),
		OBJECT(MODEL_NONE, 0, 6800, 0, 0, 0, 0, (5 << 24), bhvHiddenRedCoinStar),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x24, SEQ_SEINFELD_THEME),
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
