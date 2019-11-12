pwd=${shell pwd}
src=./src
main=./main
src_c=${shell find $(src) -name "*.cpp"}
main_c=${shell find $(main) -name "*.cpp"}
objs=$(patsubst %.cpp,%.o,$(src_c) $(main_c))

CC=g++
INC=-I ${pwd}/src/
CFLAGS=${INC} -O -g #-Wl,-rpath=.  #--fast-math -Ofast -Wall -funroll-loops -DUSE_BLAS
libasr=test

all: ${objs} $(libasr)
	echo ${objs} ${cpp_objs}

${libasr}: ${objs}
	${CC}  $^ -o $@ ${CFLAGS}

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@  $<;

clean:
	rm ${objs} ${libasr}
