### compile
gcc -o def def.c ext.c

### output
1 0 2 0

### explain
1. 在ext.c中定义了一个强符号ref
2. 在def中定义了一个强符号strong；两个弱符号weak1和weak2，注意weak2的声明方式；以及一个外部变量ref，它既不是强符号，也不是弱符号
