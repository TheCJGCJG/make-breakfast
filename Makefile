.PHONY: all
all: breakfast

breakfast: breakfast.c
	g++ -o breakfast breakfast.c