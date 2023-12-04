#ifndef FIMC_IS_EEPROM_FRONT_3H1_V003_H
#define FIMC_IS_EEPROM_FRONT_3H1_V003_H

/* Header referenced section */
#define ROM_HEADER_VERSION_START_ADDR_FRONT			0x30
#define ROM_HEADER_VERSION_START_ADDR_FRONT2 		0x40
#define ROM_HEADER_CAL_MAP_VER_START_ADDR_FRONT		0x50
#define ROM_HEADER_START_ADDR_FRONT					0x8
#define ROM_HEADER_END_ADDR_FRONT					0xC
#define ROM_HEADER_START_ADDR_FRONT2 				0x10
#define ROM_HEADER_END_ADDR_FRONT2 					0x14

#define ROM_HEADER_PROJECT_NAME_START_ADDR_FRONT	0x5C
#define ROM_HEADER_SENSOR_ID_ADDR_FRONT				0x70
#define ROM_HEADER_SENSOR_ID_ADDR_FRONT2			0x80

#define ROM_HEADER_MTF_DATA_ADDR_FRONT				0xC0
#define ROM_HEADER_MTF_DATA_ADDR_FRONT2				0xF6

#define ROM_HEADER_MODULE_ID_ADDR_FRONT				(0xA8 + 6)  /* 0xA8 + reserved bytes*/

/* CAM1 referenced section */
#define ROM_VER_START_ADDR_FRONT					0x34E0

/* CAM2 referenced section */
#define ROM_VER_START_ADDR_FRONT2					0x57E0

/* CAM1 PAF info addr */
#define ROM_PAF_CAL_DATA_START_ADDR_FRONT			0x200
#define ROM_PAF_CAL_ERR_CHECK_OFFSET				0x14
#define ROM_CAL_PAF_ERROR_CHECK_CODE_ADDR_FRONT		0x214

/* CAM1 AF INFO */
#define ROM_AF_CAL_PAN_ADDR_FRONT				0x1A14
#define ROM_AF_CAL_MACRO_ADDR_FRONT				0x1A20

/* CAM2 AF INFO */
#define ROM_AF_CAL_PAN_ADDR_FRONT2				0x3504
#define ROM_AF_CAL_MACRO_ADDR_FRONT2			0x3510

/* Checksum referenced section */
#define ROM_CHECKSUM_HEADER_ADDR_FRONT			0x1FC
#define ROM_CHECKSUM_ADDR_FRONT					0x34FC
#define ROM_CHECKSUM_ADDR_FRONT2				0x57FC

/* etc section */
#define FIMC_IS_MAX_CAL_SIZE_FRONT				(32 * 1024)
#define HEADER_CRC32_LEN_FRONT					(0x140)

#endif /* FIMC_IS_EEPROM_FRONT_3H1_V003_H */
