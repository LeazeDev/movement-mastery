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
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_HMC, 0x01, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN, 4300, 2600, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1400, 1800, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 450, 2110, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3900, 2750, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 4500, 2550, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1400, 3500, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1690, 3500, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1110, 3500, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 4100, 2700, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 820, 3500, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1980, 3500, 2400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 4600, 2450, 2400, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_NONE, 3900, 5050, -2000, 25, 45, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3100, 4400, 450, 5, -40, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1200, 1330, 2400, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6300, 3230, 2350, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 800, 4220, -100, -90, 0, 0, (3 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1800, 5520, 200, -90, 0, 0, (3 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1600, 4220, -2600, -90, 0, 0, (3 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 400, 4920, -4100, -90, 0, 0, (3 << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -6300, 2475, 4050, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_RED_COIN, 1400, 3600, 2400, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4900, 2550, 2400, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1400, 1800, 2400, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -500, 3880, 1050, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -550, 4150, 0, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1000, 5300, -2300, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1800, 5600, 0, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1400, 5040, -1500, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -2300, 2300, 2400, 0, 90, 0, (10 << 16), bhvAirborneDeathWarp),
		OBJECT(MODEL_STAR, -2300, 3500, 3950, 0, 0, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_STAR, 1800, 2550, -3600, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, 6300, 4150, 2400, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, 3100, 3850, -6200, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_STAR, 1600, 8200, -2500, 0, 0, 0, (4 << 24), bhvStar),
		OBJECT(MODEL_NONE, 1800, 7000, 4750, 0, 0, 0, (5 << 24), bhvHiddenRedCoinStar),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x01, SEQ_LEVEL_UNDERGROUND),
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
