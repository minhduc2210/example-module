CPP=g++
TARGET=main
OBJ=Point.o	Color.o	main.o
DEPS=Color.h	Point.h

$(TARGET): $(OBJ)
	$(CPP)	-o	$@	$(OBJ)
%.o: %.cpp	(DEPS)
	$(CPP)	-c	$<
clean:
	rm	-f	$(TARGET)	$(OBJ)
