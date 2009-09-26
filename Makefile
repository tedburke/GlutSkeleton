GlutSkeleton.exe: main.o
	gcc -o GlutSkeleton.exe main.o glut32.lib -lopengl32

main.o: main.c
	gcc -c main.c
