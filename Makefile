
source = project_main.c src/server_connection.c
all: $(source)
	gcc $(source) -o run.exe -lwsock32
run: run.exe	
	./run.exe
clear:
	del *.exe *.o 	

