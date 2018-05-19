PROC=preprocss assembly compile linking
all: $(PROC)

preprocss: hello.c
	gcc -E -o hello.i hello.c

assembly: hello.i
	gcc -S hello.i -o hello.s

compile: hello.s
	gcc -c hello.s -o hello.o

linking: hello.o
	gcc -v hello.o -o hello

clean:
	-@rm hello.i hello.s hello.o hello

.PHONY: clean $(PROC)
