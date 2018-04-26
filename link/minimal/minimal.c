char *str = "Hello Wolrd\n";

// 双%符号是用来扩展内联汇编代码，后面会跟input, output等
void print() {
    asm("movl $13, %%edx \n\t"
            "movl %0, %%ecx \n\t"
            "movl $0, %%ebx \n\t"
            "movl $4, %%eax \n\t"
            "int $0x80 \n\t"
            ::"r"(str):"edx","ecx","ebx");
}

// 如果不适用内联汇编的写法，直接使用单%符号即可
// 否则会报 bad register name '%%ecx' 错误
void exit() {
    asm("movl $42, %ebx \n\t"
            "movl $1, %eax \n\t"
            "int $0x80 \n\t");
}

void nomain() {
    print();
    exit();
}
