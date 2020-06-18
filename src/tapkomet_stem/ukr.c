/* Generated by Snowball 2.0.0 - https://snowballstem.org/ */

#include "header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int ukr_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_tidy_up(struct SN_env * z);
static int r_noun(struct SN_env * z);
static int r_verb(struct SN_env * z);
static int r_postfix(struct SN_env * z);
static int r_adjective(struct SN_env * z);
static int r_exception1(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * ukr_create_env(void);
extern void ukr_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[8] = { 0xD0, 0xB0, 0xD0, 0xB4, 0xD0, 0xB6, 0xD0, 0xB5 };
static const symbol s_0_1[8] = { 0xD0, 0xB0, 0xD1, 0x82, 0xD0, 0xBE, 0xD0, 0xBC };
static const symbol s_0_2[8] = { 0xD0, 0xB2, 0xD1, 0x96, 0xD1, 0x81, 0xD1, 0x8C };
static const symbol s_0_3[8] = { 0xD0, 0xB4, 0xD0, 0xB5, 0xD1, 0x81, 0xD1, 0x8C };
static const symbol s_0_4[15] = { 0xD0, 0xB7, 0xD0, 0xB4, 0xD0, 0xBE, 0xD1, 0x80, 0xD0, 0xBE, 0xD0, 0xB2, '\'', 0xD1, 0x8F };
static const symbol s_0_5[8] = { 0xD0, 0xBA, 0xD1, 0x80, 0xD0, 0xBE, 0xD0, 0xBA };
static const symbol s_0_6[8] = { 0xD0, 0xBA, 0xD1, 0x80, 0xD1, 0x96, 0xD0, 0xBC };

static const struct among a_0[7] =
{
{ 8, s_0_0, -1, -1, 0},
{ 8, s_0_1, -1, -1, 0},
{ 8, s_0_2, -1, -1, 0},
{ 8, s_0_3, -1, -1, 0},
{ 15, s_0_4, -1, 1, 0},
{ 8, s_0_5, -1, -1, 0},
{ 8, s_0_6, -1, -1, 0}
};

static const symbol s_1_0[6] = { 0xD0, 0xB5, 0xD0, 0xBC, 0xD1, 0x83 };
static const symbol s_1_1[6] = { 0xD0, 0xBE, 0xD0, 0xBC, 0xD1, 0x83 };
static const symbol s_1_2[10] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xBE, 0xD0, 0xBC, 0xD1, 0x83 };
static const symbol s_1_3[4] = { 0xD1, 0x96, 0xD1, 0x85 };
static const symbol s_1_4[4] = { 0xD0, 0xB8, 0xD1, 0x85 };
static const symbol s_1_5[8] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xB8, 0xD1, 0x85 };
static const symbol s_1_6[4] = { 0xD1, 0x83, 0xD1, 0x8E };
static const symbol s_1_7[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_1_8[4] = { 0xD0, 0xB5, 0xD1, 0x8E };
static const symbol s_1_9[4] = { 0xD0, 0xBE, 0xD1, 0x8E };
static const symbol s_1_10[8] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xBE, 0xD1, 0x8E };
static const symbol s_1_11[4] = { 0xD0, 0xB0, 0xD1, 0x8F };
static const symbol s_1_12[4] = { 0xD0, 0xBE, 0xD1, 0x97 };
static const symbol s_1_13[8] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xBE, 0xD1, 0x97 };
static const symbol s_1_14[6] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xB0 };
static const symbol s_1_15[6] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xB5 };
static const symbol s_1_16[6] = { 0xD0, 0xB8, 0xD0, 0xBC, 0xD0, 0xB8 };
static const symbol s_1_17[4] = { 0xD1, 0x96, 0xD0, 0xB9 };
static const symbol s_1_18[8] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD1, 0x96, 0xD0, 0xB9 };
static const symbol s_1_19[4] = { 0xD0, 0xB5, 0xD0, 0xB9 };
static const symbol s_1_20[4] = { 0xD0, 0xB8, 0xD0, 0xB9 };
static const symbol s_1_21[8] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xB8, 0xD0, 0xB9 };
static const symbol s_1_22[4] = { 0xD1, 0x96, 0xD0, 0xBC };
static const symbol s_1_23[4] = { 0xD0, 0xB5, 0xD0, 0xBC };
static const symbol s_1_24[4] = { 0xD0, 0xB8, 0xD0, 0xBC };
static const symbol s_1_25[8] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xB8, 0xD0, 0xBC };
static const symbol s_1_26[4] = { 0xD0, 0xBE, 0xD0, 0xBC };
static const symbol s_1_27[6] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xBE };
static const symbol s_1_28[6] = { 0xD0, 0xBE, 0xD0, 0xB3, 0xD0, 0xBE };
static const symbol s_1_29[10] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xBE, 0xD0, 0xB3, 0xD0, 0xBE };

