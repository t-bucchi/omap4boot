
#include <aboot/aboot.h>
#include <aboot/io.h>
#include <omap4/mux.h>
#include <omap4/hw.h>

void board_late_init(void)
{
	cfg_machine_type = 2160;
}

void board_mux_init(void)
{
	__asm__ __volatile__ (
		"ldr	r3, =0x4a100000\n\t"
		"mov	r1, #256\n\t"
		"push	{r4, r5, r6, r7, r9, sl, fp, lr}\n\t"
		"mov	r0, #11\n\t"
		"mov	ip, #0\n\t"
		"mov	r4, #15\n\t"
		"movw	r5, #283\n\t"
		"movw	r6, #259\n\t"
		"movw	r2, #281\n\t"
		"movw	r7, #267\n\t"
		"strh	r2, [r3, #64]\n\t"
		"mov	sl, #3\n\t"
		"strh	r2, [r3, #66]\n\t"
		"mov	r9, #24\n\t"
		"strh	r2, [r3, #68]\n\t"
		"mov	fp, #24\n\t"
		"strh	r2, [r3, #70]\n\t"
		"strh	r2, [r3, #72]\n\t"
		"strh	r2, [r3, #74]\n\t"
		"strh	r2, [r3, #76]\n\t"
		"strh	r2, [r3, #78]\n\t"
		"strh	r5, [r3, #80]\n\t"
		"strh	r5, [r3, #82]\n\t"
		"strh	r5, [r3, #84]\n\t"
		"strh	r5, [r3, #86]\n\t"
		"strh	r5, [r3, #88]\n\t"
		"strh	r0, [r3, #90]\n\t"
		"strh	sl, [r3, #92]\n\t"
		"strh	r0, [r3, #94]\n\t"
		"strh	r0, [r3, #96]\n\t"
		"strh	r0, [r3, #98]\n\t"
		"strh	r7, [r3, #100]\n\t"
		"strh	r5, [r3, #102]\n\t"
		"strh	r7, [r3, #104]\n\t"
		"strh	r6, [r3, #106]\n\t"
		"strh	r5, [r3, #108]\n\t"
		"strh	r5, [r3, #110]\n\t"
		"strh	r0, [r3, #112]\n\t"
		"strh	r0, [r3, #114]\n\t"
		"strh	r7, [r3, #116]\n\t"
		"strh	r5, [r3, #118]\n\t"
		"strh	sl, [r3, #120]\n\t"
		"strh	r5, [r3, #122]\n\t"
		"strh	r0, [r3, #124]\n\t"
		"strh	r0, [r3, #126]\n\t"
		"strh	r0, [r3, #128]\n\t"
		"strh	r2, [r3, #130]\n\t"
		"strh	r2, [r3, #132]\n\t"
		"mov	r2, #27\n\t"
		"strh	r0, [r3, #134]\n\t"
		"strh	r0, [r3, #136]\n\t"
		"strh	r5, [r3, #138]\n\t"
		"strh	r6, [r3, #140]\n\t"
		"strh	r0, [r3, #142]\n\t"
		"strh	r2, [r3, #144]\n\t"
		"mov	r2, #280\n\t"
		"strh	r0, [r3, #146]\n\t"
		"strh	r6, [r3, #148]\n\t"
		"strh	r4, [r3, #150]\n\t"
		"strh	ip, [r3, #152]\n\t"
		"strh	ip, [r3, #154]\n\t"
		"strh	r9, [r3, #156]\n\t"
		"mov	r9, #260\n\t"
		"strh	r2, [r3, #158]\n\t"
		"strh	r1, [r3, #160]\n\t"
		"strh	r1, [r3, #162]\n\t"
		"strh	r1, [r3, #164]\n\t"
		"strh	r1, [r3, #166]\n\t"
		"strh	r1, [r3, #168]\n\t"
		"strh	r1, [r3, #170]\n\t"
		"strh	r4, [r3, #172]\n\t"
		"strh	r4, [r3, #174]\n\t"
		"strh	r4, [r3, #176]\n\t"
		"strh	r4, [r3, #178]\n\t"
		"strh	r1, [r3, #180]\n\t"
		"strh	r1, [r3, #182]\n\t"
		"strh	r1, [r3, #184]\n\t"
		"strh	r1, [r3, #186]\n\t"
		"strh	ip, [r3, #188]\n\t"
		"strh	ip, [r3, #190]\n\t"
		"strh	r0, [r3, #192]\n\t"
		"strh	r9, [r3, #194]\n\t"
		"strh	r9, [r3, #196]\n\t"
		"strh	r9, [r3, #198]\n\t"
		"strh	r9, [r3, #200]\n\t"
		"strh	r9, [r3, #202]\n\t"
		"strh	r9, [r3, #204]\n\t"
		"strh	r9, [r3, #206]\n\t"
		"strh	r9, [r3, #208]\n\t"
		"strh	r9, [r3, #210]\n\t"
		"strh	r9, [r3, #212]\n\t"
		"strh	r9, [r3, #214]\n\t"
		"strh	r9, [r3, #216]\n\t"
		"add	r9, r9, #4\n\t"
		"strh	sl, [r3, #218]\n\t"
		"strh	sl, [r3, #220]\n\t"
		"strh	r6, [r3, #222]\n\t"
		"strh	r6, [r3, #224]\n\t"
		"strh	fp, [r3, #226]\n\t"
		"mov	fp, #27\n\t"
		"strh	r2, [r3, #228]\n\t"
		"strh	r2, [r3, #230]\n\t"
		"strh	r2, [r3, #232]\n\t"
		"strh	r2, [r3, #234]\n\t"
		"strh	r2, [r3, #236]\n\t"
		"strh	r2, [r3, #238]\n\t"
		"strh	r2, [r3, #240]\n\t"
		"strh	r2, [r3, #242]\n\t"
		"strh	r2, [r3, #244]\n\t"
		"strh	r1, [r3, #246]\n\t"
		"strh	r1, [r3, #248]\n\t"
		"strh	ip, [r3, #250]\n\t"
		"strh	r1, [r3, #252]\n\t"
		"strh	r1, [r3, #254]\n\t"
		"add	r3, r3, r1\n\t"
		"strh	r1, [r3]\n\t"
		"strh	ip, [r3, #2]\n\t"
		"strh	r1, [r3, #4]\n\t"
		"strh	r9, [r3, #6]\n\t"
		"strh	r9, [r3, #8]\n\t"
		"strh	r2, [r3, #10]\n\t"
		"strh	r9, [r3, #12]\n\t"
		"strh	r9, [r3, #14]\n\t"
		"strh	ip, [r3, #16]\n\t"
		"strh	r1, [r3, #18]\n\t"
		"strh	r6, [r3, #20]\n\t"
		"strh	r6, [r3, #22]\n\t"
		"strh	r2, [r3, #24]\n\t"
		"strh	ip, [r3, #26]\n\t"
		"strh	r2, [r3, #28]\n\t"
		"strh	ip, [r3, #30]\n\t"
		"strh	sl, [r3, #32]\n\t"
		"strh	r2, [r3, #34]\n\t"
		"strh	r2, [r3, #36]\n\t"
		"strh	r2, [r3, #38]\n\t"
		"strh	r2, [r3, #40]\n\t"
		"strh	r2, [r3, #42]\n\t"
		"strh	r2, [r3, #44]\n\t"
		"strh	r2, [r3, #46]\n\t"
		"strh	r2, [r3, #48]\n\t"
		"strh	r1, [r3, #50]\n\t"
		"strh	r1, [r3, #52]\n\t"
		"strh	r1, [r3, #54]\n\t"
		"strh	r9, [r3, #56]\n\t"
		"strh	r7, [r3, #58]\n\t"
		"strh	fp, [r3, #60]\n\t"
		"strh	fp, [r3, #62]\n\t"
		"mov	fp, #8\n\t"
		"strh	r6, [r3, #64]\n\t"
		"strh	r6, [r3, #66]\n\t"
		"strh	r2, [r3, #68]\n\t"
		"strh	ip, [r3, #70]\n\t"
		"strh	r2, [r3, #72]\n\t"
		"strh	r2, [r3, #74]\n\t"
		"strh	r2, [r3, #76]\n\t"
		"strh	r2, [r3, #78]\n\t"
		"strh	r2, [r3, #80]\n\t"
		"strh	r2, [r3, #82]\n\t"
		"strh	r1, [r3, #84]\n\t"
		"strh	r1, [r3, #86]\n\t"
		"strh	r1, [r3, #88]\n\t"
		"strh	r9, [r3, #90]\n\t"
		"sub	r9, r9, #3\n\t"
		"strh	r1, [r3, #92]\n\t"
		"strh	ip, [r3, #94]\n\t"
		"strh	r0, [r3, #96]\n\t"
		"strh	r9, [r3, #98]\n\t"
		"strh	r9, [r3, #100]\n\t"
		"strh	r9, [r3, #102]\n\t"
		"strh	r9, [r3, #104]\n\t"
		"strh	r9, [r3, #106]\n\t"
		"strh	r9, [r3, #108]\n\t"
		"strh	r9, [r3, #110]\n\t"
		"strh	r9, [r3, #112]\n\t"
		"strh	r9, [r3, #114]\n\t"
		"strh	r9, [r3, #116]\n\t"
		"strh	r9, [r3, #118]\n\t"
		"strh	r0, [r3, #120]\n\t"
		"strh	r0, [r3, #122]\n\t"
		"strh	r4, [r3, #124]\n\t"
		"strh	r4, [r3, #126]\n\t"
		"strh	r4, [r3, #128]\n\t"
		"strh	r4, [r3, #130]\n\t"
		"strh	r4, [r3, #132]\n\t"
		"strh	r7, [r3, #134]\n\t"
		"strh	r4, [r3, #136]\n\t"
		"strh	r4, [r3, #138]\n\t"
		"strh	r4, [r3, #140]\n\t"
		"strh	r7, [r3, #142]\n\t"
		"strh	r5, [r3, #144]\n\t"
		"strh	r4, [r3, #146]\n\t"
		"strh	fp, [r3, #148]\n\t"
		"mov	fp, #7\n\t"
		"strh	r1, [r3, #150]\n\t"
		"strh	r1, [r3, #152]\n\t"
		"strh	sl, [r3, #154]\n\t"
		"strh	ip, [r3, #156]\n\t"
		"strh	r2, [r3, #158]\n\t"
		"strh	fp, [r3, #160]\n\t"
		"strh	r5, [r3, #162]\n\t"
		"strh	r0, [r3, #164]\n\t"
		"strh	r7, [r3, #166]\n\t"
		"strh	r0, [r3, #168]\n\t"
		"strh	r0, [r3, #170]\n\t"
		"strh	r0, [r3, #172]\n\t"
		"strh	r6, [r3, #174]\n\t"
		"strh	r6, [r3, #176]\n\t"
		"strh	r1, [r3, #178]\n\t"
		"strh	r9, [r3, #180]\n\t"
		"strh	r9, [r3, #182]\n\t"
		"strh	r9, [r3, #184]\n\t"
		"strh	r9, [r3, #186]\n\t"
		"strh	r9, [r3, #188]\n\t"
		"strh	r9, [r3, #190]\n\t"
		"strh	r9, [r3, #192]\n\t"
		"strh	r9, [r3, #194]\n\t"
		"strh	r9, [r3, #196]\n\t"
		"strh	r9, [r3, #198]\n\t"
		"strh	r9, [r3, #200]\n\t"
		"strh	r9, [r3, #202]\n\t"
		"strh	r9, [r3, #204]\n\t"
		"strh	r9, [r3, #206]\n\t"
		"strh	r9, [r3, #208]\n\t"
		"strh	r9, [r3, #210]\n\t"
		"strh	r9, [r3, #212]\n\t"
		"mov	r9, #24\n\t"
		"ldr	r3, =0x4a31e000\n\t"
		"strh	r4, [r3, #64]\n\t"
		"strh	r4, [r3, #66]\n\t"
		"strh	r4, [r3, #68]\n\t"
		"mov	r4, #2\n\t"
		"strh	r2, [r3, #70]\n\t"
		"strh	ip, [r3, #72]\n\t"
		"strh	r2, [r3, #74]\n\t"
		"strh	r2, [r3, #76]\n\t"
		"strh	ip, [r3, #78]\n\t"
		"strh	ip, [r3, #80]\n\t"
		"strh	ip, [r3, #82]\n\t"
		"strh	r4, [r3, #84]\n\t"
		"strh	r0, [r3, #86]\n\t"
		"strh	ip, [r3, #88]\n\t"
		"strh	r2, [r3, #90]\n\t"
		"strh	ip, [r3, #92]\n\t"
		"strh	r1, [r3, #94]\n\t"
		"strh	ip, [r3, #96]\n\t"
		"strh	ip, [r3, #98]\n\t"
		"strh	r9, [r3, #100]\n\t"
		"strh	sl, [r3, #102]\n\t"
		"strh	r7, [r3, #104]\n\t"
		"strh	r6, [r3, #106]\n\t"
		"pop	{r4, r5, r6, r7, r9, sl, fp, pc}\n\t"
		".pool\n\t":::"cc");
}


