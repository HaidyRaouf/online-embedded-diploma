#prepared by: Haidy Raouf
CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS= -I .
LIBS=
SRC=$(wildcard *.c)
OBJ= $(SRC: .c=.o)
AS=$(wildcard *.S)
ASOBJ=$(AS: .S=.o)
project_name=learn-in-depth

all: $(project_name).bin
    @echo "Build is Done"
	
%.o: %.c 
	$(CC)gcc.exe  $(CFLAGS) -c $(INCS) $< -o $@

startup.o: startup.s
    $(CC)as.exe   $(CFLAGS) $< -o $@

$(project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe   -T linker script.ld $(LIBS)  $(OBJ) $(ASOBJ) -o $@

$(project_name).bin: $(project_name).elf
     $(CC)objcopy.exe -O binary $< $@

clean_all:
     rm  *.elf *.bin *.o
	 
clean: 
    rm  *.elf *.bin
