# Makefile for AVR function library development and examples
# Author: Pascal Stang
#
# For those who have never heard of makefiles: a makefile is essentially a
# script for compiling your code.  Most C/C++ compilers in the world are
# command line programs and this is even true of programming environments
# which appear to be windows-based (like Microsoft Visual C++).  Although
# you could use AVR-GCC directly from the command line and try to remember
# the compiler options each time, using a makefile keeps you free of this
# tedious task and automates the process.
#
# For those just starting with AVR-GCC and not used to using makefiles,
# I've added some extra comments above several of the makefile fields which
# you will have to deal with.

# location of the ps2avrW core files

	PS2AVR_DIR = ../core

########### change these lines according to your project ##################
#specify the target mcu here (at90s8515, at90s8535, attiny22, atmega603 etc.)
	MCU = atmega324pa
#	MCU = atmega161
#	MCU = atmega128

#specify the CPU clock speed here
	F_CPU = 12000000        # 12MHz processor
#	F_CPU = 16000000        # 16MHz processor
#	F_CPU = 14745000        # 14.745MHz processor
#	F_CPU = 8000000         # 8MHz processor
#	F_CPU = 7372800         # 7.37MHz processor
#	F_CPU = 1000000         # 1MHz processor
#	F_CPU = 4000000         # 4MHz processor
#	F_CPU = 3686400         # 3.69MHz processor

#put the name of the target file here (without extension)
#  Your "target" file is your C source file that is at the top level of your code.
#  In other words, this is the file which contains your main() function.

	TRG = obsolete60

#put your C source files here
#  Here you must list any C source files which are used by your target file.
#  They will be compiled in the order you list them, so it's probably best
#  to list $(TRG).c, your top-level target file, last.

	SRC = matrix.c $(TRG).c

#put additional assembler source file here
#  The ASRC line allows you to list files which contain assembly code/routines that
#  you would like to use from within your C programs.  The assembly code must be
#  written in a special way to be usable as a function from your C code.

	ASRC =

# include the ps2avrW core
VPATH += $(PS2AVR_DIR)
include $(PS2AVR_DIR)/ps2avr.mk

#TODO: generalise this
prog: all
	avrdude -p m32 -c stk500v2 -P com2 -U flash:w:$(TRG).hex:i
