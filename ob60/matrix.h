#ifndef MATRIX_H
#define MATRIX_H
#include <avr/pgmspace.h>
#include <../core/keymap.h>

const uint8_t PROGMEM keymap_code[2][17][8] =  { // First number is how many keymaps you have; second is the number of rows; third is the number of columns
{
		// set 0 : normal
		 // COL0		COL1		COL2		COL3		COL4		COL5			COL6			COL7
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_LCTRL,	KEY_LSHIFT,	KEY_FN,			KEY_TAB,		KEY_ESC },		// ROW0
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_LGUI,	KEY_BKSLASH,KEY_A,			KEY_Q,			KEY_1 },		// ROW1
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_LALT,	KEY_Z,		KEY_S,			KEY_W, 			KEY_2 },		// ROW2
		{ KEY_NONE,		KEY_NONE, 	KEY_NONE,	KEY_SPACE, 	KEY_X,		KEY_D,			KEY_E, 			KEY_3 },		// ROW3
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_RALT,	KEY_C,		KEY_F,			KEY_R,			KEY_4 },		// ROW4
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_FN,		KEY_V,		KEY_G,			KEY_T,			KEY_5 },		// ROW5
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_RCTRL, 	KEY_B,		KEY_H,			KEY_Y,			KEY_6 },		// ROW6
		{ KEY_NONE,		KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_N,		KEY_J,			KEY_U, 			KEY_7 },		// ROW7
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_M,		KEY_K,			KEY_I,			KEY_8}, 		// ROW8
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_COMMA,	KEY_L,			KEY_O,			KEY_9},			// ROW9
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_DOT,	KEY_COLON,		KEY_P, 			KEY_0},			// ROW10
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_SLASH,	KEY_QUOTE,		KEY_LBR,		KEY_MINUS }, 	// ROW11
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_RSHIFT,	KEY_HASH,		KEY_RBR, 		KEY_EQUAL }, 	// ROW12
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,		KEY_ENTER,		KEY_BKSP }, 	// ROW13
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE, 	KEY_NONE,	KEY_NONE,		KEY_NONE,		KEY_NONE },		// ROW14
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,		KEY_NONE,		KEY_NONE }, 	// ROW15
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,		KEY_NONE,		KEY_NONE }		// ROW16
	},
	
		// set 1 : FN Layer 
		 // COL0		COL1		COL2		COL3		COL4		COL5		COL6		COL7
	{	{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_LCTRL,	KEY_LSHIFT,	KEY_FN,			KEY_TAB,		KEY_ESC },		// ROW0
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_LGUI,	KEY_CAPS,	KEY_PLAY,		KEY_MUTE,		KEY_F1 },		// ROW1
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_LALT,	KEY_Z,		KEY_PREV_TRK,	KEY_VOL_DOWN,	KEY_F2 },		// ROW2
		{ KEY_NONE,		KEY_NONE, 	KEY_NONE,	KEY_SPACE, 	KEY_X,		KEY_NEXT_TRK,	KEY_VOL_UP, 	KEY_F3 },		// ROW3
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_RALT,	KEY_C,		KEY_F,			KEY_R,			KEY_F4 },		// ROW4
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_FN,		KEY_V,		KEY_G,			KEY_T,			KEY_F5 },		// ROW5
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_RCTRL, 	KEY_B,		KEY_H,			KEY_PRNSCR,		KEY_F6 },		// ROW6
		{ KEY_NONE,		KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_N,		KEY_LEFT,		KEY_U, 			KEY_F7 },		// ROW7
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_M,		KEY_DOWN,		KEY_UP,			KEY_F8}, 		// ROW8
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_COMMA,	KEY_RIGHT,		KEY_O,			KEY_F9},		// ROW9
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_DOT,	KEY_PGDN,		KEY_PGUP, 		KEY_F10},		// ROW10
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_SLASH,	KEY_END,		KEY_HOME,		KEY_F11 }, 		// ROW11
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_RSHIFT,	KEY_HASH,		KEY_RBR, 		KEY_F12 }, 		// ROW12
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,		KEY_ENTER,		KEY_DEL }, 		// ROW13
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE, 	KEY_NONE,	KEY_NONE,		KEY_NONE,		KEY_NONE },		// ROW14
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,		KEY_NONE,		KEY_NONE }, 	// ROW15
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,		KEY_NONE,		KEY_NONE }		// ROW16
	};
	
}

// function that determine keymap
uint8_t get_keymap(void) {
	uint8_t col, row, keyidx, cur;
	for(col=0;col<8;col++)
		for(row=0;row<17;row++) {
			keyidx = pgm_read_byte(&keymap_code[0][row][col]);
			if(keyidx == KEY_FN) {
				cur = 0;
				DDRB  = BV(col);
				PORTB = ~BV(col);

				delay_us(1);

				if(row<8)	{				// for 0..7, PORTA 0 -> 7
					cur = (~PINA)&BV(row);
				}
				else if(row>=8 && row<16) {	// for 8..15, PORTC 7 -> 0
					cur = (~PINC)&BV(15-row);
				}
				else {						// for 16..18, PORTD 7 -> 5
					cur = (~PIND)&BV(23-row);
				}

				if(cur)
					return 1;
			}
		}
	uint8_t keymap = ((~PIND)&0b01000000)>>6;

	if(keymap)
		return 1;
	else
		return 0;
}

	// debounce cleared => compare last matrix and current matrix
	for(col=0;col<8;col++)
	{
		for(row=0;row<17;row++)
		{
			prev = MATRIX[row]&BV(col);
			cur  = curMATRIX[row]&BV(col);
			keyidx = pgm_read_byte(&keymap_code[keymap][row][col]);

			if(!(prev&&cur) && !(!prev&&!cur) && keyidx!=KEY_NONE) {
				if(cur) {
					putKey(keyidx, 1);
					svkeyidx[row][col] = keyidx;
				}
				else {
					putKey(svkeyidx[row][col], 0);
				}
			}	
		}
	}

	for(row=0;row<17;row++) 
		MATRIX[row] = curMATRIX[row];
	prev_keymap = keymap;

	return 1;
}
#endif//MATRIX_H
