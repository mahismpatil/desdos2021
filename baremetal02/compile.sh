arm-none-eabi-as -mcpu=arm926ej-s -g startup.s -o startup.o
arm-none-eabi-gcc -c -mcpu=arm926ej-s -g entry.c -o entry.o
arm-none-eabi-ld -T cdac.ld entry.o startup.o -o smallprog.elf
arm-none-eabi-objcopy -O binary smallprog.elf smallprog.bin