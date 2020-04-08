#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// leftrotate function definition
#define LEFTROTATE(x, c) (((x) << (c)) | ((x) >> (32 - (c))))

// define input variables file name or string
char ch, file_name[25];
FILE *fp;

// These variables are for the hash
uint32_t h0, h1, h2, h3;

void md5(uint8_t *initial_msg, size_t initial_len) {

	// Set message to null
	uint8_t *msg = NULL;
	//All variables are unsigned 32 bit and wrap modulo 2^32 when calculating

	// how much it shifts each round
	uint32_t r[] = { 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
			5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 4, 11, 16,
			23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 6, 10, 15, 21, 6,
			10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21 };

	//integers sines in radians * 2^32.
	uint32_t k[] = { 0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee, 0xf57c0faf,
			0x4787c62a, 0xa8304613, 0xfd469501, 0x698098d8, 0x8b44f7af,
			0xffff5bb1, 0x895cd7be, 0x6b901122, 0xfd987193, 0xa679438e,
			0x49b40821, 0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
			0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8, 0x21e1cde6,
			0xc33707d6, 0xf4d50d87, 0x455a14ed, 0xa9e3e905, 0xfcefa3f8,
			0x676f02d9, 0x8d2a4c8a, 0xfffa3942, 0x8771f681, 0x6d9d6122,
			0xfde5380c, 0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
			0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05, 0xd9d4d039,
			0xe6db99e5, 0x1fa27cf8, 0xc4ac5665, 0xf4292244, 0x432aff97,
			0xab9423a7, 0xfc93a039, 0x655b59c3, 0x8f0ccc92, 0xffeff47d,
			0x85845dd1, 0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
			0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391 };

	//state variables
	h0 = 0x67452301;
	h1 = 0xefcdab89;
	h2 = 0x98badcfe;
	h3 = 0x10325476;

	//pre-processing of initial message add 1 bit to message and fill with 0's until length = 448
	//append length in bits to end of message

	int new_len = ((((initial_len + 8) / 64) + 1) * 64) - 8;

	msg = calloc(new_len + 64, 1);
	memcpy(msg, initial_msg, initial_len);
	msg[initial_len] = 128;

	uint32_t bits_len = 8 * initial_len;
	memcpy(msg + new_len, &bits_len, 4);

	//pre-processing done
	int offset;
	for (offset = 0; offset < new_len; offset += (512 / 8)) {

		//seperate into 16 32-bit words
		uint32_t *w = (uint32_t*) (msg + offset);
	}
}

int main(int argc, char *argv[]) {

	// Expect and open a single filename.
	if (argc != 2) {
		printf("Error: expected single filename as argument.\n");
		return 1;
	}

	FILE *infile = fopen(argv[1], "r");
	if (!infile) {
		printf("Error: couldn't open file %s.\n", argv[1]);
		return 1;
	} else {
		printf("Hashing file");
		while (fgets(ch, 1000, fp) != NULL) {
			size_t len = strlen(ch);
			md5(ch, len);

			// display result
			/*
			 * uint8_t *p;
			 p = (uint8_t*) &h0;
			 printf("%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3], h0);

			 p = (uint8_t*) &h1;
			 printf("%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3], h1);

			 p = (uint8_t*) &h2;
			 printf("%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3], h2);

			 p = (uint8_t*) &h3;
			 printf("%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3], h3);*/
			fclose(fp);
			return 0;
		}

	}
}
