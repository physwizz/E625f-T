/*
 * Samsung Exynos SoC series FIMC-IS2 driver
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_HW_CHAIN_V7_0_H
#define FIMC_IS_HW_CHAIN_V7_0_H

#include "fimc-is-hw-api-common.h"
#include "fimc-is-groupmgr.h"
#include "fimc-is-config.h"

enum sysreg_isppre_reg_name {
	SYSREG_R_ISPPRE_USER_CON,
	SYSREG_R_ISPPRE_SC_CON0,
	SYSREG_R_ISPPRE_SC_CON1,
	SYSREG_R_ISPPRE_SC_CON2,
	SYSREG_R_ISPPRE_SC_CON3,
	SYSREG_R_ISPPRE_SC_CON4,
	SYSREG_R_ISPPRE_SC_CON5,
	SYSREG_R_ISPPRE_SC_CON6,
	SYSREG_R_ISPPRE_SC_CON7,
	SYSREG_R_ISPPRE_SC_CON8,
	SYSREG_R_ISPPRE_SC_CON9,
	SYSREG_R_ISPPRE_SC_CON10,
	SYSREG_R_ISPPRE_SC_CON11,
	SYSREG_R_ISPPRE_SC_CON12,
	SYSREG_R_ISPPRE_SC_CON13,
	SYSREG_R_ISPPRE_SC_CON14,
	SYSREG_R_ISPPRE_SC_CON15,
	SYSREG_R_ISPPRE_SC_CON16,
	SYSREG_R_ISPPRE_SC_PDP_IN_EN,
	SYSREG_R_ISPPRE_SC_CON17,
	SYSREG_ISPPRE_REG_CNT
};

enum sysreg_isplp_reg_name {
	SYSREG_R_ISPLP_USER_CON,
	SYSREG_R_ISPLP_USER_CON2,
	SYSREG_ISPLP_REG_CNT
};

enum sysreg_isphq_reg_name {
	SYSREG_R_ISPHQ_USER_CON,
	SYSREG_ISPHQ_REG_CNT
};

enum sysreg_isppre_reg_field {
	SYSREG_F_ENABLE_OTF_IN_DSPMISPPRE,
	SYSREG_F_ENABLE_OTF_OUT_ISPPREDSPM,
	SYSREG_F_ENABLE_OTF_OUT_ISPPREISPHQ,
	SYSREG_F_ENABLE_OTF_OUT_ISPPREISPLP,
	SYSREG_F_SW_RESETN_LHM_AST_GLUE_DSPMISPPRE,
	SYSREG_F_SW_RESETN_LHS_AST_GLUE_ISPPREDSPM,
	SYSREG_F_SW_RESETN_LHS_ATB_GLUE_ISPPREISPHQ,
	SYSREG_F_SW_RESETN_LHS_ATB_GLUE_ISPPREISPLP,
	SYSREG_F_TYPE_LHM_AST_GLUE_DSPMISPPRE,
	SYSREG_F_TYPE_LHS_AST_GLUE_ISPPREDSPM,
	SYSREG_F_TYPE_LHS_ATB_GLUE_ISPPREISPHQ,
	SYSREG_F_TYPE_LHS_ATB_GLUE_ISPPREISPLP,
	SYSREG_F_GLUEMUX_PDP0_VAL,
	SYSREG_F_GLUEMUX_PDP1_VAL,
	SYSREG_F_GLUEMUX_CSISX4_PDP_DMA0_OTF_SEL,
	SYSREG_F_GLUEMUX_CSISX4_PDP_DMA1_OTF_SEL,
	SYSREG_F_GLUEMUX_CSISX4_PDP_DMA2_OTF_SEL,
	SYSREG_F_GLUEMUX_CSISX4_PDP_DMA3_OTF_SEL,
	SYSREG_F_GLUEMUX_PDP_TOP_DMA0_OTF_SEL,
	SYSREG_F_GLUEMUX_PDP_TOP_DMA1_OTF_SEL,
	SYSREG_F_GLUEMUX_PDP_TOP_DMA2_OTF_SEL,
	SYSREG_F_GLUEMUX_PDP_TOP_DMA3_OTF_SEL,
	SYSREG_F_GLUEMUX_SCORE_VAL,
	SYSREG_F_GLUEMUX_PDP1_STALL_VAL,
	SYSREG_F_GLUEMUX_PDP0_STALL_VAL,
	SYSREG_F_GLUEMUX_3AA1_VAL,
	SYSREG_F_GLUEMUX_3AA0_VAL,
	SYSREG_F_GLUEMUX_ISPHQ_VAL,
	SYSREG_F_GLUEMUX_ISPLP_VAL,
	SYSREG_F_PDP_CORE1_IN_CSIS3_EN,
	SYSREG_F_PDP_CORE1_IN_CSIS2_EN,
	SYSREG_F_PDP_CORE1_IN_CSIS1_EN,
	SYSREG_F_PDP_CORE1_IN_CSIS0_EN,
	SYSREG_F_PDP_CORE0_IN_CSIS3_EN,
	SYSREG_F_PDP_CORE0_IN_CSIS2_EN,
	SYSREG_F_PDP_CORE0_IN_CSIS1_EN,
	SYSREG_F_PDP_CORE0_IN_CSIS0_EN,
	SYSREG_F_GLUEMUX_PAFSTAT_SEL,
	SYSREG_ISPPRE_REG_FIELD_CNT
};

enum sysreg_isplp_reg_field {
	SYSREG_F_GLUEMUX_MC_SCALER_SC1_VAL,
	SYSREG_F_GLUEMUX_MC_SCALER_SC0_VAL,
	SYSREG_F_AWCACHE_ISPLP1,
	SYSREG_F_ARCACHE_ISPLP1,
	SYSREG_F_AWCACHE_ISPLP0,
	SYSREG_F_ARCACHE_ISPLP0,
	SYSREG_F_ENABLE_OTF_IN_DSPMISPLP,
	SYSREG_F_ENABLE_OTF_IN_ISPPREISPLP,
	SYSREG_F_ENABLE_OTF_IN_ISPHQISPLP,
	SYSREG_F_ENABLE_OTF_IN_CIPISPLP,
	SYSREG_F_ENABLE_OTF_OUT_ISPLPDSPM,
	SYSREG_F_SW_RESETN_LHM_AST_GLUE_DSPMISPLP,
	SYSREG_F_SW_RESETN_LHS_AST_GLUE_ISPLPDSPM,
	SYSREG_F_SW_RESETN_LHM_ATB_GLUE_ISPPREISPLP,
	SYSREG_F_SW_RESETN_LHM_ATB_GLUE_ISPHQISPLP,
	SYSREG_F_SW_RESETN_LHM_ATB_GLUE_CIPISPLP,
	SYSREG_F_TYPE_LHM_AST_GLUE_DSPMISPLP,
	SYSREG_F_TYPE_LHS_AST_GLUE_ISPLPDSPM,
	SYSREG_F_TYPE_LHM_ATB_GLUE_ISPPREISPLP,
	SYSREG_F_TYPE_LHM_ATB_GLUE_ISPHQISPLP,
	SYSREG_F_TYPE_LHM_ATB_GLUE_CIPISPLP,
	SYSREG_F_C2COM_SW_RESET,
	SYSREG_ISPLP_REG_FIELD_CNT
};

enum sysreg_isphq_reg_field {
	SYSREG_F_ENABLE_OTF_IN_ISPPREISPHQ,
	SYSREG_F_ENABLE_OTF_OUT_ISPHQDSPM,
	SYSREG_F_ENABLE_OTF_OUT_ISPHQISPLP,
	SYSREG_F_SW_RESETN_LHS_AST_GLUE_ISPHQDSPM,
	SYSREG_F_SW_RESETN_LHS_ATB_GLUE_ISPHQISPLP,
	SYSREG_F_SW_RESETN_LHM_ATB_GLUE_ISPPREISPHQ,
	SYSREG_F_TYPE_LHS_AST_GLUE_ISPHQDSPM,
	SYSREG_F_TYPE_LHS_ATB_GLUE_ISPHQISPLP,
	SYSREG_F_TYPE_LHM_ATB_GLUE_ISPPREISPHQ,
	SYSREG_F_ISPHQ_SW_RESETN_C2COM,
	SYSREG_F_AWCACHE_ISPHQ,
	SYSREG_F_ARCACHE_ISPHQ,
	SYSREG_ISPHQ_REG_FIELD_CNT
};

#define GROUP_HW_MAX	(GROUP_SLOT_MAX)

#define IORESOURCE_CSIS_DMA	0
#define IORESOURCE_3AA0		1
#define IORESOURCE_3AA1		2
#define IORESOURCE_ISPLP	3
#define IORESOURCE_ISPHQ	4
#define IORESOURCE_MCSC		5
#define IORESOURCE_VRA		6
#define IORESOURCE_STAT_DMA	7
#define IORESOURCE_PAF_CORE	8
#define IORESOURCE_PAF_RDMA	9
#define IORESOURCE_3AA2		10	/* VPP */

