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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN, 0, 400, 400, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 850, -1100, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 400, 1300, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 400, 1300, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 400, 1300, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 1300, -300, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 1300, 0, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 850, -2600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 0, 250, 1350, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_RED_COIN, -1000, 1550, -3700, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2400, 1700, -4000, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2000, 1850, -5800, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4200, 2650, -6400, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1250, 2600, -5450, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3350, 2600, -3550, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3900, 1300, -5900, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3950, 1400, -4050, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_BLACK_BOBOMB, 910, 650, 640, 0, -90, 0, (10 << 16), bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 910, 650, 140, 0, -90, 0, (10 << 16), bhvBobomb),
		OBJECT(MODEL_NONE, 0, 1300, -3500, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 1700, -5700, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2200, 3200, -900, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2200, 3900, -900, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_EXCLAMATION_BOX, 2600, 2150, -5100, 0, 0, 0, (1 << 24) | (6 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 0, 950, 2900, 0, 0, 0, (1 << 24) | (5 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 200, 3050, -3400, 0, 0, 0, (1 << 24) | (6 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 0, 550, 2900, 0, 0, 0, (1 << 24) | (5 << 16) | (0 << 8) | (0), bhvExclamationBox),
		OBJECT(MODEL_NONE, -1900, 1300, -4000, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 200, 2750, -3400, 0, 0, 0, (0 << 24) | (2 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3100, 1700, -4500, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 900, 1200, 0, -180, 0, (10 << 16), bhvAirborneDeathWarp),
		OBJECT(MODEL_STAR, 4120, 420, 400, 0, 0, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_STAR, 4150, 690, -1800, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, 2200, 4550, -900, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, 700, 2400, -5780, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_STAR, -6800, 2000, -4100, 0, 0, 0, (4 << 24), bhvStar),
		OBJECT(MODEL_NONE, -1100, 3100, -3700, 0, 0, 0, (5 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_WHOMP, 2210, 2600, -2060, 0, -180, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, -2310, 700, -727, 0, -180, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, -12, 210, 3100, 0, -180, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, -2310, 700, -1073, 0, 0, 0, 0x00000000, bhvSmallWhomp),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
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
