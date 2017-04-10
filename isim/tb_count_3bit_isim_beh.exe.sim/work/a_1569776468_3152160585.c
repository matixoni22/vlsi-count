/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/Projekty/VSLI/PUL/lab3z1/count_3bit.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1569776468_3152160585_p_0(char *t0)
{
    char t15[16];
    char t27[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    static char *nl0[] = {&&LAB17, &&LAB18};

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t10 = xsi_signal_has_event(t1);
    if (t10 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3456);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 3392);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(54, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t5 = (t0 + 3456);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t2 = (t0 + 5496U);
    t8 = (t0 + 5545);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 2;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (2 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t2, t8, t15);
    if (t20 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t5 = (t0 + 5561);
    t7 = (t27 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t19;
    t8 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t2, t1, t5, t27);
    t9 = (t15 + 12U);
    t19 = *((unsigned int *)t9);
    t36 = (1U * t19);
    t3 = (3U != t36);
    if (t3 == 1)
        goto LAB29;

LAB30:    t16 = (t0 + 3584);
    t17 = (t16 + 56U);
    t21 = *((char **)t17);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 3U);
    xsi_driver_first_trans_fast(t16);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)2);
    t3 = t14;
    goto LAB9;

LAB10:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t4 = t12;
    goto LAB12;

LAB13:    xsi_set_current_line(58, ng0);
    t17 = (t0 + 1512U);
    t21 = *((char **)t17);
    t22 = *((unsigned char *)t21);
    t17 = (char *)((nl0) + t22);
    goto **((char **)t17);

LAB16:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 5558);
    t5 = (t0 + 3584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB14;

LAB17:    xsi_set_current_line(60, ng0);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t23 = (t0 + 5512U);
    t25 = (t0 + 5548);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 0;
    t29 = (t28 + 4U);
    *((int *)t29) = 2;
    t29 = (t28 + 8U);
    *((int *)t29) = 1;
    t30 = (2 - 0);
    t19 = (t30 * 1);
    t19 = (t19 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t19;
    t31 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t24, t23, t25, t27);
    if (t31 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5512U);
    t5 = (t0 + 5551);
    t7 = (t27 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t19;
    t8 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t2, t1, t5, t27);
    t9 = (t15 + 12U);
    t19 = *((unsigned int *)t9);
    t36 = (1U * t19);
    t3 = (3U != t36);
    if (t3 == 1)
        goto LAB22;

LAB23:    t16 = (t0 + 3520);
    t17 = (t16 + 56U);
    t21 = *((char **)t17);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 3U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB16;

LAB18:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5512U);
    t5 = (t0 + 5553);
    t7 = (t15 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t18 = (2 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t19;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t15);
    if (t3 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5512U);
    t5 = (t0 + 5556);
    t7 = (t27 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t19;
    t8 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t15, t2, t1, t5, t27);
    t9 = (t15 + 12U);
    t19 = *((unsigned int *)t9);
    t36 = (1U * t19);
    t3 = (3U != t36);
    if (t3 == 1)
        goto LAB27;

LAB28:    t16 = (t0 + 3520);
    t17 = (t16 + 56U);
    t21 = *((char **)t17);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 3U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB25:    goto LAB16;

LAB19:    xsi_set_current_line(61, ng0);
    t29 = (t0 + 3392);
    t32 = (t29 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = (unsigned char)1;
    xsi_driver_first_trans_fast(t29);
    goto LAB20;

LAB22:    xsi_size_not_matching(3U, t36, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(68, ng0);
    t8 = (t0 + 3392);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t17 = (t16 + 56U);
    t21 = *((char **)t17);
    *((unsigned char *)t21) = (unsigned char)0;
    xsi_driver_first_trans_fast(t8);
    goto LAB25;

LAB27:    xsi_size_not_matching(3U, t36, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(3U, t36, 0);
    goto LAB30;

}


extern void work_a_1569776468_3152160585_init()
{
	static char *pe[] = {(void *)work_a_1569776468_3152160585_p_0};
	xsi_register_didat("work_a_1569776468_3152160585", "isim/tb_count_3bit_isim_beh.exe.sim/work/a_1569776468_3152160585.didat");
	xsi_register_executes(pe);
}
