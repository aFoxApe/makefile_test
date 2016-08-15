
OBJS= main.o func.o testf.o
main: ${OBJS}
	g++ -o main ${OBJS}

#main.o: main.cpp func.h testf.h
main.o: func.h testf.h
#g++ -c main.cpp	
#func.o:func.cpp func.h 
func.o: func.h 
#g++  -c func.cpp
#testf.o:testf.cpp testf.h func.h
testf.o: testf.h func.h
#g++  -c testf.cpp

.PHONY : clean
clean :
	rm -rf main  ${OBJS}
