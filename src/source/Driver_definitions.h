#pragma once
#define DRV_CNT 3

constexpr uint8_t TMC_READ 						= 0x00;
constexpr uint8_t TMC_WRITE 					= 0x80;

// Register memory positions			TMC5130		TMC2660	
constexpr uint8_t	REG_GCONF	[DRV_CNT]={	0x00	,	0	};
constexpr uint8_t	REG_GSTAT	[DRV_CNT]={	0x01	,	0	};
constexpr uint8_t	REG_IFCNT	[DRV_CNT]={	0x02	,	0	};
constexpr uint8_t	REG_SLAVECONF	[DRV_CNT]={	0x03	,	0	};
constexpr uint8_t	REG_IOIN	[DRV_CNT]={	0x04	,	0	};
constexpr uint8_t	REG_OUTPUT	[DRV_CNT]={	0x04	,	0	};
constexpr uint8_t	REG_X_COMPARE	[DRV_CNT]={	0x05	,	0	};
constexpr uint8_t	REG_IHOLD_IRUN	[DRV_CNT]={	0x10	,	0	};
constexpr uint8_t	REG_TPOWERDOWN	[DRV_CNT]={	0x11	,	0	};
constexpr uint8_t	REG_TSTEP	[DRV_CNT]={	0x12	,	0	};
constexpr uint8_t	REG_TPWMTHRS	[DRV_CNT]={	0x13	,	0	};
constexpr uint8_t	REG_TCOOLTHRS	[DRV_CNT]={	0x14	,	0	};
constexpr uint8_t	REG_THIGH	[DRV_CNT]={	0x15	,	0	};
constexpr uint8_t	REG_RAMPMODE	[DRV_CNT]={	0x20	,	0	};
constexpr uint8_t	REG_XACTUAL	[DRV_CNT]={	0x21	,	0	};
constexpr uint8_t	REG_VACTUAL	[DRV_CNT]={	0x22	,	0	};
constexpr uint8_t	REG_VSTART	[DRV_CNT]={	0x23	,	0	};
constexpr uint8_t	REG_A1	[DRV_CNT]={	0x24	,	0	};
constexpr uint8_t	REG_V1	[DRV_CNT]={	0x25	,	0	};
constexpr uint8_t	REG_AMAX	[DRV_CNT]={	0x26	,	0	};
constexpr uint8_t	REG_VMAX	[DRV_CNT]={	0x27	,	0	};
constexpr uint8_t	REG_DMAX	[DRV_CNT]={	0x28	,	0	};
constexpr uint8_t	REG_D1	[DRV_CNT]={	0x2A	,	0	};
constexpr uint8_t	REG_VSTOP	[DRV_CNT]={	0x2B	,	0	};
constexpr uint8_t	REG_TZEROWAIT	[DRV_CNT]={	0x2C	,	0	};
constexpr uint8_t	REG_XTARGET	[DRV_CNT]={	0x2D	,	0	};
constexpr uint8_t	REG_VDCMIN	[DRV_CNT]={	0x33	,	0	};
constexpr uint8_t	REG_SW_MODE	[DRV_CNT]={	0x34	,	0	};
constexpr uint8_t	REG_RAMP_STAT	[DRV_CNT]={	0x35	,	0	};
constexpr uint8_t	REG_XLATCH	[DRV_CNT]={	0x36	,	0	};
constexpr uint8_t	REG_ENCMODE	[DRV_CNT]={	0x38	,	0	};
constexpr uint8_t	REG_X_ENC	[DRV_CNT]={	0x39	,	0	};
constexpr uint8_t	REG_ENC_CONST	[DRV_CNT]={	0x3A	,	0	};
constexpr uint8_t	REG_ENC_STATUS	[DRV_CNT]={	0x3B	,	0	};
constexpr uint8_t	REG_ENC_LATCH	[DRV_CNT]={	0x3C	,	0	};
constexpr uint8_t	REG_MSLUT0	[DRV_CNT]={	0x60	,	0	};
constexpr uint8_t	REG_MSLUT1	[DRV_CNT]={	0x61	,	0	};
constexpr uint8_t	REG_MSLUT2	[DRV_CNT]={	0x62	,	0	};
constexpr uint8_t	REG_MSLUT3	[DRV_CNT]={	0x63	,	0	};
constexpr uint8_t	REG_MSLUT4	[DRV_CNT]={	0x64	,	0	};
constexpr uint8_t	REG_MSLUT5	[DRV_CNT]={	0x65	,	0	};
constexpr uint8_t	REG_MSLUT6	[DRV_CNT]={	0x66	,	0	};
constexpr uint8_t	REG_MSLUT7	[DRV_CNT]={	0x67	,	0	};
constexpr uint8_t	REG_MSLUTSEL	[DRV_CNT]={	0x68	,	0	};
constexpr uint8_t	REG_MSLUTSTART	[DRV_CNT]={	0x69	,	0	};
constexpr uint8_t	REG_MSCNT	[DRV_CNT]={	0x6A	,	0	};
constexpr uint8_t	REG_MSCURACT	[DRV_CNT]={	0x6B	,	0	};
constexpr uint8_t	REG_CHOPCONF	[DRV_CNT]={	0x6C	,	 0b100	};
constexpr uint8_t	REG_COOLCONF	[DRV_CNT]={	0x6D	,	0	};
constexpr uint8_t	REG_DCCTRL	[DRV_CNT]={	0x6E	,	0	};
constexpr uint8_t	REG_DRV_STATUS	[DRV_CNT]={	0x6F	,	0	};
constexpr uint8_t	REG_PWMCONF	[DRV_CNT]={	0x70	,	0	};
constexpr uint8_t	REG_PWM_SCALE	[DRV_CNT]={	0x71	,	0	};
constexpr uint8_t	REG_ENCM_CTRL	[DRV_CNT]={	0x72	,	0	};
constexpr uint8_t	REG_LOST_STEPS	[DRV_CNT]={	0x73	,	0	};
constexpr uint8_t	RESET_FLAG_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	DRIVER_ERROR_bp	[DRV_CNT]={	1	,	0	};
constexpr uint8_t	SG2_bp	[DRV_CNT]={	2	,	0	};
constexpr uint8_t	STANDSTILL_bp	[DRV_CNT]={	3	,	0	};
constexpr uint32_t	RESET_FLAG_bm	[DRV_CNT]={	0x1UL	,	0	};
constexpr uint32_t	DRIVER_ERROR_bm	[DRV_CNT]={	0x2UL	,	0	};
constexpr uint32_t	SG2_bm	[DRV_CNT]={	0x4UL	,	0	};
constexpr uint32_t	STANDSTILL_bm	[DRV_CNT]={	0x8UL	,	0	};
// GCONF		[DRV_CNT]={				};
constexpr uint8_t	I_SCALE_ANALOG_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	INTERNAL_RSENSE_bp	[DRV_CNT]={	1	,	0	};
constexpr uint8_t	EN_PWM_MODE_bp	[DRV_CNT]={	2	,	0	};
constexpr uint8_t	ENC_COMMUTATION_bp	[DRV_CNT]={	3	,	0	};
constexpr uint8_t	SHAFT_bp	[DRV_CNT]={	4	,	0	};
constexpr uint8_t	DIAG0_ERROR_bp	[DRV_CNT]={	5	,	0	};
constexpr uint8_t	DIAG0_OTPW_bp	[DRV_CNT]={	6	,	0	};
constexpr uint8_t	DIAG0_STALL_bp	[DRV_CNT]={	7	,	0	};
constexpr uint8_t	DIAG0_STEP_bp	[DRV_CNT]={	7	,	0	};
constexpr uint8_t	DIAG1_STALL_bp	[DRV_CNT]={	8	,	0	};
constexpr uint8_t	DIAG1_DIR_bp	[DRV_CNT]={	8	,	0	};
constexpr uint8_t	DIAG1_INDEX_bp	[DRV_CNT]={	9	,	0	};
constexpr uint8_t	DIAG1_ONSTATE_bp	[DRV_CNT]={	10	,	0	};
constexpr uint8_t	DIAG1_STEPS_SKIPPED_bp	[DRV_CNT]={	11	,	0	};
constexpr uint8_t	DIAG0_INT_PUSHPULL_bp	[DRV_CNT]={	12	,	0	};
constexpr uint8_t	DIAG1_POSCOMP_PUSHPULL_bp	[DRV_CNT]={	13	,	0	};
constexpr uint8_t	SMALL_HYSTERISIS_bp	[DRV_CNT]={	14	,	0	};
constexpr uint8_t	STOP_ENABLE_bp	[DRV_CNT]={	15	,	0	};
constexpr uint8_t	DIRECT_MODE_bp	[DRV_CNT]={	16	,	0	};
constexpr uint32_t	GCONF_bm	[DRV_CNT]={	0x3FFFFUL	,	0	};
constexpr uint32_t	I_SCALE_ANALOG_bm	[DRV_CNT]={	0x1UL	,	0	};
constexpr uint32_t	INTERNAL_RSENSE_bm	[DRV_CNT]={	0x2UL	,	0	};
constexpr uint32_t	EN_PWM_MODE_bm	[DRV_CNT]={	0x4UL	,	0	};
constexpr uint32_t	ENC_COMMUTATION_bm	[DRV_CNT]={	0x8UL	,	0	};
constexpr uint32_t	SHAFT_bm	[DRV_CNT]={	0x10UL	,	0	};
constexpr uint32_t	DIAG0_ERROR_bm	[DRV_CNT]={	0x20UL	,	0	};
constexpr uint32_t	DIAG0_OTPW_bm	[DRV_CNT]={	0x40UL	,	0	};
constexpr uint32_t	DIAG0_STALL_bm	[DRV_CNT]={	0x80UL	,	0	};
constexpr uint32_t	DIAG0_STEP_bm	[DRV_CNT]={	0x80UL	,	0	};
constexpr uint32_t	DIAG1_STALL_bm	[DRV_CNT]={	0x100UL	,	0	};
constexpr uint32_t	DIAG1_DIR_bm	[DRV_CNT]={	0x100UL	,	0	};
constexpr uint32_t	DIAG1_INDEX_bm	[DRV_CNT]={	0x200UL	,	0	};
constexpr uint32_t	DIAG1_ONSTATE_bm	[DRV_CNT]={	0x400UL	,	0	};
constexpr uint32_t	DIAG1_STEPS_SKIPPED_bm	[DRV_CNT]={	0x800UL	,	0	};
constexpr uint32_t	DIAG0_INT_PUSHPULL_bm	[DRV_CNT]={	0x1000UL	,	0	};
constexpr uint32_t	DIAG1_POSCOMP_PUSHPULL_bm	[DRV_CNT]={	0x2000UL	,	0	};
constexpr uint32_t	SMALL_HYSTERISIS_bm	[DRV_CNT]={	0x4000UL	,	0	};
constexpr uint32_t	STOP_ENABLE_bm	[DRV_CNT]={	0x8000UL	,	0	};
constexpr uint32_t	DIRECT_MODE_bm	[DRV_CNT]={	0x10000UL	,	0	};
// GSTAT		[DRV_CNT]={				};
constexpr uint8_t	RESET_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	DRV_ERR_bp	[DRV_CNT]={	1	,	0	};
constexpr uint8_t	UV_CP_bp	[DRV_CNT]={	2	,	0	};
constexpr uint32_t	GSTAT_bm	[DRV_CNT]={	0x7UL	,	0	};
constexpr uint32_t	RESET_bm	[DRV_CNT]={	0b1UL	,	0	};
constexpr uint32_t	DRV_ERR_bm	[DRV_CNT]={	0b10UL	,	0	};
constexpr uint32_t	UV_CP_bm	[DRV_CNT]={	0b100UL	,	0	};
// IFCNT		[DRV_CNT]={				};
constexpr uint8_t	IFCNT_pb	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	IFCNT_bm	[DRV_CNT]={	0xFFUL	,	0	};
// SLAVECONF		[DRV_CNT]={				};
constexpr uint8_t	SLAVECONF_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	SLAVECONF_bm	[DRV_CNT]={	0xF00UL	,	0	};
constexpr uint8_t	SENDDELAY_bp	[DRV_CNT]={	8	,	0	};
constexpr uint32_t	SENDDELAY_bm	[DRV_CNT]={	0xF00UL	,	0	};
// IOIN		[DRV_CNT]={				};
constexpr uint8_t	REFL_STEP_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	REFR_DIR_bp	[DRV_CNT]={	1	,	0	};
constexpr uint8_t	ENCB_DCEN_CFG4_bp	[DRV_CNT]={	2	,	0	};
constexpr uint8_t	ENCA_DCIN_CFG5_bp	[DRV_CNT]={	3	,	0	};
constexpr uint8_t	DRV_ENN_CFG6_bp	[DRV_CNT]={	4	,	0	};
constexpr uint8_t	ENC_N_DCO_bp	[DRV_CNT]={	5	,	0	};
constexpr uint8_t	SD_MODE_bp	[DRV_CNT]={	6	,	0	};
constexpr uint8_t	SWCOMP_IN_bp	[DRV_CNT]={	7	,	0	};
constexpr uint8_t	VERSION_bp	[DRV_CNT]={	24	,	0	};
constexpr uint32_t	IOIN_bm	[DRV_CNT]={	0xFF00003FUL	,	0	};
constexpr uint32_t	REFL_STEP_bm	[DRV_CNT]={	0x1UL	,	0	};
constexpr uint32_t	REFR_DIR_bm	[DRV_CNT]={	0x2UL	,	0	};
constexpr uint32_t	ENCB_DCEN_CFG4_bm	[DRV_CNT]={	0x4UL	,	0	};
constexpr uint32_t	ENCA_DCIN_CFG5_bm	[DRV_CNT]={	0x8UL	,	0	};
constexpr uint32_t	DRV_ENN_CFG6_bm	[DRV_CNT]={	0x10UL	,	0	};
constexpr uint32_t	ENC_N_DCO_bm	[DRV_CNT]={	0x20UL	,	0	};
constexpr uint32_t	SD_MODE_bm	[DRV_CNT]={	0x40UL	,	0	};
constexpr uint32_t	SWCOMP_IN_bm	[DRV_CNT]={	0x80UL	,	0	};
constexpr uint32_t	VERSION_bm	[DRV_CNT]={	0xFF000000UL	,	0	};
// OUTPUT		[DRV_CNT]={				};
constexpr uint8_t	OUTPUT_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	OUTPUT_bm	[DRV_CNT]={	0x1UL	,	0	};
// X_COMPARE		[DRV_CNT]={				};
constexpr uint8_t	X_COMPARE_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	X_COMPARE_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// IHOLD_IRUN		[DRV_CNT]={				};
constexpr uint8_t	IHOLD_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	IRUN_bp	[DRV_CNT]={	8	,	0	};
constexpr uint8_t	IHOLDDELAY_bp	[DRV_CNT]={	16	,	0	};
constexpr uint32_t	IHOLD_IRUN_bm	[DRV_CNT]={	0xF1F1FUL	,	0	};
constexpr uint32_t	IHOLD_bm	[DRV_CNT]={	0x1FUL	,	0	};
constexpr uint32_t	IRUN_bm	[DRV_CNT]={	0x1F00UL	,	0	};
constexpr uint32_t	IHOLDDELAY_bm	[DRV_CNT]={	0xF0000UL	,	0	};
// TPOWERDOWN		[DRV_CNT]={				};
constexpr uint8_t	TPOWERDOWN_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	TPOWERDOWN_bm	[DRV_CNT]={	0xFFUL	,	0	};
// TSTEP		[DRV_CNT]={				};
constexpr uint8_t	TSTEP_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	TSTEP_bm	[DRV_CNT]={	0xFFFFFUL	,	0	};
// TPWMTHRS		[DRV_CNT]={				};
constexpr uint8_t	TPWMTHRS_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	TPWMTHRS_bm	[DRV_CNT]={	0xFFFFFUL	,	0	};
// TCOOLTHRS		[DRV_CNT]={				};
constexpr uint8_t	TCOOLTHRS_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	TCOOLTHRS_bm	[DRV_CNT]={	0xFFFFFUL	,	0	};
// THIGH		[DRV_CNT]={				};
constexpr uint8_t	THIGH_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	THIGH_bm	[DRV_CNT]={	0xFFFFFUL	,	0	};
// RAMPMODE		[DRV_CNT]={				};
constexpr uint8_t	RAMPMODE_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	RAMPMODE_bm	[DRV_CNT]={	0x3UL	,	0	};
// XACTUAL		[DRV_CNT]={				};
constexpr uint8_t	XACTUAL_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	XACTUAL_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// VACTUAL		[DRV_CNT]={				};
constexpr uint8_t	VACTUAL_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	VACTUAL_bm	[DRV_CNT]={	0xFFFFFFUL	,	0	};
// VSTART		[DRV_CNT]={				};
constexpr uint8_t	VSTART_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	VSTART_bm	[DRV_CNT]={	0x3FFFFUL	,	0	};
// A1		[DRV_CNT]={				};
constexpr uint8_t	A1_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	A1_bm	[DRV_CNT]={	0xFFFFUL	,	0	};
// V1		[DRV_CNT]={				};
constexpr uint8_t	V1_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	V1_bm	[DRV_CNT]={	0xFFFFFUL	,	0	};
// AMAX		[DRV_CNT]={				};
constexpr uint8_t	AMAX_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	AMAX_bm	[DRV_CNT]={	0xFFFFUL	,	0	};
// VMAX		[DRV_CNT]={				};
constexpr uint8_t	VMAX_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	VMAX_bm	[DRV_CNT]={	0x7FFFFF	,	0	};
// DMAX		[DRV_CNT]={				};
constexpr uint8_t	DMAX_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	DMAX_bm	[DRV_CNT]={	0xFFFFUL	,	0	};
// D1		[DRV_CNT]={				};
constexpr uint8_t	D1_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	D1_bm	[DRV_CNT]={	0xFFFFUL	,	0	};
// VSTOP		[DRV_CNT]={				};
constexpr uint8_t	VSTOP_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	VSTOP_bm	[DRV_CNT]={	0x3FFFFUL	,	0	};
// TZEROWAIT		[DRV_CNT]={				};
constexpr uint8_t	TZEROWAIT_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	TZEROWAIT_bm	[DRV_CNT]={	0xFFFFUL	,	0	};
// XTARGET		[DRV_CNT]={				};
constexpr uint8_t	XTARGET_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	XTARGET_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// VDCMIN		[DRV_CNT]={				};
constexpr uint8_t	VDCMIN_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	VDCMIN_bm	[DRV_CNT]={	0x7FFFFFUL	,	0	};
// MSLUT0		[DRV_CNT]={				};
constexpr uint8_t	MSLUT0_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUT0_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUT1		[DRV_CNT]={				};
constexpr uint8_t	MSLUT1_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUT1_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUT2		[DRV_CNT]={				};
constexpr uint8_t	MSLUT2_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUT2_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUT3		[DRV_CNT]={				};
constexpr uint8_t	MSLUT3_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUT3_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUT4		[DRV_CNT]={				};
constexpr uint8_t	MSLUT4_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUT4_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUT5		[DRV_CNT]={				};
constexpr uint8_t	MSLUT5_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUT5_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUT6		[DRV_CNT]={				};
constexpr uint8_t	MSLUT6_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUT6_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUT7		[DRV_CNT]={				};
constexpr uint8_t	MSLUT7_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUT7_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUTSEL		[DRV_CNT]={				};
constexpr uint8_t	MSLUTSEL_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSLUTSEL_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
// MSLUTSTART		[DRV_CNT]={				};
constexpr uint8_t	START_SIN_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	START_SIN90_bp	[DRV_CNT]={	16	,	0	};
constexpr uint32_t	START_SIN_bm	[DRV_CNT]={	0xFFUL	,	0	};
constexpr uint32_t	START_SIN90_bm	[DRV_CNT]={	0xFF0000UL	,	0	};
// MSCNT		[DRV_CNT]={				};
constexpr uint8_t	MSCNT_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSCNT_bm	[DRV_CNT]={	0x3FFUL	,	0	};
// MSCURACT		[DRV_CNT]={				};
constexpr uint8_t	CUR_A_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	CUR_B_bp	[DRV_CNT]={	16	,	0	};
constexpr uint32_t	CUR_A_bm	[DRV_CNT]={	0x1FFUL	,	0	};
constexpr uint32_t	CUR_B_bm	[DRV_CNT]={	0x1FF0000UL	,	0	};
// SW_MODE		[DRV_CNT]={				};
constexpr uint8_t	STOP_L_ENABLE_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	STOP_R_ENABLE_bp	[DRV_CNT]={	1	,	0	};
constexpr uint8_t	POL_STOP_L_bp	[DRV_CNT]={	2	,	0	};
constexpr uint8_t	POL_STOP_R_bp	[DRV_CNT]={	3	,	0	};
constexpr uint8_t	SWAP_LR_bp	[DRV_CNT]={	4	,	0	};
constexpr uint8_t	LATCH_L_ACTIVE_bp	[DRV_CNT]={	5	,	0	};
constexpr uint8_t	LATCH_L_INACTIVE_bp	[DRV_CNT]={	6	,	0	};
constexpr uint8_t	LATCH_R_ACTIVE_bp	[DRV_CNT]={	7	,	0	};
constexpr uint8_t	LATCH_R_INACTIVE_bp	[DRV_CNT]={	8	,	0	};
constexpr uint8_t	EN_LATCH_ENCODER_bp	[DRV_CNT]={	9	,	0	};
constexpr uint8_t	SG_STOP_bp	[DRV_CNT]={	10	,	0	};
constexpr uint8_t	EN_SOFTSTOP_bp	[DRV_CNT]={	11	,	0	};
constexpr uint32_t	STOP_L_ENABLE_bm	[DRV_CNT]={	0x1UL	,	0	};
constexpr uint32_t	STOP_R_ENABLE_bm	[DRV_CNT]={	0x2UL	,	0	};
constexpr uint32_t	POL_STOP_L_bm	[DRV_CNT]={	0x4UL	,	0	};
constexpr uint32_t	POL_STOP_R_bm	[DRV_CNT]={	0x8UL	,	0	};
constexpr uint32_t	SWAP_LR_bm	[DRV_CNT]={	0x10UL	,	0	};
constexpr uint32_t	LATCH_L_ACTIVE_bm	[DRV_CNT]={	0x20UL	,	0	};
constexpr uint32_t	LATCH_L_INACTIVE_bm	[DRV_CNT]={	0x40UL	,	0	};
constexpr uint32_t	LATCH_R_ACTIVE_bm	[DRV_CNT]={	0x80UL	,	0	};
constexpr uint32_t	LATCH_R_INACTIVE_bm	[DRV_CNT]={	0x100UL	,	0	};
constexpr uint32_t	EN_LATCH_ENCODER_bm	[DRV_CNT]={	0x200UL	,	0	};
constexpr uint32_t	SG_STOP_bm	[DRV_CNT]={	0x400UL	,	0	};
constexpr uint32_t	EN_SOFTSTOP_bm	[DRV_CNT]={	0x800UL	,	0	};
// RAMP_STAT		[DRV_CNT]={				};
constexpr uint8_t	STATUS_STOP_L_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	STATUS_STOP_R_bp	[DRV_CNT]={	1	,	0	};
constexpr uint8_t	STATUS_LATCH_L_bp	[DRV_CNT]={	2	,	0	};
constexpr uint8_t	STATUS_LATCH_R_bp	[DRV_CNT]={	3	,	0	};
constexpr uint8_t	EVENT_STOP_L_bp	[DRV_CNT]={	4	,	0	};
constexpr uint8_t	EVENT_STOP_R_bp	[DRV_CNT]={	5	,	0	};
constexpr uint8_t	EVENT_STOP_SG_bp	[DRV_CNT]={	6	,	0	};
constexpr uint8_t	EVENT_POS_REACHED_bp	[DRV_CNT]={	7	,	0	};
constexpr uint8_t	VELOCITY_REACHED_bp	[DRV_CNT]={	8	,	0	};
constexpr uint8_t	POSITION_REACHED_bp	[DRV_CNT]={	9	,	0	};
constexpr uint8_t	VZERO_bp	[DRV_CNT]={	10	,	0	};
constexpr uint8_t	T_ZEROWAIT_ACTIVE_bp	[DRV_CNT]={	11	,	0	};
constexpr uint8_t	SECOND_MOVE_bp	[DRV_CNT]={	12	,	0	};
constexpr uint8_t	STATUS_SG_bp	[DRV_CNT]={	13	,	0	};
constexpr uint32_t	STATUS_STOP_L_bm	[DRV_CNT]={	0x1UL	,	0	};
constexpr uint32_t	STATUS_STOP_R_bm	[DRV_CNT]={	0x2UL	,	0	};
constexpr uint32_t	STATUS_LATCH_L_bm	[DRV_CNT]={	0x4UL	,	0	};
constexpr uint32_t	STATUS_LATCH_R_bm	[DRV_CNT]={	0x8UL	,	0	};
constexpr uint32_t	EVENT_STOP_L_bm	[DRV_CNT]={	0x10UL	,	0	};
constexpr uint32_t	EVENT_STOP_R_bm	[DRV_CNT]={	0x20UL	,	0	};
constexpr uint32_t	EVENT_STOP_SG_bm	[DRV_CNT]={	0x40UL	,	0	};
constexpr uint32_t	EVENT_POS_REACHED_bm	[DRV_CNT]={	0x80UL	,	0	};
constexpr uint32_t	VELOCITY_REACHED_bm	[DRV_CNT]={	0x100UL	,	0	};
constexpr uint32_t	POSITION_REACHED_bm	[DRV_CNT]={	0x200UL	,	0	};
constexpr uint32_t	VZERO_bm	[DRV_CNT]={	0x400UL	,	0	};
constexpr uint32_t	T_ZEROWAIT_ACTIVE_bm	[DRV_CNT]={	0x800UL	,	0	};
constexpr uint32_t	SECOND_MOVE_bm	[DRV_CNT]={	0x1000UL	,	0	};
constexpr uint32_t	STATUS_SG_bm	[DRV_CNT]={	0x2000UL	,	0	};
// ENCMODE		[DRV_CNT]={				};
constexpr uint8_t	POL_A_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	POL_B_bp	[DRV_CNT]={	1	,	0	};
constexpr uint8_t	POL_N_bp	[DRV_CNT]={	2	,	0	};
constexpr uint8_t	IGNORE_AB_bp	[DRV_CNT]={	3	,	0	};
constexpr uint8_t	CLR_CONT_bp	[DRV_CNT]={	4	,	0	};
constexpr uint8_t	CLR_ONCE_bp	[DRV_CNT]={	5	,	0	};
constexpr uint8_t	POS_EDGE_bp	[DRV_CNT]={	6	,	0	};
constexpr uint8_t	NEG_EDGE_bp	[DRV_CNT]={	7	,	0	};
constexpr uint8_t	CLR_ENC_X_bp	[DRV_CNT]={	8	,	0	};
constexpr uint8_t	LATCH_X_ACT_bp	[DRV_CNT]={	9	,	0	};
constexpr uint8_t	ENC_SEL_DECIMAL_bp	[DRV_CNT]={	10	,	0	};
constexpr uint32_t	POL_A_bm	[DRV_CNT]={	0x1UL	,	0	};
constexpr uint32_t	POL_B_bm	[DRV_CNT]={	0x2UL	,	0	};
constexpr uint32_t	POL_N_bm	[DRV_CNT]={	0x4UL	,	0	};
constexpr uint32_t	IGNORE_AB_bm	[DRV_CNT]={	0x8UL	,	0	};
constexpr uint32_t	CLR_CONT_bm	[DRV_CNT]={	0x10UL	,	0	};
constexpr uint32_t	CLR_ONCE_bm	[DRV_CNT]={	0x20UL	,	0	};
constexpr uint32_t	POS_EDGE_bm	[DRV_CNT]={	0x40UL	,	0	};
constexpr uint32_t	NEG_EDGE_bm	[DRV_CNT]={	0x80UL	,	0	};
constexpr uint32_t	CLR_ENC_X_bm	[DRV_CNT]={	0x100UL	,	0	};
constexpr uint32_t	LATCH_X_ACT_bm	[DRV_CNT]={	0x200UL	,	0	};
constexpr uint32_t	ENC_SEL_DECIMAL_bm	[DRV_CNT]={	0x400UL	,	0	};
// CHOPCONF		[DRV_CNT]={				};
constexpr uint8_t	TOFF_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	HSTRT_bp	[DRV_CNT]={	4	,	4	};
constexpr uint8_t	FD_bp	[DRV_CNT]={	4	,	0	};
constexpr uint8_t	HEND_bp	[DRV_CNT]={	7	,	7	};
constexpr uint8_t	DISFDCC_bp	[DRV_CNT]={	12	,	0	};
constexpr uint8_t	RNDTF_bp	[DRV_CNT]={	13	,	13	};
constexpr uint8_t	CHM_bp	[DRV_CNT]={	14	,	14	};
constexpr uint8_t	TBL_bp	[DRV_CNT]={	15	,	15	};
constexpr uint8_t	VSENSE_bp	[DRV_CNT]={	17	,	6	};
constexpr uint8_t	VHIGHFS_bp	[DRV_CNT]={	18	,	0	};
constexpr uint8_t	VHIGHCHM_bp	[DRV_CNT]={	19	,	0	};
constexpr uint8_t	SYNC_bp	[DRV_CNT]={	20	,	0	};
constexpr uint8_t	MRES_bp	[DRV_CNT]={	24	,	0	};
constexpr uint8_t	INTPOL_bp	[DRV_CNT]={	28	,	9	};
constexpr uint8_t	DEDGE_bp	[DRV_CNT]={	29	,	8	};
constexpr uint8_t	DISS2G_bp	[DRV_CNT]={	30	,	10	};
constexpr uint32_t	CHOPCONF_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
constexpr uint32_t	TOFF_bm	[DRV_CNT]={	0xFUL	,	0xFUL	};
constexpr uint32_t	HSTRT_bm	[DRV_CNT]={	0x70UL	,	0x70UL	};
constexpr uint32_t	FD_bm	[DRV_CNT]={	0x830UL	,	0	};
constexpr uint32_t	HEND_bm	[DRV_CNT]={	0x780UL	,	0x780UL	};
constexpr uint32_t	DISFDCC_bm	[DRV_CNT]={	0x1000UL	,	0	};
constexpr uint32_t	RNDTF_bm	[DRV_CNT]={	0x2000UL	,	0x2000UL	};
constexpr uint32_t	CHM_bm	[DRV_CNT]={	0x4000UL	,	0x4000UL	};
constexpr uint32_t	TBL_bm	[DRV_CNT]={	0x18000UL	,	0x18000UL	};
constexpr uint32_t	VSENSE_bm	[DRV_CNT]={	0x20000UL	,	0x40UL	};
constexpr uint32_t	VHIGHFS_bm	[DRV_CNT]={	0x40000UL	,	0	};
constexpr uint32_t	VHIGHCHM_bm	[DRV_CNT]={	0x80000UL	,	0	};
constexpr uint32_t	SYNC_bm	[DRV_CNT]={	0xF00000UL	,	0	};
constexpr uint32_t	MRES_bm	[DRV_CNT]={	0xF000000UL	,	0xFUL	};
constexpr uint32_t	INTPOL_bm	[DRV_CNT]={	0x10000000UL	,	0x200UL	};
constexpr uint32_t	DEDGE_bm	[DRV_CNT]={	0x20000000UL	,	0x100UL	};
constexpr uint32_t	DISS2G_bm	[DRV_CNT]={	0x40000000UL	,	0x400UL	};
// COOLCONF		[DRV_CNT]={				};
constexpr uint8_t	SEMIN_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	SEUP_bp	[DRV_CNT]={	5	,	5	};
constexpr uint8_t	SEMAX_bp	[DRV_CNT]={	8	,	8	};
constexpr uint8_t	SEDN_bp	[DRV_CNT]={	13	,	13	};
constexpr uint8_t	SEIMIN_bp	[DRV_CNT]={	15	,	15	};
constexpr uint8_t	SGT_bp	[DRV_CNT]={	16	,	8	};
constexpr uint8_t	SFILT_bp	[DRV_CNT]={	24	,	16	};
constexpr uint32_t	COOLCONF_bm	[DRV_CNT]={	0x3FFFFFFUL	,	0	};
constexpr uint32_t	SEMIN_bm	[DRV_CNT]={	0xFUL	,	0xFUL	};
constexpr uint32_t	SEUP_bm	[DRV_CNT]={	0x60UL	,	0x60UL	};
constexpr uint32_t	SEMAX_bm	[DRV_CNT]={	0xF00UL	,	0xF00UL	};
constexpr uint32_t	SEDN_bm	[DRV_CNT]={	0x6000UL	,	0x6000UL	};
constexpr uint32_t	SEIMIN_bm	[DRV_CNT]={	0x8000UL	,	0x8000UL	};
constexpr uint32_t	SGT_bm	[DRV_CNT]={	0x7F0000UL	,	0x7F00UL	};
constexpr uint32_t	SFILT_bm	[DRV_CNT]={	0x1000000UL	,	0x10000UL	};
// DCCTRL		[DRV_CNT]={				};
constexpr uint8_t	DC_TIME_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	DC_SG_bp	[DRV_CNT]={	16	,	0	};
constexpr uint32_t	DC_TIME_bm	[DRV_CNT]={	0x3FFUL	,	0	};
constexpr uint32_t	DC_SG_bm	[DRV_CNT]={	0xFF0000UL	,	0	};
// DRV_STATUS		[DRV_CNT]={				};
constexpr uint8_t	SG_RESULT_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	FSACTIVE_bp	[DRV_CNT]={	15	,	0	};
constexpr uint8_t	CS_ACTUAL_bp	[DRV_CNT]={	16	,	0	};
constexpr uint8_t	STALLGUARD_bp	[DRV_CNT]={	24	,	0	};
constexpr uint8_t	OT_bp	[DRV_CNT]={	25	,	1	};
constexpr uint8_t	OTPW_bp	[DRV_CNT]={	26	,	2	};
constexpr uint8_t	S2GA_bp	[DRV_CNT]={	27	,	3	};
constexpr uint8_t	S2GB_bp	[DRV_CNT]={	28	,	4	};
constexpr uint8_t	OLA_bp	[DRV_CNT]={	29	,	5	};
constexpr uint8_t	OLB_bp	[DRV_CNT]={	30	,	6	};
constexpr uint8_t	STST_bp	[DRV_CNT]={	31	,	7	};
constexpr uint32_t	DRV_STATUS_bm	[DRV_CNT]={	0xFFFFFFFFUL	,	0	};
constexpr uint32_t	SG_RESULT_bm	[DRV_CNT]={	0x3FFUL	,	0	};
constexpr uint32_t	FSACTIVE_bm	[DRV_CNT]={	0x8000UL	,	0	};
constexpr uint32_t	CS_ACTUAL_bm	[DRV_CNT]={	0x1F0000UL	,	0	};
constexpr uint32_t	STALLGUARD_bm	[DRV_CNT]={	0x1000000UL	,	0	};
constexpr uint32_t	OT_bm	[DRV_CNT]={	0x2000000UL	,	0x2UL	};
constexpr uint32_t	OTPW_bm	[DRV_CNT]={	0x4000000UL	,	0x4UL	};
constexpr uint32_t	S2GA_bm	[DRV_CNT]={	0x8000000UL	,	0x8UL	};
constexpr uint32_t	S2GB_bm	[DRV_CNT]={	0x10000000UL	,	0x10UL	};
constexpr uint32_t	OLA_bm	[DRV_CNT]={	0x20000000UL	,	0x20UL	};
constexpr uint32_t	OLB_bm	[DRV_CNT]={	0x40000000UL	,	0x40UL	};
constexpr uint32_t	STST_bm	[DRV_CNT]={	0x80000000UL	,	0x80UL	};
// PWMCONF		[DRV_CNT]={				};
constexpr uint8_t	PWM_AMPL_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	PWM_GRAD_bp	[DRV_CNT]={	8	,	0	};
constexpr uint8_t	PWM_FREQ_bp	[DRV_CNT]={	16	,	0	};
constexpr uint8_t	PWM_AUTOSCALE_bp	[DRV_CNT]={	18	,	0	};
constexpr uint8_t	PWM_SYMMETRIC_bp	[DRV_CNT]={	19	,	0	};
constexpr uint8_t	FREEWHEEL_bp	[DRV_CNT]={	20	,	0	};
constexpr uint32_t	PWMCONF_bm	[DRV_CNT]={	0x7FFFFFUL	,	0	};
constexpr uint32_t	PWM_AMPL_bm	[DRV_CNT]={	0xFFUL	,	0	};
constexpr uint32_t	PWM_GRAD_bm	[DRV_CNT]={	0xFF00UL	,	0	};
constexpr uint32_t	PWM_FREQ_bm	[DRV_CNT]={	0x30000UL	,	0	};
constexpr uint32_t	PWM_AUTOSCALE_bm	[DRV_CNT]={	0x40000UL	,	0	};
constexpr uint32_t	PWM_SYMMETRIC_bm	[DRV_CNT]={	0x80000UL	,	0	};
constexpr uint32_t	FREEWHEEL_bm	[DRV_CNT]={	0x300000UL	,	0	};
// PWM_SCALE		[DRV_CNT]={				};
constexpr uint8_t	PWM_SCALE_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	PWM_SCALE_bm	[DRV_CNT]={	0xFFUL	,	0	};
// ENCM_CTRL		[DRV_CNT]={				};
constexpr uint8_t	INV_bp	[DRV_CNT]={	0	,	0	};
constexpr uint8_t	MAXSPEED_bp	[DRV_CNT]={	1	,	0	};
constexpr uint32_t	INV_bm	[DRV_CNT]={	0x1UL	,	0	};
constexpr uint32_t	MAXSPEED_bm	[DRV_CNT]={	0x2UL	,	0	};
// LOST_STEPS		[DRV_CNT]={		,		};
constexpr uint8_t	LOST_STEPS_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	LOST_STEPS_bm	[DRV_CNT]={	0xFFFFFUL	,	0	};
//TMC2660		[DRV_CNT]={				};
constexpr uint8_t	REG_DRVCTRL	[DRV_CNT]={	0	,	 0b000	};
constexpr uint8_t	REG_SMARTEN	[DRV_CNT]={	0	,	 0b101	};
constexpr uint8_t	REG_SGCSCONF	[DRV_CNT]={	0	,	 0b110	};
constexpr uint8_t	REG_DRVCONF	[DRV_CNT]={	0	,	 0b111	};
// DRVCTRL (SPI)		[DRV_CNT]={				};
constexpr uint8_t	PHA_bp	[DRV_CNT]={	0	,	17	};
constexpr uint8_t	CA_bp	[DRV_CNT]={	0	,	9	};
constexpr uint8_t	PHB_bp	[DRV_CNT]={	0	,	8	};
constexpr uint8_t	CB_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	PHA_bm	[DRV_CNT]={	0	,	 0x20000UL	};
constexpr uint32_t	CA_bm	[DRV_CNT]={	0	,	 0x1FE00UL	};
constexpr uint32_t	PHB_bm	[DRV_CNT]={	0	,	 0x100UL	};
constexpr uint32_t	CB_bm	[DRV_CNT]={	0	,	 0xFFUL	};
// CHOPCONF		[DRV_CNT]={				};
constexpr uint8_t	HDEC_bp	[DRV_CNT]={	0	,	11	};
constexpr uint32_t	HDEC_bm	[DRV_CNT]={	0	,	0x1800UL	};
// SMARTEN		[DRV_CNT]={				};
constexpr uint8_t	SMARTEN_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	SMARTEN_bm	[DRV_CNT]={	0	,	 0xFFFFFUL	};
// SGCSCONF		[DRV_CNT]={				};
constexpr uint8_t	SGCSCONF_bp	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	SGCSCONF_bm	[DRV_CNT]={	0	,	 0xFFFFFUL	};
constexpr uint8_t	CS_bp 	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	CS_bm 	[DRV_CNT]={	0	,	 0x1FUL	};
// DRVCONF		[DRV_CNT]={				};
constexpr uint8_t	TST_bp 	[DRV_CNT]={	0	,	16	};
constexpr uint8_t	SLPH_bp 	[DRV_CNT]={	0	,	14	};
constexpr uint8_t	SLPL_bp 	[DRV_CNT]={	0	,	12	};
constexpr uint8_t	TS2G_bp	[DRV_CNT]={	0	,	8	};
constexpr uint8_t	SDOFF_bp	[DRV_CNT]={	0	,	7	};
constexpr uint8_t	RDSEL_bp	[DRV_CNT]={	0	,	4	};
constexpr uint32_t	TST_bm 	[DRV_CNT]={	0	,	 0x10000UL	};
constexpr uint32_t	SLPH_bm 	[DRV_CNT]={	0	,	 0xC000UL	};
constexpr uint32_t	SLPL_bm 	[DRV_CNT]={	0	,	 0x3000UL	};
constexpr uint32_t	TS2G_bm	[DRV_CNT]={	0	,	 0x300UL	};
constexpr uint32_t	SDOFF_bm	[DRV_CNT]={	0	,	 0x80UL	};
constexpr uint32_t	RDSEL_bm	[DRV_CNT]={	0	,	 0x30UL	};
// DRVSTATUS		[DRV_CNT]={				};
constexpr uint8_t	MSTEP_bp	[DRV_CNT]={	0	,	10	};
constexpr uint8_t	SG_RESULT_10b_bp	[DRV_CNT]={	0	,	10	};
constexpr uint8_t	SG_RESULT_5b_bp	[DRV_CNT]={	0	,	15	};
constexpr uint8_t	SE_bp 	[DRV_CNT]={	0	,	10	};
constexpr uint8_t	SG_bp 	[DRV_CNT]={	0	,	0	};
constexpr uint32_t	MSTEP_bm	[DRV_CNT]={	0	,	 0xFFC00UL	};
constexpr uint32_t	SG_RESULT_10b_bm	[DRV_CNT]={	0	,	 0xFFC00UL	};
constexpr uint32_t	SG_RESULT_5b_bm	[DRV_CNT]={	0	,	 0xF8000UL	};
constexpr uint32_t	SE_bm 	[DRV_CNT]={	0	,	 0x7C00UL	};
constexpr uint32_t	SG_bm 	[DRV_CNT]={	0	,	 0x1UL	};
