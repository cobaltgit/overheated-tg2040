PRGNAME     = game.elf
CC			:= arm-linux-gcc
SYSROOT = $(shell $(CC) -print-sysroot)
RESOURCE_FOLDER = data/

SRCDIR		= src
VPATH		= $(SRCDIR)
SRC_C		= $(foreach dir, $(SRCDIR), $(wildcard $(dir)/*.c))
OBJ_C		= $(notdir $(patsubst %.c, %.o, $(SRC_C)))
OBJS		= $(OBJ_C)

CFLAGS		= -Ofast -marm -mcpu=cortex-a7 -mtune=cortex-a7 -mfpu=neon-vfpv4 -mfloat-abi=hard -Isrc $(shell $(SYSROOT)/usr/bin/sdl-config --cflags) -s
CFLAGS		+= -DGCW0 -DLINUX

CXXFLAGS = $(CFLAGS)

LDFLAGS     =  -lc -lSDL -lm -lSDL_mixer

# Rules to make executable
$(PRGNAME): $(OBJS)  
	$(CC) $(CFLAGS) -o $(PRGNAME) $^ $(LDFLAGS)

$(OBJ_C) : %.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(PRGNAME) *.o
