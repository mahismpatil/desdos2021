arm-none-eabi-as -g -o startup.o startup.s
arm-none-eabi-ld -o firstboot.elf startup.o