void __board_mux_init(void)
{
	writew(0x119, 0x4a100000+0x40)	;
	writew(0x119, 0x4a100000+0x42)	;
	writew(0x119, 0x4a100000+0x44)	;
	writew(0x119, 0x4a100000+0x46)	;
	writew(0x119, 0x4a100000+0x48)	;
	writew(0x119, 0x4a100000+0x4a)	;
	writew(0x119, 0x4a100000+0x4c)	;
	writew(0x119, 0x4a100000+0x4e)	;
	writew(0x11b, 0x4a100000+0x50)	;
	writew(0x11b, 0x4a100000+0x52)	;
	writew(0x11b, 0x4a100000+0x54)	;
	writew(0x11b, 0x4a100000+0x56)	;
	writew(0x11b, 0x4a100000+0x58)	;
	writew(0x00b, 0x4a100000+0x5a)	;
	writew(0x003, 0x4a100000+0x5c)	;
	writew(0x00b, 0x4a100000+0x5e)	;
	writew(0x00b, 0x4a100000+0x60)	;
	writew(0x00b, 0x4a100000+0x62)	;
	writew(0x10b, 0x4a100000+0x64)	;
	writew(0x11b, 0x4a100000+0x66)	;
	writew(0x10b, 0x4a100000+0x68)	;
	writew(0x103, 0x4a100000+0x6a)	;
	writew(0x11b, 0x4a100000+0x6c)	;
	writew(0x11b, 0x4a100000+0x6e)	;
	writew(0x00b, 0x4a100000+0x70)	;
	writew(0x00b, 0x4a100000+0x72)	;
	writew(0x10b, 0x4a100000+0x74)	;
	writew(0x11b, 0x4a100000+0x76)	;
	writew(0x003, 0x4a100000+0x78)	;
	writew(0x11b, 0x4a100000+0x7a)	;
	writew(0x00b, 0x4a100000+0x7c)	;
	writew(0x00b, 0x4a100000+0x7e)	;
	writew(0x00b, 0x4a100000+0x80)	;
	writew(0x119, 0x4a100000+0x82)	;
	writew(0x119, 0x4a100000+0x84)	;
	writew(0x00b, 0x4a100000+0x86)	;
	writew(0x00b, 0x4a100000+0x88)	;
	writew(0x11b, 0x4a100000+0x8a)	;
	writew(0x103, 0x4a100000+0x8c)	;
	writew(0x00b, 0x4a100000+0x8e)	;
	writew(0x01b, 0x4a100000+0x90)	;
	writew(0x00b, 0x4a100000+0x92)	;
	writew(0x103, 0x4a100000+0x94)	;
	writew(0x00f, 0x4a100000+0x96)	;
	writew(0x000, 0x4a100000+0x98)	;
	writew(0x000, 0x4a100000+0x9a)	;
	writew(0x018, 0x4a100000+0x9c)	;
	writew(0x118, 0x4a100000+0x9e)	;
	writew(0x100, 0x4a100000+0xa0)	;
	writew(0x100, 0x4a100000+0xa2)	;
	writew(0x100, 0x4a100000+0xa4)	;
	writew(0x100, 0x4a100000+0xa6)	;
	writew(0x100, 0x4a100000+0xa8)	;
	writew(0x100, 0x4a100000+0xaa)	;
	writew(0x00f, 0x4a100000+0xac)	;
	writew(0x00f, 0x4a100000+0xae)	;
	writew(0x00f, 0x4a100000+0xb0)	;
	writew(0x00f, 0x4a100000+0xb2)	;
	writew(0x100, 0x4a100000+0xb4)	;
	writew(0x100, 0x4a100000+0xb6)	;
	writew(0x100, 0x4a100000+0xb8)	;
	writew(0x100, 0x4a100000+0xba)	;
	writew(0x000, 0x4a100000+0xbc)	;
	writew(0x000, 0x4a100000+0xbe)	;
	writew(0x00b, 0x4a100000+0xc0)	;
	writew(0x104, 0x4a100000+0xc2)	;
	writew(0x104, 0x4a100000+0xc4)	;
	writew(0x104, 0x4a100000+0xc6)	;
	writew(0x104, 0x4a100000+0xc8)	;
	writew(0x104, 0x4a100000+0xca)	;
	writew(0x104, 0x4a100000+0xcc)	;
	writew(0x104, 0x4a100000+0xce)	;
	writew(0x104, 0x4a100000+0xd0)	;
	writew(0x104, 0x4a100000+0xd2)	;
	writew(0x104, 0x4a100000+0xd4)	;
	writew(0x104, 0x4a100000+0xd6)	;
	writew(0x104, 0x4a100000+0xd8)	;
	writew(0x003, 0x4a100000+0xda)	;
	writew(0x003, 0x4a100000+0xdc)	;
	writew(0x103, 0x4a100000+0xde)	;
	writew(0x103, 0x4a100000+0xe0)	;
	writew(0x018, 0x4a100000+0xe2)	;
	writew(0x118, 0x4a100000+0xe4)	;
	writew(0x118, 0x4a100000+0xe6)	;
	writew(0x118, 0x4a100000+0xe8)	;
	writew(0x118, 0x4a100000+0xea)	;
	writew(0x118, 0x4a100000+0xec)	;
	writew(0x118, 0x4a100000+0xee)	;
	writew(0x118, 0x4a100000+0xf0)	;
	writew(0x118, 0x4a100000+0xf2)	;
	writew(0x118, 0x4a100000+0xf4)	;
	writew(0x100, 0x4a100000+0xf6)	;
	writew(0x100, 0x4a100000+0xf8)	;
	writew(0x000, 0x4a100000+0xfa)	;
	writew(0x100, 0x4a100000+0xfc)	;
	writew(0x100, 0x4a100000+0xfe)	;
	writew(0x100, 0x4a100000+0x100)	;
	writew(0x000, 0x4a100000+0x102)	;
	writew(0x100, 0x4a100000+0x104)	;
	writew(0x108, 0x4a100000+0x106)	;
	writew(0x108, 0x4a100000+0x108)	;
	writew(0x118, 0x4a100000+0x10a)	;
	writew(0x108, 0x4a100000+0x10c)	;
	writew(0x108, 0x4a100000+0x10e)	;
	writew(0x000, 0x4a100000+0x110)	;
	writew(0x100, 0x4a100000+0x112)	;
	writew(0x103, 0x4a100000+0x114)	;
	writew(0x103, 0x4a100000+0x116)	;
	writew(0x118, 0x4a100000+0x118)	;
	writew(0x000, 0x4a100000+0x11a)	;
	writew(0x118, 0x4a100000+0x11c)	;
	writew(0x000, 0x4a100000+0x11e)	;
	writew(0x003, 0x4a100000+0x120)	;
	writew(0x118, 0x4a100000+0x122)	;
	writew(0x118, 0x4a100000+0x124)	;
	writew(0x118, 0x4a100000+0x126)	;
	writew(0x118, 0x4a100000+0x128)	;
	writew(0x118, 0x4a100000+0x12a)	;
	writew(0x118, 0x4a100000+0x12c)	;
	writew(0x118, 0x4a100000+0x12e)	;
	writew(0x118, 0x4a100000+0x130)	;
	writew(0x100, 0x4a100000+0x132)	;
	writew(0x100, 0x4a100000+0x134)	;
	writew(0x100, 0x4a100000+0x136)	;
	writew(0x108, 0x4a100000+0x138)	;
	writew(0x10b, 0x4a100000+0x13a)	;
	writew(0x01b, 0x4a100000+0x13c)	;
	writew(0x01b, 0x4a100000+0x13e)	;
	writew(0x103, 0x4a100000+0x140)	;
	writew(0x103, 0x4a100000+0x142)	;
	writew(0x118, 0x4a100000+0x144)	;
	writew(0x000, 0x4a100000+0x146)	;
	writew(0x118, 0x4a100000+0x148)	;
	writew(0x118, 0x4a100000+0x14a)	;
	writew(0x118, 0x4a100000+0x14c)	;
	writew(0x118, 0x4a100000+0x14e)	;
	writew(0x118, 0x4a100000+0x150)	;
	writew(0x118, 0x4a100000+0x152)	;
	writew(0x100, 0x4a100000+0x154)	;
	writew(0x100, 0x4a100000+0x156)	;
	writew(0x100, 0x4a100000+0x158)	;
	writew(0x108, 0x4a100000+0x15a)	;
	writew(0x100, 0x4a100000+0x15c)	;
	writew(0x000, 0x4a100000+0x15e)	;
	writew(0x00b, 0x4a100000+0x160)	;
	writew(0x105, 0x4a100000+0x162)	;
	writew(0x105, 0x4a100000+0x164)	;
	writew(0x105, 0x4a100000+0x166)	;
	writew(0x105, 0x4a100000+0x168)	;
	writew(0x105, 0x4a100000+0x16a)	;
	writew(0x105, 0x4a100000+0x16c)	;
	writew(0x105, 0x4a100000+0x16e)	;
	writew(0x105, 0x4a100000+0x170)	;
	writew(0x105, 0x4a100000+0x172)	;
	writew(0x105, 0x4a100000+0x174)	;
	writew(0x105, 0x4a100000+0x176)	;
	writew(0x00b, 0x4a100000+0x178)	;
	writew(0x00b, 0x4a100000+0x17a)	;
	writew(0x00f, 0x4a100000+0x17c)	;
	writew(0x00f, 0x4a100000+0x17e)	;
	writew(0x00f, 0x4a100000+0x180)	;
	writew(0x00f, 0x4a100000+0x182)	;
	writew(0x00f, 0x4a100000+0x184)	;
	writew(0x10b, 0x4a100000+0x186)	;
	writew(0x00f, 0x4a100000+0x188)	;
	writew(0x00f, 0x4a100000+0x18a)	;
	writew(0x00f, 0x4a100000+0x18c)	;
	writew(0x10b, 0x4a100000+0x18e)	;
	writew(0x11b, 0x4a100000+0x190)	;
	writew(0x00f, 0x4a100000+0x192)	;
	writew(0x008, 0x4a100000+0x194)	;
	writew(0x100, 0x4a100000+0x196)	;
	writew(0x100, 0x4a100000+0x198)	;
	writew(0x003, 0x4a100000+0x19a)	;
	writew(0x000, 0x4a100000+0x19c)	;
	writew(0x118, 0x4a100000+0x19e)	;
	writew(0x007, 0x4a100000+0x1a0)	;
	writew(0x11b, 0x4a100000+0x1a2)	;
	writew(0x00b, 0x4a100000+0x1a4)	;
	writew(0x10b, 0x4a100000+0x1a6)	;
	writew(0x00b, 0x4a100000+0x1a8)	;
	writew(0x00b, 0x4a100000+0x1aa)	;
	writew(0x00b, 0x4a100000+0x1ac)	;
	writew(0x103, 0x4a100000+0x1ae)	;
	writew(0x103, 0x4a100000+0x1b0)	;
	writew(0x100, 0x4a100000+0x1b2)	;
	writew(0x105, 0x4a100000+0x1b4)	;
	writew(0x105, 0x4a100000+0x1b6)	;
	writew(0x105, 0x4a100000+0x1b8)	;
	writew(0x105, 0x4a100000+0x1ba)	;
	writew(0x105, 0x4a100000+0x1bc)	;
	writew(0x105, 0x4a100000+0x1be)	;
	writew(0x105, 0x4a100000+0x1c0)	;
	writew(0x105, 0x4a100000+0x1c2)	;
	writew(0x105, 0x4a100000+0x1c4)	;
	writew(0x105, 0x4a100000+0x1c6)	;
	writew(0x105, 0x4a100000+0x1c8)	;
	writew(0x105, 0x4a100000+0x1ca)	;
	writew(0x105, 0x4a100000+0x1cc)	;
	writew(0x105, 0x4a100000+0x1ce)	;
	writew(0x105, 0x4a100000+0x1d0)	;
	writew(0x105, 0x4a100000+0x1d2)	;
	writew(0x105, 0x4a100000+0x1d4)	;


	writew(0x00f, 0x4a31e000+0x40)	;
	writew(0x00f, 0x4a31e000+0x42)	;
	writew(0x00f, 0x4a31e000+0x44)	;
	writew(0x118, 0x4a31e000+0x46)	;
	writew(0x000, 0x4a31e000+0x48)	;
	writew(0x118, 0x4a31e000+0x4a)	;
	writew(0x118, 0x4a31e000+0x4c)	;
	writew(0x000, 0x4a31e000+0x4e)	;
	writew(0x000, 0x4a31e000+0x50)	;
	writew(0x000, 0x4a31e000+0x52)	;
	writew(0x002, 0x4a31e000+0x54)	;
	writew(0x00b, 0x4a31e000+0x56)	;
	writew(0x000, 0x4a31e000+0x58)	;
	writew(0x118, 0x4a31e000+0x5a)	;
	writew(0x000, 0x4a31e000+0x5c)	;
	writew(0x100, 0x4a31e000+0x5e)	;
	writew(0x000, 0x4a31e000+0x60)	;
	writew(0x000, 0x4a31e000+0x62)	;
	writew(0x018, 0x4a31e000+0x64)	;
	writew(0x003, 0x4a31e000+0x66)	;
	writew(0x10b, 0x4a31e000+0x68)	;
	writew(0x103, 0x4a100000+0x6a)	;

#if 0
	MV(CP(GPMC_AD0) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_dat0 */
	MV(CP(GPMC_AD1) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_dat1 */
	MV(CP(GPMC_AD2) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_dat2 */
	MV(CP(GPMC_AD3) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_dat3 */
	MV(CP(GPMC_AD4) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_dat4 */
	MV(CP(GPMC_AD5) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_dat5 */
	MV(CP(GPMC_AD6) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_dat6 */
	MV(CP(GPMC_AD7) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_dat7 */
	MV(CP(GPMC_AD8) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M3));  /* gpio_32 */
	MV(CP(GPMC_AD9) , (PTU | IEN | M3));  /* gpio_33 */
	MV(CP(GPMC_AD10) , (PTU | IEN | M3));  /* gpio_34 */
	MV(CP(GPMC_AD11) , (PTU | IEN | M3));  /* gpio_35 */
	MV(CP(GPMC_AD12) , (PTU | IEN | M3));  /* gpio_36 */
	MV(CP(GPMC_AD13) , (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3));  /* gpio_37 */
	MV(CP(GPMC_AD14) , (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3));  /* gpio_38 */
	MV(CP(GPMC_AD15) , (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3));  /* gpio_39 */
	MV(CP(GPMC_A16) , (M3));  /* gpio_40 */
	MV(CP(GPMC_A17) , (PTD | M3));  /* gpio_41 */
	MV(CP(GPMC_A18) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_row6 */
	MV(CP(GPMC_A19) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_row7 */
	MV(CP(GPMC_A20) , (IEN | M3));  /* gpio_44 */
	MV(CP(GPMC_A21) , (M3));  /* gpio_45 */
	MV(CP(GPMC_A22) , (M3));  /* gpio_46 */
	MV(CP(GPMC_A23) , (OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_col7 */
	MV(CP(GPMC_A24) , (PTD | M3));  /* gpio_48 */
	MV(CP(GPMC_A25) , (PTD | M3));  /* gpio_49 */
	MV(CP(GPMC_NCS0) , (M3));  /* gpio_50 */
	MV(CP(GPMC_NCS1) , (IEN | M3));  /* gpio_51 */
	MV(CP(GPMC_NCS2) , (IEN | M3));  /* gpio_52 */
	MV(CP(GPMC_NCS3) , (IEN | M3));  /* gpio_53 */
	MV(CP(GPMC_NWP) , (M3));  /* gpio_54 */
	MV(CP(GPMC_CLK) , (PTD | M3));  /* gpio_55 */
	MV(CP(GPMC_NADV_ALE) , (M3));  /* gpio_56 */
	MV(CP(GPMC_NOE) , (PTU | IEN | OFF_EN | OFF_OUT_PTD | M1));  /* sdmmc2_clk */
	MV(CP(GPMC_NWE) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* sdmmc2_cmd */
	MV(CP(GPMC_NBE0_CLE) , (M3));  /* gpio_59 */
	MV(CP(GPMC_NBE1) , (PTD | M3));  /* gpio_60 */
	MV(CP(GPMC_WAIT0) , (PTU | IEN | M3));  /* gpio_61 */
	MV(CP(GPMC_WAIT1) , (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3));  /* gpio_62 */
	MV(CP(C2C_DATA11) , (PTD | M3));  /* gpio_100 */
	MV(CP(C2C_DATA12) , (PTU | IEN | M3));  /* gpio_101 */
	MV(CP(C2C_DATA13) , (PTD | M3));  /* gpio_102 */
	MV(CP(C2C_DATA14) , ( M1));  /* dsi2_te0 */
	MV(CP(C2C_DATA15) , (PTD | M3));  /* gpio_104 */
	MV(CP(HDMI_HPD) , (M0));  /* hdmi_hpd */
	MV(CP(HDMI_CEC) , (M0));  /* hdmi_cec */
	MV(CP(HDMI_DDC_SCL) , (PTU | M0));  /* hdmi_ddc_scl */
	MV(CP(HDMI_DDC_SDA) , (PTU | IEN | M0));  /* hdmi_ddc_sda */
	MV(CP(CSI21_DX0) , (IEN | M0));  /* csi21_dx0 */
	MV(CP(CSI21_DY0) , (IEN | M0));  /* csi21_dy0 */
	MV(CP(CSI21_DX1) , (IEN | M0));  /* csi21_dx1 */
	MV(CP(CSI21_DY1) , (IEN | M0));  /* csi21_dy1 */
	MV(CP(CSI21_DX2) , (IEN | M0));  /* csi21_dx2 */
	MV(CP(CSI21_DY2) , (IEN | M0));  /* csi21_dy2 */
	MV(CP(CSI21_DX3) , (PTD | M7));  /* csi21_dx3 */
	MV(CP(CSI21_DY3) , (PTD | M7));  /* csi21_dy3 */
	MV(CP(CSI21_DX4) , (PTD | OFF_EN | OFF_PD | OFF_IN | M7));  /* csi21_dx4 */
	MV(CP(CSI21_DY4) , (PTD | OFF_EN | OFF_PD | OFF_IN | M7));  /* csi21_dy4 */
	MV(CP(CSI22_DX0) , (IEN | M0));  /* csi22_dx0 */
	MV(CP(CSI22_DY0) , (IEN | M0));  /* csi22_dy0 */
	MV(CP(CSI22_DX1) , (IEN | M0));  /* csi22_dx1 */
	MV(CP(CSI22_DY1) , (IEN | M0));  /* csi22_dy1 */
	MV(CP(CAM_SHUTTER) , (OFF_EN | OFF_PD | OFF_OUT_PTD | M0));  /* cam_shutter */
	MV(CP(CAM_STROBE) , (OFF_EN | OFF_PD | OFF_OUT_PTD | M0));  /* cam_strobe */
	MV(CP(CAM_GLOBALRESET) , (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3));  /* gpio_83 */
	MV(CP(USBB1_ULPITLL_CLK) , (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_clk */
	MV(CP(USBB1_ULPITLL_STP) , (OFF_EN | OFF_OUT_PTD | M4));  /* usbb1_ulpiphy_stp */
	MV(CP(USBB1_ULPITLL_DIR) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dir */
	MV(CP(USBB1_ULPITLL_NXT) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_nxt */
	MV(CP(USBB1_ULPITLL_DAT0) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dat0 */
	MV(CP(USBB1_ULPITLL_DAT1) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dat1 */
	MV(CP(USBB1_ULPITLL_DAT2) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dat2 */
	MV(CP(USBB1_ULPITLL_DAT3) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dat3 */
	MV(CP(USBB1_ULPITLL_DAT4) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dat4 */
	MV(CP(USBB1_ULPITLL_DAT5) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dat5 */
	MV(CP(USBB1_ULPITLL_DAT6) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dat6 */
	MV(CP(USBB1_ULPITLL_DAT7) , (IEN | OFF_EN | OFF_PD | OFF_IN | M4));  /* usbb1_ulpiphy_dat7 */
	MV(CP(USBB1_HSIC_DATA) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* usbb1_hsic_data */
	MV(CP(USBB1_HSIC_STROBE) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* usbb1_hsic_strobe */
	MV(CP(USBC1_ICUSB_DP) , (IEN | M0));  /* usbc1_icusb_dp */
	MV(CP(USBC1_ICUSB_DM) , (IEN | M0));  /* usbc1_icusb_dm */
	MV(CP(SDMMC1_CLK) , (PTU | OFF_EN | OFF_OUT_PTD | M0));  /* sdmmc1_clk */
	MV(CP(SDMMC1_CMD) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_cmd */
	MV(CP(SDMMC1_DAT0) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_dat0 */
	MV(CP(SDMMC1_DAT1) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_dat1 */
	MV(CP(SDMMC1_DAT2) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_dat2 */
	MV(CP(SDMMC1_DAT3) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_dat3 */
	MV(CP(SDMMC1_DAT4) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_dat4 */
	MV(CP(SDMMC1_DAT5) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_dat5 */
	MV(CP(SDMMC1_DAT6) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_dat6 */
	MV(CP(SDMMC1_DAT7) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc1_dat7 */
	MV(CP(ABE_MCBSP2_CLKX) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* abe_mcbsp2_clkx */
	MV(CP(ABE_MCBSP2_DR) , (IEN | OFF_EN | OFF_OUT_PTD | M0));  /* abe_mcbsp2_dr */
	MV(CP(ABE_MCBSP2_DX) , (OFF_EN | OFF_OUT_PTD | M0));  /* abe_mcbsp2_dx */
	MV(CP(ABE_MCBSP2_FSX) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* abe_mcbsp2_fsx */
	MV(CP(ABE_MCBSP1_CLKX) , (IEN | M1));  /* abe_slimbus1_clock */
	MV(CP(ABE_MCBSP1_DR) , (IEN | M1));  /* abe_slimbus1_data */
	MV(CP(ABE_MCBSP1_DX) , (OFF_EN | OFF_OUT_PTD | M0));  /* abe_mcbsp1_dx */
	MV(CP(ABE_MCBSP1_FSX) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* abe_mcbsp1_fsx */
	MV(CP(ABE_PDM_UL_DATA) , (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* abe_pdm_ul_data */
	MV(CP(ABE_PDM_DL_DATA) , (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* abe_pdm_dl_data */
	MV(CP(ABE_PDM_FRAME) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* abe_pdm_frame */
	MV(CP(ABE_PDM_LB_CLK) , (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* abe_pdm_lb_clk */
	MV(CP(ABE_CLKS) , (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* abe_clks */
	MV(CP(ABE_DMIC_CLK1) , (M0));  /* abe_dmic_clk1 */
	MV(CP(ABE_DMIC_DIN1) , (IEN | M0));  /* abe_dmic_din1 */
	MV(CP(ABE_DMIC_DIN2),   (PTU | IEN | M3));
	MV(CP(ABE_DMIC_DIN3) , (IEN | M0));  /* abe_dmic_din3 */
	MV(CP(UART2_CTS) , (PTU | IEN | M0));  /* uart2_cts */
	MV(CP(UART2_RTS) , (M0));  /* uart2_rts */
	MV(CP(UART2_RX) , (PTU | IEN | M0));  /* uart2_rx */
	MV(CP(UART2_TX) , (M0));  /* uart2_tx */
	MV(CP(HDQ_SIO) , (M3));  /* gpio_127 */
	MV(CP(I2C1_SCL) , (PTU | IEN | M0));  /* i2c1_scl */
	MV(CP(I2C1_SDA) , (PTU | IEN | M0));  /* i2c1_sda */
	MV(CP(I2C2_SCL) , (PTU | IEN | M0));  /* i2c2_scl */
	MV(CP(I2C2_SDA) , (PTU | IEN | M0));  /* i2c2_sda */
	MV(CP(I2C3_SCL) , (PTU | IEN | M0));  /* i2c3_scl */
	MV(CP(I2C3_SDA) , (PTU | IEN | M0));  /* i2c3_sda */
	MV(CP(I2C4_SCL) , (PTU | IEN | M0));  /* i2c4_scl */
	MV(CP(I2C4_SDA) , (PTU | IEN | M0));  /* i2c4_sda */
	MV(CP(MCSPI1_CLK) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* mcspi1_clk */
	MV(CP(MCSPI1_SOMI) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* mcspi1_somi */
	MV(CP(MCSPI1_SIMO) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* mcspi1_simo */
	MV(CP(MCSPI1_CS0) , (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* mcspi1_cs0 */
	MV(CP(MCSPI1_CS1) , (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M3));  /* mcspi1_cs1 */
	MV(CP(MCSPI1_CS2) , (PTU | OFF_EN | OFF_OUT_PTU | M3));  /* gpio_139 */
	MV(CP(MCSPI1_CS3) , (PTU | IEN | M3));  /* gpio_140 */
	MV(CP(UART3_CTS_RCTX) , (PTU | IEN | M0));  /* uart3_tx */
	MV(CP(UART3_RTS_SD) , (M0));  /* uart3_rts_sd */
	MV(CP(UART3_RX_IRRX) , (IEN | M0));  /* uart3_rx */
	MV(CP(UART3_TX_IRTX) , (M0));  /* uart3_tx */
	MV(CP(SDMMC5_CLK) , (PTU | IEN | OFF_EN | OFF_OUT_PTD | M0));  /* sdmmc5_clk */
	MV(CP(SDMMC5_CMD) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc5_cmd */
	MV(CP(SDMMC5_DAT0) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc5_dat0 */
	MV(CP(SDMMC5_DAT1) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc5_dat1 */
	MV(CP(SDMMC5_DAT2) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc5_dat2 */
	MV(CP(SDMMC5_DAT3) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* sdmmc5_dat3 */
	MV(CP(MCSPI4_CLK) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* mcspi4_clk */
	MV(CP(MCSPI4_SIMO) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* mcspi4_simo */
	MV(CP(MCSPI4_SOMI) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* mcspi4_somi */
	MV(CP(MCSPI4_CS0) , (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* mcspi4_cs0 */
	MV(CP(UART4_RX) , (IEN | M0));  /* uart4_rx */
	MV(CP(UART4_TX) , (M0));  /* uart4_tx */
	MV(CP(USBB2_ULPITLL_CLK) , (IEN | M3));  /* gpio_157 */
	MV(CP(USBB2_ULPITLL_STP) , (IEN | M5));  /* dispc2_data23 */
	MV(CP(USBB2_ULPITLL_DIR) , (IEN | M5));  /* dispc2_data22 */
	MV(CP(USBB2_ULPITLL_NXT) , (IEN | M5));  /* dispc2_data21 */
	MV(CP(USBB2_ULPITLL_DAT0) , (IEN | M5));  /* dispc2_data20 */
	MV(CP(USBB2_ULPITLL_DAT1) , (IEN | M5));  /* dispc2_data19 */
	MV(CP(USBB2_ULPITLL_DAT2) , (IEN | M5));  /* dispc2_data18 */
	MV(CP(USBB2_ULPITLL_DAT3) , (IEN | M5));  /* dispc2_data15 */
	MV(CP(USBB2_ULPITLL_DAT4) , (IEN | M5));  /* dispc2_data14 */
	MV(CP(USBB2_ULPITLL_DAT5) , (IEN | M5));  /* dispc2_data13 */
	MV(CP(USBB2_ULPITLL_DAT6) , (IEN | M5));  /* dispc2_data12 */
	MV(CP(USBB2_ULPITLL_DAT7) , (IEN | M5));  /* dispc2_data11 */
	MV(CP(USBB2_HSIC_DATA) , (PTD | OFF_EN | OFF_OUT_PTU | M3));  /* gpio_169 */
	MV(CP(USBB2_HSIC_STROBE) , (PTD | OFF_EN | OFF_OUT_PTU | M3));  /* gpio_170 */
	MV(CP(UNIPRO_TX0) , (PTD | IEN | M3));  /* gpio_171 */
	MV(CP(UNIPRO_TY0) , (OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_col1 */
	MV(CP(UNIPRO_TX1) , (OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_col2 */
	MV(CP(UNIPRO_TY1) , (OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_col3 */
	MV(CP(UNIPRO_TX2) , (PTU | IEN | M3));  /* gpio_0 */
	MV(CP(UNIPRO_TY2) , (PTU | IEN | M3));  /* gpio_1 */
	MV(CP(UNIPRO_RX0) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_row0 */
	MV(CP(UNIPRO_RY0) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_row1 */
	MV(CP(UNIPRO_RX1) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_row2 */
	MV(CP(UNIPRO_RY1) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_row3 */
	MV(CP(UNIPRO_RX2) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_row4 */
	MV(CP(UNIPRO_RY2) , (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1));  /* kpd_row5 */
	MV(CP(USBA0_OTG_CE) , (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M0));  /* usba0_otg_ce */
	MV(CP(USBA0_OTG_DP) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* usba0_otg_dp */
	MV(CP(USBA0_OTG_DM) , (IEN | OFF_EN | OFF_PD | OFF_IN | M0));  /* usba0_otg_dm */
	MV(CP(FREF_CLK1_OUT) , (M0));  /* fref_clk1_out */
	MV(CP(FREF_CLK2_OUT) , (PTU | IEN | M3));  /* gpio_182 */
	MV(CP(SYS_NIRQ1) , (PTU | IEN | M0));  /* sys_nirq1 */
	MV(CP(SYS_NIRQ2) , (PTU | IEN | M0));  /* sys_nirq2 */
	MV(CP(SYS_BOOT0) , (PTU | IEN | M3));  /* gpio_184 */
	MV(CP(SYS_BOOT1) , (M3));  /* gpio_185 */
	MV(CP(SYS_BOOT2) , (PTD | IEN | M3));  /* gpio_186 */
	MV(CP(SYS_BOOT3) , (M3));  /* gpio_187 */
	MV(CP(SYS_BOOT4) , (M3));  /* gpio_188 */
	MV(CP(SYS_BOOT5) , (PTD | IEN | M3));  /* gpio_189 */
	MV(CP(DPM_EMU0) , (IEN | M0));  /* dpm_emu0 */
	MV(CP(DPM_EMU1) , (IEN | M0));  /* dpm_emu1 */
	MV(CP(DPM_EMU2) , (IEN | M0));  /* dpm_emu2 */
	MV(CP(DPM_EMU3) , (IEN | M5));  /* dispc2_data10 */
	MV(CP(DPM_EMU4) , (IEN | M5));  /* dispc2_data9 */
	MV(CP(DPM_EMU5) , (IEN | M5));  /* dispc2_data16 */
	MV(CP(DPM_EMU6) , (IEN | M5));  /* dispc2_data17 */
	MV(CP(DPM_EMU7) , (IEN | M5));  /* dispc2_hsync */
	MV(CP(DPM_EMU8) , (IEN | M5));  /* dispc2_pclk */
	MV(CP(DPM_EMU9) , (IEN | M5));  /* dispc2_vsync */
	MV(CP(DPM_EMU10) , (IEN | M5));  /* dispc2_de */
	MV(CP(DPM_EMU11) , (IEN | M5));  /* dispc2_data8 */
	MV(CP(DPM_EMU12) , (IEN | M5));  /* dispc2_data7 */
	MV(CP(DPM_EMU13) , (IEN | M5));  /* dispc2_data6 */
	MV(CP(DPM_EMU14) , (IEN | M5));  /* dispc2_data5 */
	MV(CP(DPM_EMU15) , (IEN | M5));  /* dispc2_data4 */
	MV(CP(DPM_EMU16) , (M3));  /* gpio_27 */
	MV(CP(DPM_EMU17) , (IEN | M5));  /* dispc2_data2 */
	MV(CP(DPM_EMU18) , (IEN | M5));  /* dispc2_data1 */
	MV(CP(DPM_EMU19) , (IEN | M5));  /* dispc2_data0 */
	MV1(WK(PAD0_SIM_IO) , (IEN | M0));  /* sim_io */
	MV1(WK(PAD1_SIM_CLK) , (M0));  /* sim_clk */
	MV1(WK(PAD0_SIM_RESET) , (M0));  /* sim_reset */
	MV1(WK(PAD1_SIM_CD) , (PTU | IEN | M0));  /* sim_cd */
	MV1(WK(PAD0_SIM_PWRCTRL) , (M0));  /* sim_pwrctrl */
	MV1(WK(PAD1_SR_SCL) , (PTU | IEN | M0));  /* sr_scl */
	MV1(WK(PAD0_SR_SDA) , (PTU | IEN | M0));  /* sr_sda */
	MV1(WK(PAD1_FREF_XTAL_IN) , (M0));  /* # */
	MV1(WK(PAD0_FREF_SLICER_IN) , (M0));  /* fref_slicer_in */
	MV1(WK(PAD1_FREF_CLK_IOREQ) , (M0));  /* fref_clk_ioreq */
	MV1(WK(PAD0_FREF_CLK0_OUT) , (M2));  /* sys_drm_msecure */
	MV1(WK(PAD1_FREF_CLK3_REQ) , (M3));  /* gpio_wk30 */
	MV1(WK(PAD0_FREF_CLK3_OUT) , (M0));  /* fref_clk3_out */
	MV1(WK(PAD1_FREF_CLK4_REQ) , (PTU | IEN | M0));  /* # */
	MV1(WK(PAD0_FREF_CLK4_OUT) , (M0));  /* # */
	MV1(WK(PAD1_SYS_32K) , (IEN | M0));  /* sys_32k */
	MV1(WK(PAD0_SYS_NRESPWRON) , (M0));  /* sys_nrespwron */
	MV1(WK(PAD1_SYS_NRESWARM) , (M0));  /* sys_nreswarm */
	MV1(WK(PAD0_SYS_PWR_REQ) , (PTU | M0));  /* sys_pwr_req */
	MV1(WK(PAD1_SYS_PWRON_RESET) , (M3));  /* gpio_wk29 */
	MV1(WK(PAD0_SYS_BOOT6) , (IEN | M3));  /* gpio_wk9 */
	MV1(WK(PAD1_SYS_BOOT7) , (IEN | M3));  /* gpio_wk10 */
	MV1(WK(PAD1_FREF_CLK3_REQ),     (M3)); /* gpio_wk30 */
	MV1(WK(PAD1_FREF_CLK4_REQ),     (M3)); /* gpio_wk7 */
	MV1(WK(PAD0_FREF_CLK4_OUT),     (M3)); /* gpio_wk8 */ 
#endif
}

static struct ddr_regs ft701w_ddr = {
	.tim1		= 0x10eb065a,
	.tim2		= 0x20370dd2,
	.tim3		= 0x00b1c33f,
	.phy_ctrl_1	= 0x849FF408,
	.ref_ctrl	= 0x00000618,
	.config_init	= 0x80000eb1,
	.config_final	= 0x80001ab1,
	.zq_config	= 0x500b3215,
	.mr1		= 0x83,
	.mr2		= 0x4
};

void board_ddr_init(void)
{
	/* 1GB, 128B interleaved */
//	writel(0x80640300, DMM_BASE + DMM_LISA_MAP_0);
	writel(0x80540300, DMM_BASE + DMM_LISA_MAP_0);
	writel(0x00000000, DMM_BASE + DMM_LISA_MAP_2);
	writel(0xff020100, DMM_BASE + DMM_LISA_MAP_3);

#if 0
	if (get_omap_rev() >= OMAP_4460_ES1_DOT_0) {
		writel(0x80640300, MA_BASE + DMM_LISA_MAP_0);
		elpida2G_400mhz_2cs.phy_ctrl_1	= 0x449FF408;
	}
#endif

	omap4_ddr_init(&ft701w_ddr,
		       &ft701w_ddr);

}