static const struct among a_1[30] =
{
{ 6, s_1_0, -1, 1, 0},
{ 6, s_1_1, -1, 1, 0},
{ 10, s_1_2, 1, 1, 0},
{ 4, s_1_3, -1, 1, 0},
{ 4, s_1_4, -1, 1, 0},
{ 8, s_1_5, 4, 1, 0},
{ 4, s_1_6, -1, 1, 0},
{ 4, s_1_7, -1, 1, 0},
{ 4, s_1_8, -1, 1, 0},
{ 4, s_1_9, -1, 1, 0},
{ 8, s_1_10, 9, 1, 0},
{ 4, s_1_11, -1, 1, 0},
{ 4, s_1_12, -1, 1, 0},
{ 8, s_1_13, 12, 1, 0},
{ 6, s_1_14, -1, 1, 0},
{ 6, s_1_15, -1, 1, 0},
{ 6, s_1_16, -1, 1, 0},
{ 4, s_1_17, -1, 1, 0},
{ 8, s_1_18, 17, 1, 0},
{ 4, s_1_19, -1, 1, 0},
{ 4, s_1_20, -1, 1, 0},
{ 8, s_1_21, 20, 1, 0},
{ 4, s_1_22, -1, 1, 0},
{ 4, s_1_23, -1, 1, 0},
{ 4, s_1_24, -1, 1, 0},
{ 8, s_1_25, 24, 1, 0},
{ 4, s_1_26, -1, 1, 0},
{ 6, s_1_27, -1, 1, 0},
{ 6, s_1_28, -1, 1, 0},
{ 10, s_1_29, 28, 1, 0}
};

static const symbol s_2_0[4] = { 0xD1, 0x81, 0xD1, 0x8C };
static const symbol s_2_1[4] = { 0xD1, 0x81, 0xD1, 0x8F };

static const struct among a_2[2] =
{
{ 4, s_2_0, -1, 1, 0},
{ 4, s_2_1, -1, 1, 0}
};

