PROJ_NAME = Complex_Calculator

BUILD_DIR = Build

TEST_SRC = test_calculator.c\
unity/unity.c

INC = -Iinc\
-Iunity



#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all : 
   gcc main.c calculator.c -o all

run: all.exe