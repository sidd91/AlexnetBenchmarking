.SUFFIXES:  .cpp .cu .o
CUDA_HOME := /usr/local/cuda
ROOT_DIR := ./
INC	:= -I$(ROOT_DIR)/inc -I.
LIB	:= -L$(ROOT_DIR)/lib -lOpenCL
CC	:= g++ 
DEP	:=  

DEF :=

all:	alexnet

alexnet:	alexnet_host.o $(DEP)
	$(CC) $(INC) -o Alexnet_opencl alexnet_host.o $(LIB)

.cpp.o:
	$(CC) $(INC) $(DEF) -c $< -o $@ 

.cu.o:
	$(CC) $(INC) $(DEF) -c $< -o $@

clean:
	rm -f *.o Alexnet_opencl
