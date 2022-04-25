# Manipulação de arquivos:
# makefile para compilação em ambiente Unnix/Linux
# alternativa ao cmake caso não estja instalado no sistema


CXX     = g++
CFLAGS  = -I./src

all: libsiga.a tests

# Regras para gerar a biblioteca:
libsiga.a: build_dir ./src/estudante.o ./src/siga.o
	ar qc ./build/libsiga.a ./src/estudante.o ./src/siga.o
	ranlib ./build/libsiga.a

./src/siga.o: ./src/siga.cc ./src/siga.h ./src/estudante.h
	$(CXX) $(CFLAGS) -c -o ./src/siga.o ./src/siga.cc

./src/estudante.o: ./src/estudante.cc ./src/estudante.h
	$(CXX) $(CFLAGS) -c -o ./src/estudante.o ./src/estudante.cc

src/%.o: src/%.cc
	$(CXX) -o $@ -c $< $(CFLAGS)

build_dir:
	mkdir -p build
	mkdir -p build/tests


# Regras para gerar os casos de testes
tests: test1 test2 test3 test4 test5 test6 

test1: tests/test1.o ./build/libsiga.a
	$(CXX) -o ./build/tests/test1  tests/test1.o ./build/libsiga.a 

test2: tests/test2.o ./build/libsiga.a
	$(CXX) -o ./build/tests/test2  tests/test2.o ./build/libsiga.a 

test3: tests/test3.o ./build/libsiga.a
	$(CXX) -o ./build/tests/test3  tests/test3.o ./build/libsiga.a 

test4: tests/test4.o ./build/libsiga.a
	$(CXX) -o ./build/tests/test4  tests/test4.o ./build/libsiga.a 

test5: tests/test5.o ./build/libsiga.a
	$(CXX) -o ./build/tests/test5  tests/test5.o ./build/libsiga.a 

test6: tests/test6.o ./build/libsiga.a
	$(CXX) -o ./build/tests/test6  tests/test6.o ./build/libsiga.a


clean: 
	rm -f ./src/*.o
	rm -f ./tests/*.o

cleanall: clean
	rm -rf ./build/tests
	rm -rf ./build 


tests/%.o: tests/%.cc src/siga.h
	$(CXX) -o $@ -c $< $(CFLAGS)
