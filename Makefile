NAME	= abstractVM

ar		= ar rc

CXX		= g++ -o abstractVM

SRCS	=   main.cpp\
			IO/IO.cpp\
			Chipset/Chipset.cpp\
			RAM/RAM.cpp\
			# CPU/Factory.cpp\
			# CPU/Operand.cpp\

OBJS := $(INPUT:.cpp.o)

# cxxflags.common := -Wall -Wextra -I./include
# cxxflags.debug := -g3 -D0
# cxxflags.tests := -fprofile-arcs -ftest-coverage

# LDFLAGS = 
# LDLIBS =

all: tool

tool:
	$(OBJS)
	$(CXX) $(SRCS)

# depend: .depend

# .depend: $(SRCS)
#     $(RM) ./.depend
#     $(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)
# distclean: clean
#     $(RM) *~ .depend
