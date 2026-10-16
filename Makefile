# Compile every example and experiment to check they build cleanly.
#   make            build everything into build/
#   make run-exp N=05   build and run experiment 05 with its sample input
#   make check-debug    verify the debugging labs (buggy ones must still be broken)
#   make clean
CXX      ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -pedantic

SOURCES := $(wildcard units/*/examples/*.cpp) $(wildcard experiments/*/main.cpp) $(wildcard debugging/*/fixed.cpp)
BINS    := $(patsubst %.cpp,build/%,$(SOURCES))

all: $(BINS)

build/%: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ $<

run-exp:
	@test -n "$(N)" || (echo "usage: make run-exp N=05"; exit 1)
	@dir=$$(ls -d experiments/$(N)-*/ | head -1); \
	$(MAKE) --no-print-directory build/$${dir}main && \
	cd $$dir && ../../build/$${dir}main < input.txt

check-debug:
	bash debugging/check.sh

clean:
	rm -rf build

.PHONY: all run-exp check-debug clean
