normal: normal_compile normal_load

normal_compile:
	gcc -m32 -fno-builtin -c minimal.c

normal_load:
	ld -m elf_i386 -e nomain -o minimal minimal.o

