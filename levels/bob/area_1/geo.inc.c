#include "src/game/envfx_snow.h"

const GeoLayout bob_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -6700, 2180, -700, bob_dl_InstantWarp_mesh_layer_5),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -6700, 2200, 2700),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -6700, 2200, 100),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1700, 1600, 3600, bob_dl_Base_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3200, 1700, 6400, bob_dl_Cube2_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1400, 1700, 6400, bob_dl_Cube2_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1900, 1750, 6400, bob_dl_Cube3_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 300, 1750, 6400, bob_dl_Cube3_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1800, 4600, bob_dl_Cube4_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1800, 5100, bob_dl_Cube4_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1800, 4100, bob_dl_Cube4_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1800, 2600, bob_dl_Cube4_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1800, 3100, bob_dl_Cube4_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1800, 2100, bob_dl_Cube4_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1850, 3600, bob_dl_Cube5_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 200, 1900, 5500, bob_dl_Cube6_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3600, 1900, 1700, bob_dl_Cube6_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, -2400, 0, bob_dl_Plane_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6400, 1800, 6400, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6100, 1800, 5800, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6100, 1600, 5100, bob_dl_PlatformLg_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 1800, 5800, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6100, 1200, 1200, bob_dl_PlatformLg_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1720, 6400, bob_dl_PlatformLg_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1100, 1720, 800, bob_dl_PlatformLg_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1100, 1720, 6400, bob_dl_PlatformLg_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4500, 1720, 800, bob_dl_PlatformLg_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3400, 1610, 5300, 0, 45, 0, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2900, 1610, 4800, 0, 45, 0, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1700, 1600, 3600, 0, -45, 0, bob_dl_PlatformLg_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2500, 1610, 4400, 0, 45, 0, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2000, 1910, -100, 0, 45, 0, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2000, 1610, 0, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3900, 1910, -700, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3300, 1910, -1100, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1700, 2010, -1700, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2000, 1610, -600, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1700, 1810, -2800, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2400, 2610, -2800, 0, 0, -90, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1200, 2810, -2000, 0, 20, -90, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1700, 3110, -2200, 0, 20, -90, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3200, 2110, 600, bob_dl_PlatformLg_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -600, 2700, -3300, 0, -70, 0, bob_dl_PlatformLgLong_010_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 1200, -3600, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 1200, -1700, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 1200, -4200, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6100, 1500, -400, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6700, 3000, 1700, 90, 0, 0, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 3200, 2500, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3083, 1600, 5279, 0, -50, 0, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6000, 2900, 4100, 0, 0, -90, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5100, 3000, 4000, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4500, 2600, 3600, 90, 0, 10, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4600, 2800, 4000, 90, 0, 0, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4800, 3000, 3600, 90, 0, -10, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 700, 3300, -3800, 0, 20, 0, bob_dl_PlatformMd_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6100, 1200, 3900, bob_dl_PlatformMdLong_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 2100, -700, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 1200, -700, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6100, 1200, 2300, bob_dl_PlatformMdLong_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1500, 2600, 6400, -20, 95, 0, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3000, 3000, 5700, 0, -50, 0, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 2100, 1900, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2317, 1600, 5921, 0, -50, 0, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4700, 2000, 4500, 0, -70, 0, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4200, 1800, 3700, 0, -35, 0, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6700, 2000, 4300, bob_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3750, 1640, 6400, bob_dl_PlatformSm_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -300, 1670, 6400, bob_dl_PlatformSm_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1000, 1680, 6400, bob_dl_PlatformSm_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -700, 1640, 6400, bob_dl_PlatformSm_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2800, 1640, 6400, bob_dl_PlatformSm_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -6700, 1400, -1200),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -6700, 2600, 700),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -6700, 2500, 3200),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -1700, 1800, 3600),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bob_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bob_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bob_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
