gcc -Wall -g -c -o src/beaglebone.o src/beaglebone.c
gcc -Wall -g -c -o src/beaglepins.o src/beaglepins.c
ar rcs lib/libbeaglebone.a src/beaglebone.o src/beaglepins.o
cp lib/libbeaglebone.a /usr/lib
cp include/beaglebone.h /usr/include
cp include/mainloop.h /usr/include
cp include/beaglepins.h /usr/include