/* FIXME */
#define PAF_CONTEXT0_OFFSET	(0x00000000)
#define PAF_CONTEXT1_OFFSET	(0x00004000)
#define PAF_RDMA0_OFFSET	(0x00000000)
#define PAF_RDMA1_OFFSET	(0x00004000)

#if defined(CONFIG_CAMERA_DNS_V01) || defined(CONFIG_CAMERA_DNS_V02)
/* RTA HEAP: 18MB */
#define FIMC_IS_RESERVE_LIB_SIZE	(0x01200000)
#elif defined(CONFIG_CAMERA_FMU_V62)
/* RTA HEAP: 12MB */
#define FIMC_IS_RESERVE_LIB_SIZE	(0x00C00000)
#else
/* RTA HEAP: 6MB */
#define FIMC_IS_RESERVE_LIB_SIZE	(0x00600000)
#endif
/* DDK DMA: 4.0625MB */
#define FIMC_IS_TAAISP_SIZE		(0x00410000)
/* ME/DRC DMA: 2.5MB */
#define TAAISP_MEDRC_SIZE		(0x00280000)
/* VRA: 8MB */
#define FIMC_IS_VRA_SIZE		(0x00800000)
/* DDK HEAP: 62MB */
#define FIMC_IS_HEAP_SIZE		(0x03E00000)

