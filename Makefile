NAME	= Abstractvm

ar		= ar rc

CXX		= g++

SRCS	= main.cpp\
			IOperand/IOperand.cpp\
			IOperand/IOperand.hpp

OBJS := $(INPUT:.cpp.o)

cxxflags.common := -Wall -Wextra -I./include
cxxflags.debug := -g3 -D0
cxxflags.tests := -fprofile-arcs -ftest-coverage

LDFLAGS = 
LDLIBS =

all: tool

tool: $(OBJS)
    $(CXX) $(LDFLAGS) -o tool $(OBJS) $(LDLIBS)

depend: .depend

.depend: $(SRCS)
    $(RM) ./.depend
    $(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
    $(RM) $(OBJS)

distclean: clean
    $(RM) *~ .depend