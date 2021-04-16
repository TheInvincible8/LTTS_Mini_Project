source = src/server_connection.c
test_source = src/server_connection.c test/test.c unity/unity.c
INC_H = inc
INC_T = unity
.PHONY: all test clean
all: $(source)
	gcc -I$(INC_H) $(source) project_main.c  -o run.exe -lwsock32
run: run.exe	
	./run.exe
test:
	gcc -I$(INC_H) -I$(INC_T) $(test_source) -o test.exe -lwsock32
	./test.exe
	
clear:
	del *.exe *.o 	