#define SYSREG_ISPPRE_BASE_ADDR		(0x17020000)
#define SYSREG_ISPLP_BASE_ADDR		(0x17420000)
#define SYSREG_ISPHQ_BASE_ADDR		(0x17720000)

#define HWFC_INDEX_RESET_ADDR		(0x17441050)

#define CSIS0_QCH_EN_ADDR		(0x17030004)
#define CSIS1_QCH_EN_ADDR		(0x17040004)
#define CSIS2_QCH_EN_ADDR		(0x17050004)
#define CSIS3_QCH_EN_ADDR		(0x17060004)
#define CSIS3_1_QCH_EN_ADDR		(0x17090004)

enum taaisp_chain_id {
	ID_3AA_0 = 0,
	ID_3AA_1 = 1,
	ID_ISP_0 = 2,
	ID_ISP_1 = 3,
	ID_TPU_0 = 4,
	ID_TPU_1 = 5,
	ID_DCP	 = 6,
	ID_VPP	 = 7,	/* ID_3AA_2 */
	ID_3AAISP_MAX
};

/* the number of interrupt source at each IP */
enum hwip_interrupt_map {
	INTR_HWIP1 = 0,
	INTR_HWIP2 = 1,
	INTR_HWIP_MAX
};

/* Specific interrupt map belonged to each IP */

/* MC-Scaler */
#define USE_DMA_BUFFER_INDEX		(0) /* 0 ~ 7 */
#define MCSC_PRECISION			(20)
#define MCSC_POLY_RATIO_UP		(14)
#define MCSC_POLY_QUALITY_RATIO_DOWN	(4)
#define MCSC_POLY_RATIO_DOWN		(16)
#define MCSC_POLY_MAX_RATIO_DOWN	(256)
#define MCSC_POST_RATIO_DOWN		(16)
#define MCSC_POST_MAX_WIDTH		(1440)
/* #define MCSC_POST_WA */
/* #define MCSC_POST_WA_SHIFT	(8)*/	/* 256 = 2^8 */
#define MCSC_OUTPUT_SSB		(0xF)	/* This number has no special meaning. */
#define MCSC_USE_DEJAG_TUNING_PARAM	(true)
#define MCSC_COEF_USE_TUNING		(true)
/* #define MCSC_DNR_USE_TUNING		(true) */	/* DNR and DJAG TUNING PARAM are used exclusively. */
#ifdef CONFIG_SOC_EXYNOS9820_EVT0
#undef USE_UVSP_CAC
#else
#define USE_UVSP_CAC
#endif
#define MCSC_SETFILE_VERSION		(0x14027433)
#define MCSC_CAC_IN_VIDEO_MODE		(DEV_HW_MCSC1)
#define MCSC_CAC_IN_CAPTURE_MODE	(DEV_HW_MCSC1)
#define MCSC_DJAG_ENABLE_SENSOR_BRATIO	(2000)
#define MCSC_LINE_BUF_SIZE		(5760)

