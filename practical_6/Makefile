CComp = gcc
CCFLAGS = -O3 
LDFLAGS = -lm 

all: matmulc
matmulc: main.o matrixmul.o 
	$(CComp) -o $@ $^ $(LDFLAGS)

matrixmul.o: matrixmul.c
	$(CComp) -c $(CCFLAGS) $< 

main.o: main.c
	$(CComp) -c $(CCFLAGS) $<

clean:
	rm *.o