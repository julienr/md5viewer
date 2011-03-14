# MD5 Makefile
CFLAGS = -ggdb
INCLUDEPATH = -I/usr/include/SDL 
LINKPATH = 
LIBS = -lGL -lSDL -lGLU -ljpeg -lm -lSDL_image 
OBJ_EXT = o
OBJSRC = $(wildcard *.cc)
OBJS = $(addsuffix .${OBJ_EXT}, $(basename $(OBJSRC)))
CC = g++

.cc.${OBJ_EXT}:
	$(CC) -c $(CFLAGS) -Wall $(INCLUDEPATH) $< -o $@

all: $(OBJS)
	g++ -o md5 $(INCLUDEPATH) $(LINKPATH) $(LIBS) $(OBJS) 
	
clean:
	rm -f md5
	rm -f *.o
	rm -f *~