static const symbol s_3_0[8] = { 0xD0, 0xB0, 0xD0, 0xBD, 0xD0, 0xB8, 0xD1, 0x85 };
static const symbol s_3_1[8] = { 0xD1, 0x83, 0xD1, 0x8E, 0xD1, 0x82, 0xD1, 0x8C };
static const symbol s_3_2[8] = { 0xD1, 0x96, 0xD1, 0x8E, 0xD1, 0x82, 0xD1, 0x8C };
static const symbol s_3_3[8] = { 0xD0, 0xB0, 0xD1, 0x8E, 0xD1, 0x82, 0xD1, 0x8C };
static const symbol s_3_4[6] = { 0xD1, 0x96, 0xD1, 0x82, 0xD1, 0x8C };
static const symbol s_3_5[6] = { 0xD0, 0xB8, 0xD1, 0x82, 0xD1, 0x8C };
static const symbol s_3_6[12] = { 0xD1, 0x83, 0xD0, 0xB2, 0xD0, 0xB0, 0xD0, 0xBD, 0xD0, 0xBD, 0xD1, 0x8F };
static const symbol s_3_7[4] = { 0xD1, 0x83, 0xD1, 0x94 };
static const symbol s_3_8[4] = { 0xD1, 0x8E, 0xD1, 0x94 };
static const symbol s_3_9[4] = { 0xD1, 0x8F, 0xD1, 0x94 };
static const symbol s_3_10[4] = { 0xD1, 0x96, 0xD1, 0x94 };
static const symbol s_3_11[4] = { 0xD0, 0xB0, 0xD1, 0x94 };
static const symbol s_3_12[4] = { 0xD0, 0xB8, 0xD1, 0x94 };
static const symbol s_3_13[6] = { 0xD0, 0xB8, 0xD0, 0xBB, 0xD1, 0x96 };
static const symbol s_3_14[6] = { 0xD0, 0xB0, 0xD0, 0xBD, 0xD1, 0x96 };
static const symbol s_3_15[6] = { 0xD0, 0xB8, 0xD1, 0x82, 0xD0, 0xB0 };
static const symbol s_3_16[6] = { 0xD1, 0x88, 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_3_17[6] = { 0xD1, 0x96, 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_3_18[6] = { 0xD0, 0xB0, 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_3_19[10] = { 0xD1, 0x83, 0xD0, 0xB2, 0xD0, 0xB0, 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_3_20[6] = { 0xD0, 0xB8, 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_3_21[6] = { 0xD0, 0xB5, 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_3_22[4] = { 0xD0, 0xB0, 0xD0, 0xB2 };
static const symbol s_3_23[8] = { 0xD1, 0x83, 0xD0, 0xB2, 0xD0, 0xB0, 0xD0, 0xB2 };
static const symbol s_3_24[4] = { 0xD0, 0xB8, 0xD0, 0xB2 };
static const symbol s_3_25[6] = { 0xD1, 0x88, 0xD0, 0xBE, 0xD0, 0xB2 };
static const symbol s_3_26[8] = { 0xD1, 0x83, 0xD0, 0xB9, 0xD1, 0x82, 0xD0, 0xB5 };
static const symbol s_3_27[10] = { 0xD1, 0x83, 0xD0, 0xB2, 0xD0, 0xB0, 0xD1, 0x82, 0xD0, 0xB8 };
static const symbol s_3_28[8] = { 0xD0, 0xB8, 0xD0, 0xB2, 0xD1, 0x88, 0xD0, 0xB8 };
static const symbol s_3_29[6] = { 0xD1, 0x88, 0xD0, 0xBB, 0xD0, 0xB8 };
static const symbol s_3_30[6] = { 0xD0, 0xB0, 0xD0, 0xBB, 0xD0, 0xB8 };
static const symbol s_3_31[10] = { 0xD1, 0x83, 0xD0, 0xB2, 0xD0, 0xB0, 0xD0, 0xBB, 0xD0, 0xB8 };
static const symbol s_3_32[6] = { 0xD0, 0xB8, 0xD0, 0xBB, 0xD0, 0xB8 };
static const symbol s_3_33[10] = { 0xD0, 0xB0, 0xD0, 0xBD, 0xD0, 0xB8, 0xD0, 0xBC, 0xD0, 0xB8 };
static const symbol s_3_34[4] = { 0xD1, 0x83, 0xD0, 0xB9 };
static const symbol s_3_35[6] = { 0xD1, 0x88, 0xD0, 0xBB, 0xD0, 0xBE };
static const symbol s_3_36[6] = { 0xD1, 0x96, 0xD0, 0xBB, 0xD0, 0xBE };
static const symbol s_3_37[6] = { 0xD0, 0xB0, 0xD0, 0xBB, 0xD0, 0xBE };
static const symbol s_3_38[10] = { 0xD1, 0x83, 0xD0, 0xB2, 0xD0, 0xB0, 0xD0, 0xBB, 0xD0, 0xBE };
static const symbol s_3_39[6] = { 0xD0, 0xB8, 0xD0, 0xBB, 0xD0, 0xBE };
static const symbol s_3_40[6] = { 0xD0, 0xB5, 0xD0, 0xBD, 0xD0, 0xBE };

static const struct among a_3[41] =
{
{ 8, s_3_0, -1, 2, 0},
{ 8, s_3_1, -1, 2, 0},
{ 8, s_3_2, -1, 2, 0},
{ 8, s_3_3, -1, 2, 0},
{ 6, s_3_4, -1, 2, 0},
{ 6, s_3_5, -1, 2, 0},
{ 12, s_3_6, -1, 2, 0},
{ 4, s_3_7, -1, 2, 0},
{ 4, s_3_8, -1, 2, 0},
{ 4, s_3_9, -1, 2, 0},
{ 4, s_3_10, -1, 2, 0},
{ 4, s_3_11, -1, 2, 0},
{ 4, s_3_12, -1, 2, 0},
{ 6, s_3_13, -1, 2, 0},
{ 6, s_3_14, -1, 2, 0},
{ 6, s_3_15, -1, 2, 0},
{ 6, s_3_16, -1, 1, 0},
{ 6, s_3_17, -1, 2, 0},
{ 6, s_3_18, -1, 2, 0},
{ 10, s_3_19, 18, 2, 0},
{ 6, s_3_20, -1, 2, 0},
{ 6, s_3_21, -1, 2, 0},
{ 4, s_3_22, -1, 2, 0},
{ 8, s_3_23, 22, 2, 0},
{ 4, s_3_24, -1, 2, 0},
{ 6, s_3_25, -1, 1, 0},
{ 8, s_3_26, -1, 2, 0},
{ 10, s_3_27, -1, 2, 0},
{ 8, s_3_28, -1, 2, 0},
{ 6, s_3_29, -1, 1, 0},
{ 6, s_3_30, -1, 2, 0},
{ 10, s_3_31, 30, 2, 0},
{ 6, s_3_32, -1, 2, 0},
{ 10, s_3_33, -1, 2, 0},
{ 4, s_3_34, -1, 2, 0},
{ 6, s_3_35, -1, 1, 0},
{ 6, s_3_36, -1, 2, 0},
{ 6, s_3_37, -1, 2, 0},
{ 10, s_3_38, 37, 2, 0},
{ 6, s_3_39, -1, 2, 0},
{ 6, s_3_40, -1, 2, 0}
};

static const symbol s_4_0[4] = { 0xD1, 0x8F, 0xD1, 0x82 };
static const symbol s_4_1[2] = { 0xD1, 0x83 };
static const symbol s_4_2[4] = { 0xD1, 0x8F, 0xD1, 0x85 };
static const symbol s_4_3[6] = { 0xD1, 0x96, 0xD1, 0x8F, 0xD1, 0x85 };
static const symbol s_4_4[6] = { 0xD0, 0xBE, 0xD1, 0x8F, 0xD1, 0x85 };
static const symbol s_4_5[4] = { 0xD0, 0xB0, 0xD1, 0x85 };
static const symbol s_4_6[2] = { 0xD1, 0x8C };
static const symbol s_4_7[2] = { 0xD1, 0x8E };
static const symbol s_4_8[4] = { 0xD1, 0x83, 0xD1, 0x8E };
static const symbol s_4_9[6] = { 0xD1, 0x96, 0xD1, 0x94, 0xD1, 0x8E };
static const symbol s_4_10[4] = { 0xD1, 0x96, 0xD1, 0x8E };
static const symbol s_4_11[2] = { 0xD1, 0x8F };
static const symbol s_4_12[4] = { 0xD1, 0x96, 0xD1, 0x8F };
static const symbol s_4_13[4] = { 0xD0, 0xBE, 0xD1, 0x8F };
static const symbol s_4_14[2] = { 0xD1, 0x96 };
static const symbol s_4_15[6] = { 0xD0, 0xBE, 0xD0, 0xB2, 0xD1, 0x96 };
static const symbol s_4_16[4] = { 0xD1, 0x96, 0xD1, 0x97 };
static const symbol s_4_17[4] = { 0xD0, 0xB5, 0xD1, 0x97 };
static const symbol s_4_18[2] = { 0xD0, 0xB0 };
static const symbol s_4_19[6] = { 0xD1, 0x8F, 0xD1, 0x82, 0xD0, 0xB0 };
static const symbol s_4_20[4] = { 0xD1, 0x96, 0xD0, 0xB2 };
static const symbol s_4_21[4] = { 0xD1, 0x97, 0xD0, 0xB2 };
static const symbol s_4_22[6] = { 0xD0, 0xBE, 0xD1, 0x97, 0xD0, 0xB2 };
static const symbol s_4_23[4] = { 0xD0, 0xBE, 0xD0, 0xB2 };
static const symbol s_4_24[2] = { 0xD0, 0xB5 };
static const symbol s_4_25[2] = { 0xD0, 0xB8 };
static const symbol s_4_26[6] = { 0xD1, 0x8F, 0xD0, 0xBC, 0xD0, 0xB8 };
static const symbol s_4_27[8] = { 0xD1, 0x96, 0xD1, 0x8F, 0xD0, 0xBC, 0xD0, 0xB8 };
static const symbol s_4_28[6] = { 0xD0, 0xB0, 0xD0, 0xBC, 0xD0, 0xB8 };
static const symbol s_4_29[10] = { 0xD1, 0x8F, 0xD1, 0x82, 0xD0, 0xB0, 0xD0, 0xBC, 0xD0, 0xB8 };
static const symbol s_4_30[2] = { 0xD0, 0xB9 };
static const symbol s_4_31[4] = { 0xD1, 0x96, 0xD0, 0xB9 };
static const symbol s_4_32[4] = { 0xD0, 0xB5, 0xD0, 0xB9 };
static const symbol s_4_33[4] = { 0xD0, 0xBE, 0xD0, 0xB9 };
static const symbol s_4_34[4] = { 0xD0, 0xBE, 0xD0, 0xBA };
static const symbol s_4_35[4] = { 0xD1, 0x96, 0xD0, 0xBB };
static const symbol s_4_36[4] = { 0xD0, 0xB8, 0xD0, 0xBB };
static const symbol s_4_37[4] = { 0xD1, 0x8F, 0xD0, 0xBC };
static const symbol s_4_38[6] = { 0xD1, 0x96, 0xD1, 0x8F, 0xD0, 0xBC };
static const symbol s_4_39[6] = { 0xD0, 0xBE, 0xD1, 0x94, 0xD0, 0xBC };
static const symbol s_4_40[4] = { 0xD0, 0xB0, 0xD0, 0xBC };
static const symbol s_4_41[8] = { 0xD1, 0x8F, 0xD1, 0x82, 0xD0, 0xB0, 0xD0, 0xBC };
static const symbol s_4_42[4] = { 0xD0, 0xB5, 0xD0, 0xBC };
static const symbol s_4_43[4] = { 0xD0, 0xBE, 0xD0, 0xBC };
static const symbol s_4_44[4] = { 0xD0, 0xB5, 0xD0, 0xBD };
static const symbol s_4_45[2] = { 0xD0, 0xBE };

static const struct among a_4[46] =
{
{ 4, s_4_0, -1, 3, 0},
{ 2, s_4_1, -1, 3, 0},
{ 4, s_4_2, -1, 3, 0},
{ 6, s_4_3, 2, 3, 0},
{ 6, s_4_4, 2, 3, 0},
{ 4, s_4_5, -1, 3, 0},
{ 2, s_4_6, -1, 3, 0},
{ 2, s_4_7, -1, 3, 0},
{ 4, s_4_8, 7, 3, 0},
{ 6, s_4_9, 7, 3, 0},
{ 4, s_4_10, 7, 3, 0},
{ 2, s_4_11, -1, 3, 0},
{ 4, s_4_12, 11, 3, 0},
{ 4, s_4_13, 11, 3, 0},
{ 2, s_4_14, -1, 3, 0},
{ 6, s_4_15, 14, 3, 0},
{ 4, s_4_16, -1, 3, 0},
{ 4, s_4_17, -1, 3, 0},
{ 2, s_4_18, -1, 3, 0},
{ 6, s_4_19, 18, 1, 0},
{ 4, s_4_20, -1, 3, 0},
{ 4, s_4_21, -1, 3, 0},
{ 6, s_4_22, 21, 3, 0},
{ 4, s_4_23, -1, 3, 0},
{ 2, s_4_24, -1, 3, 0},
{ 2, s_4_25, -1, 3, 0},
{ 6, s_4_26, 25, 3, 0},
{ 8, s_4_27, 26, 3, 0},
{ 6, s_4_28, 25, 3, 0},
{ 10, s_4_29, 28, 1, 0},
{ 2, s_4_30, -1, 3, 0},
{ 4, s_4_31, 30, 3, 0},
{ 4, s_4_32, 30, 3, 0},
{ 4, s_4_33, 30, 3, 0},
{ 4, s_4_34, -1, 2, 0},
{ 4, s_4_35, -1, 3, 0},
{ 4, s_4_36, -1, 3, 0},
{ 4, s_4_37, -1, 3, 0},
{ 6, s_4_38, 37, 3, 0},
{ 6, s_4_39, -1, 3, 0},
{ 4, s_4_40, -1, 3, 0},
{ 8, s_4_41, 40, 1, 0},
{ 4, s_4_42, -1, 3, 0},
{ 4, s_4_43, -1, 3, 0},
{ 4, s_4_44, -1, 3, 0},
{ 2, s_4_45, -1, 3, 0}
};

static const symbol s_5_0[1] = { '\'' };
static const symbol s_5_1[2] = { 0xD1, 0x82 };
static const symbol s_5_2[6] = { 0xD0, 0xBE, 0xD1, 0x81, 0xD1, 0x82 };
static const symbol s_5_3[6] = { 0xD1, 0x8E, 0xD1, 0x8E, 0xD1, 0x82 };
static const symbol s_5_4[6] = { 0xD1, 0x83, 0xD1, 0x94, 0xD1, 0x82 };
static const symbol s_5_5[6] = { 0xD1, 0x8E, 0xD1, 0x94, 0xD1, 0x82 };
static const symbol s_5_6[6] = { 0xD1, 0x8F, 0xD1, 0x94, 0xD1, 0x82 };
static const symbol s_5_7[6] = { 0xD0, 0xB0, 0xD1, 0x94, 0xD1, 0x82 };
static const symbol s_5_8[4] = { 0xD0, 0xB8, 0xD1, 0x82 };
static const symbol s_5_9[2] = { 0xD1, 0x8C };
static const symbol s_5_10[6] = { 0xD1, 0x81, 0xD1, 0x8C, 0xD0, 0xBA };
static const symbol s_5_11[10] = { 0xD1, 0x96, 0xD0, 0xB9, 0xD1, 0x81, 0xD1, 0x8C, 0xD0, 0xBA };
static const symbol s_5_12[2] = { 0xD0, 0xBD };
static const symbol s_5_13[6] = { 0xD1, 0x96, 0xD1, 0x87, 0xD0, 0xBD };
static const symbol s_5_14[4] = { 0xD1, 0x8C, 0xD0, 0xBD };
static const symbol s_5_15[4] = { 0xD0, 0xB0, 0xD0, 0xBD };
static const symbol s_5_16[4] = { 0xD0, 0xB5, 0xD0, 0xBD };

static const struct among a_5[17] =
{
{ 1, s_5_0, -1, 3, 0},
{ 2, s_5_1, -1, 2, 0},
{ 6, s_5_2, 1, 4, 0},
{ 6, s_5_3, 1, 3, 0},
{ 6, s_5_4, 1, 3, 0},
{ 6, s_5_5, 1, 3, 0},
{ 6, s_5_6, 1, 3, 0},
{ 6, s_5_7, 1, 3, 0},
{ 4, s_5_8, 1, 3, 0},
{ 2, s_5_9, -1, 3, 0},
{ 6, s_5_10, -1, 3, 0},
{ 10, s_5_11, 10, 3, 0},
{ 2, s_5_12, -1, 1, 0},
{ 6, s_5_13, 12, 3, 0},
{ 4, s_5_14, 12, 3, 0},
{ 4, s_5_15, 12, 3, 0},
{ 4, s_5_16, 12, 3, 0}
};

static const symbol s_0[] = { 0xD0, 0xB7, 0xD0, 0xB4, 0xD0, 0xBE, 0xD1, 0x80 };
static const symbol s_1[] = { 0xD1, 0x82 };
static const symbol s_2[] = { 0xD0, 0xBD };
static const symbol s_3[] = { 0xD0, 0xBA };
static const symbol s_4[] = { 0xD0, 0xBD };
static const symbol s_5[] = { 0xD1, 0x82 };
static const symbol s_6[] = { 0xD1, 0x96, 0xD1, 0x81, 0xD1, 0x82 };

static int r_exception1(struct SN_env * z) {
    int among_var;
    z->bra = z->c;
    among_var = find_among(z, a_0, 7);
    if (!(among_var)) return 0;
    z->ket = z->c;
    if (z->c < z->l) return 0;
    switch (among_var) {
        case 1:
            {   int ret = slice_from_s(z, 8, s_0);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_adjective(struct SN_env * z) {
    z->ket = z->c;
    if (!(find_among_b(z, a_1, 30))) return 0;
    z->bra = z->c;
    {   int ret = slice_del(z);
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_postfix(struct SN_env * z) {
    z->ket = z->c;
    if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 140 && z->p[z->c - 1] != 143)) return 0;
    if (!(find_among_b(z, a_2, 2))) return 0;
    z->bra = z->c;
    {   int ret = slice_del(z);
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_verb(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    among_var = find_among_b(z, a_3, 41);
    if (!(among_var)) return 0;
    z->bra = z->c;
    switch (among_var) {
        case 1:
            {   int ret = slice_from_s(z, 2, s_1);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_noun(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    among_var = find_among_b(z, a_4, 46);
    if (!(among_var)) return 0;
    z->bra = z->c;
    switch (among_var) {
        case 1:
            if (!(eq_s_b(z, 2, s_2))) return 0;
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_3);
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_tidy_up(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    among_var = find_among_b(z, a_5, 17);
    if (!(among_var)) return 0;
    z->bra = z->c;
    switch (among_var) {
        case 1:
            if (!(eq_s_b(z, 2, s_4))) return 0;
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(eq_s_b(z, 2, s_5))) return 0;
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 6, s_6);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int ukr_stem(struct SN_env * z) {
    {   int c1 = z->c;
        {   int c2 = z->c;
            {   int ret = skip_utf8(z->p, z->c, 0, z->l, + 4);
                if (ret < 0) goto lab2;
                z->c = ret;
            }
            goto lab1;
        lab2:
            z->c = c2;
        }
        goto lab0;
    lab1:
        z->c = c1;
        {   int c3 = z->c;
            {   int ret = r_exception1(z);
                if (ret == 0) goto lab4;
                if (ret < 0) return ret;
            }
            goto lab3;
        lab4:
            z->c = c3;
            z->lb = z->c; z->c = z->l;

            {   int m4 = z->l - z->c; (void)m4;
                {   int m5 = z->l - z->c; (void)m5;
                    {   int ret = r_postfix(z);
                        if (ret == 0) { z->c = z->l - m5; goto lab6; }
                        if (ret < 0) return ret;
                    }
                lab6:
                    ;
                }
                {   int m6 = z->l - z->c; (void)m6;
                    {   int ret = r_adjective(z);
                        if (ret == 0) goto lab8;
                        if (ret < 0) return ret;
                    }
                    goto lab7;
                lab8:
                    z->c = z->l - m6;
                    {   int ret = r_verb(z);
                        if (ret == 0) goto lab9;
                        if (ret < 0) return ret;
                    }
                    goto lab7;
                lab9:
                    z->c = z->l - m6;
                    {   int ret = r_noun(z);
                        if (ret == 0) goto lab5;
                        if (ret < 0) return ret;
                    }
                }
            lab7:
            lab5:
                z->c = z->l - m4;
            }
            {   int m7 = z->l - z->c; (void)m7;
                {   int ret = r_tidy_up(z);
                    if (ret < 0) return ret;
                }
                z->c = z->l - m7;
            }
            z->c = z->lb;
        }
    lab3:
        ;
    }
lab0:
    return 1;
}

extern struct SN_env * ukr_create_env(void) { return SN_create_env(0, 0); }

extern void ukr_close_env(struct SN_env * z) { SN_close_env(z, 0); }