enum mc_scaler_interrupt_map {
	INTR_MC_SCALER_FRAME_END		= 0,
	INTR_MC_SCALER_FRAME_START		= 1,
	INTR_MC_SCALER_WDMA_FINISH		= 2,
	INTR_MC_SCALER_CORE_FINISH		= 3,
	INTR_MC_SCALER_INPUT_HORIZONTAL_OVF	= 7,
	INTR_MC_SCALER_INPUT_HORIZONTAL_UNF	= 8,
	INTR_MC_SCALER_INPUT_VERTICAL_OVF	= 9,
	INTR_MC_SCALER_INPUT_VERTICAL_UNF	= 10,
	INTR_MC_SCALER_OVERFLOW			= 11,
	INTR_MC_SCALER_OUTSTALL			= 12,	/* INPUT_FRAME_CRUSH */
	INTR_MC_SCALER_SHADOW_COPY_FINISH	= 16,
	INTR_MC_SCALER_SHADOW_COPY_FINISH_OVF	= 17,
	INTR_MC_SCALER_FM_SUB_FRAME_FINISH	= 20,
	INTR_MC_SCALER_FM_SUB_FRAME_START	= 21,
	INTR_MC_SCALER_STALL_TIMEOUT		= 24,
};
#define MCSC_INTR_MASK		((1 << INTR_MC_SCALER_WDMA_FINISH) \
				| (1 << INTR_MC_SCALER_CORE_FINISH) \
				| (1 << INTR_MC_SCALER_FM_SUB_FRAME_START) \
				| (1 << INTR_MC_SCALER_FM_SUB_FRAME_FINISH))

/* VRA */
#define VRA_CH1_INTR_CNT_PER_FRAME	(6)

#if 1 /* Deprecated register. These are maintained for backward compatibility */
enum vra_chain0_interrupt_map {
	CH0INT_CIN_FR_ST			= 0,
	CH0INT_CIN_FR_END			= 1,
	CH0INT_CIN_LINE_ST			= 2,
	CH0INT_CIN_LINE_END			= 3,
	CH0INT_CIN_SP_LINE			= 4,
	CH0INT_CIN_ERR_SIZES			= 5,
	CH0INT_CIN_ERR_YUV_FORMAT		= 6,
	CH0INT_CIN_FR_ST_NO_ACTIVE		= 7,
	CH0INT_DMA_IN_ERROR			= 8,
	CH0INT_DMA_IN_FLUSH_DONE		= 9,
	CH0INT_DMA_IN_FR_END			= 10,
	CH0INT_DMA_IN_INFO			= 11,
	CH0INT_OUT_DMA_ERROR			= 12,
	CH0INT_OUT_DMA_FLUSH_DONE		= 13,
	CH0INT_OUT_DMA_FR_END			= 14,
	CH0INT_OUT_DMA_INFO			= 15,
	CH0INT_RWS_TRIGGER			= 16,
	CH0INT_END_FRAME			= 17,
	CH0INT_END_ISP_DMA_OUT			= 18,
	CH0INT_END_ISP_INPUT			= 19,
	CH0INT_FRAME_SIZE_ERROR			= 20,
	CH0INT_ERR_FR_ST_BEF_FR_END		= 21,
	CH0INT_ERR_FR_ST_WHILE_FLUSH		= 22,
	CH0INT_ERR_VRHR_INTERVAL_VIOLATION	= 23,
	CH0INT_ERR_HFHR_INTERVAL_VIOLATION	= 24,
	CH0INT_ERR_PYRAMID_OVERFLOW		= 25
};
#endif

enum vra_chain1_interrupt_map {
	CH1INT_IN_CONT_SP_LINE		= 0,
	CH1INT_IN_STOP_IMMED_DONE	= 1,
	CH1INT_IN_END_OF_CONTEXT	= 2,
	CH1INT_IN_START_OF_CONTEXT	= 3,
	CH1INT_END_LOAD_FEATURES	= 4,
	CH1INT_SHADOW_TRIGGER		= 5,
	CH1INT_OUT_OVERFLOW		= 6,
	CH1INT_MAX_NUM_RESULTS		= 7,

	CH1INT_IN_ERROR			= 8,
	CH1INT_IN_FLUSH_DONE		= 9,
	CH1INT_IN_FR_END		= 10,
	CH1INT_IN_INFO			= 11,

	CH1INT_OUT_ERROR		= 12,
	CH1INT_OUT_FLUSH_DONE		= 13,
	CH1INT_OUT_FR_END		= 14,
	CH1INT_OUT_INFO			= 15,
	CH1INT_WATCHDOG			= 16
};

#define ALIGN_UPDOWN_STRIPE_WIDTH(w, align) \
	(w & align >> 1 ? ALIGN(w, align) : ALIGN_DOWN(w, align))
#endif
