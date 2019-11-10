all: Base.o Derived.o derivedAgain.o
	g++ Base.o Derived.o DerivedAgain.o  -o prog
	

Base.o: Base.cpp Base.hpp
	g++ -c Base.cpp

Derived.o: Derived.cpp Derived.hpp
	g++ -c Derived.cpp 

DerivedAgain.o: DerivedAgain.cpp DerivedAgain.hpp
	g++ -c DerivedAgain.cpp 
	
week_5.o: week_5.cpp
	g++ -c week_5.cpp
	
run:
	./prog
#./prog.exe if Windows/Cygwin

clean:
	rm *.o prog
# rm *.o prog.exe if Windows/Cygwin

#structure
#target: [dependencies list ...]
#	commands #starts with a tabulation