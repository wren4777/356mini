# Core Makefile for ps2avrW to be included by keyboard project makefiles.

	AVRLIB = ../avrlib

#source files
	SRC += keymain.c keysta.c timer.c

#assembler flags
	ASFLAGS = -Wa, -gstabs

#compiler flags
	CPFLAGS	= -g -Os -Wall -Wstrict-prototypes \
	          -I$(AVRLIB) -I$(PS2AVR_DIR) \
	          -DF_CPU=$(F_CPU) \
	          -Wa,-ahlms=$(<:.c=.lst) -Wno-deprecated-declarations \
	          -D__PROG_TYPES_COMPAT__

#linker flags
	LDFLAGS = -Wl,-Map=$(TRG).map,--cref
#	LDFLAGS = -Wl,-Map=$(TRG).map,--cref -lm


########### you should not need to change the following line #############
VPATH += $(AVRLIB)
include $(AVRLIB)/make/avrproj_make
		  
###### dependecies, add any dependencies you need here ###################
#  Dependencies tell the compiler which files in your code depend on which
#  other files.  When you change a piece of code, the dependencies allow
#  the compiler to intelligently figure out which files are affected and
#  need to be recompiled.  You should only list the dependencies of *.o 
#  files.  For example: uart.o is the compiled output of uart.c and uart.h
#  and therefore, uart.o "depends" on uart.c and uart.h.  But the code in
#  uart.c also uses information from global.h, so that file should be listed
#  in the dependecies too.  That way, if you alter global.h, uart.o will be
#  recompiled to take into account the changes.

keysta.o    : keysta.c      common_inc.h    global.h    keysta.h    timer.h
keymain.o   : keymain.c     common_inc.h    global.h    keysta.h    timer.h     keymap.h
$(TRG).o    : $(TRG).c      common_inc.h    global.h
