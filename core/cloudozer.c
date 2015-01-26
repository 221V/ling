// Cloudozer's 2nd anniversary

#include "ling_common.h"
#include "time.h"

void cloudozer2(void)
{
	uint8_t promo_code[8+1];
	uint64_t now = monotonic_clock();
	uint8_t a = now % 10; now /= 10;
	uint8_t b = now % 10; now /= 10;
	uint8_t c = now % 10; now /= 10;
	uint8_t d = now % 10;
	promo_code[0] = a + '0';
	promo_code[1] = b + '0';
	promo_code[2] = c + '0';
	promo_code[3] = d + '0';
	promo_code[4] = 10 - a + '0';
	promo_code[5] = 10 - b + '0';
	promo_code[6] = 10 - c + '0';
	promo_code[7] = 10 - d + '0';
	promo_code[8] = 0;
	
	printk("========================================\n"
		   "|........CLOUDOZER IS 2 YEARS OLD......|\n"
		   "|..................._...__.............|\n"
		   "|.............^^.../.\\./..|.__.........|\n"
		   "|......./--...\\.|.|././._/./._|_.......|\n"
		   "|....../...\\..|.|.\\.\\_|.\\_//../.|......|\n"
		   "|.......\\-..\\-...-.........\\_/./.......|\n"
		   "|.........|....................\\.......|\n"
		   "|......../.../----_____.---\\....\\......|\n"
		   "|......./.../...............\\....\\___..|\n"
		   "|...___|...|....(O)...(O)....|.......|.|\n"
		   "|..|.......|...... ..........|......./.|\n"
		   "|..|.......|..\\____---__./../.....--'..|\n"
		   "|...\\__.....\\______________/.....|.....|\n"
		   "|.......\\.........................\\....|\n"
		   "|........\\....................._...\\...|\n"
		   "|.........|..___.........._...|..|..|..|\n"
		   "|.........|.|....\\../.\\..|..\\..\\.|..|..|\n"
		   "|..........\\.\\._..|.\\..|.|../..|.|_/...|\n"
		   "|............\\__|.|_/..\\_/...--........|\n"
		   "|......................................|\n"
		   "|.....Tweet: @erlang_on_xen %s...|\n"
		   "|.......First 10 get free T-shirts.....|\n"
		   "|......................................|\n"
		   "========================================\n", promo_code);
}

