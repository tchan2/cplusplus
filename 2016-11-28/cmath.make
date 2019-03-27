cmath_l20 cmath_l20.o complex_3.o:
	c++ -o cmath_l20 cmath_l20.o complex_3.o
cmath_h23.o: cmath_l20.cpp complex_3.h
	c++ -o cmath_l20.cpp
complex_3.o: complex_3.cpp
	c++ c complex_3.cpp
clear:
	run -rf *.o *~core*\#*\#*.txt
