OBJS = main.cpp Point2D.o HE_edge.o HE_vert.o HE_face.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) --pedantic
LFLAGS = -Wall $(DEBUG) --pedantic
TARGET = main

$(TARGET):$(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)
Point2D.o : Point2D.h Point2D.cpp
	$(CC) $(CFLAGS) Point2D.cpp
HE_edge.o: Point2D.h HE_edge.hh HE_vert.hh HE_face.hh HE_edge.cpp
	$(CC) $(CFLAGS) HE_edge.cpp
HE_vert.o: Point2D.h HE_edge.hh HE_vert.hh HE_vert.cpp
	$(CC) $(CFLAGS) HE_vert.cpp
HE_face.o: Point2D.h HE_edge.hh HE_vert.hh HE_face.hh HE_face.cpp
	$(CC) $(CFLAGS) HE_face.cpp
Delaunay.o: Point2D.h HE_edge.hh HE_vert.hh HE_face.hh Delaunay.hh Delaunay.cpp
	$(CC) $(CFLAGS) Delaunay.cpp
clean:
	rm -f *.o $(TARGET)
