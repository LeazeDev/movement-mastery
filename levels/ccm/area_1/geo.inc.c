#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2800, 4750, -2800, ccm_dl_Cube2_013_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1500, 2700, -3950, 28, -17, -41, ccm_dl_Cube4_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2400, 2800, -5250, 28, -22, -41, ccm_dl_Cube4_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1850, 2900, -5550, 28, -2, -41, ccm_dl_Cube4_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1850, 2600, -2450, 28, -22, -41, ccm_dl_Cube4_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3200, 2800, -7663, 0, -5, -40, ccm_dl_Cube4_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2620, 2800, -7819, 0, 35, 40, ccm_dl_Cube4_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2394, 2800, -7490, 0, 35, 40, ccm_dl_Cube4_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1050, 2200, -3050, ccm_dl_Cube5_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1950, 2200, -4650, ccm_dl_Cube5_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2500, 2200, -6400, ccm_dl_Cube5_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1000, 1700, 1000, ccm_dl_Cube6_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1000, 1700, -1000, ccm_dl_Cube6_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1000, 2500, -1000, ccm_dl_Cube6_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, -2800, 0, ccm_dl_Plane_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2700, 2600, -2700, ccm_dl_PlatformLg_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 3550, 0, ccm_dl_PlatformLg_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 5750, 0, ccm_dl_PlatformLg_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1400, 2300, -1400, 0, 45, 0, ccm_dl_PlatformLg_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1800, 2300, -1800, 0, 45, 0, ccm_dl_PlatformLg_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1300, 3200, 1300, 90, 0, -45, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 800, 3370, 800, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2100, 4400, 2100, -45, 45, 0, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 600, 4100, 600, 90, 0, -45, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1100, 4340, 1100, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3200, 4400, 3200, 0, 90, 0, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1000, 2800, -1600, 90, 0, 0, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -700, 3000, -1000, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -400, 3200, -700, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 4300, 0, 90, 0, -45, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -400, 4600, -400, 45, -45, -90, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 400, 4600, 400, 45, -45, -90, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 800, 5500, 800, 45, -45, -90, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -800, 5500, -800, 45, -45, -90, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2400, 4350, -2400, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2000, 4850, -2000, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1650, 4850, -1650, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1250, 5350, -1250, 90, 0, 45, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 850, 5450, -850, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1650, 5750, -1650, 90, 0, 45, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1250, 6150, -1250, 90, 0, 45, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2300, 6150, -2300, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 700, 2600, 700, 90, 0, -45, ccm_dl_PlatformMd_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 2260, 0, ccm_dl_PlatformMdLong_001_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 0, 3600, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
