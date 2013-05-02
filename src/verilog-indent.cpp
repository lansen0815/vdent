#include <iostream>
#include <getopt.h>
#include "Indenter.h"


int main(int argc, char* argv[])
{
	int opt;
	while ((opt = getopt(argc, argv, "h")) != -1) {
		switch (opt) {
		case 'h':
		default: /* '?' */
			fprintf(stderr, "Usage: %s < input.v [ > output.v ]\n", argv[0]);
			exit(EXIT_FAILURE);
		}
	}


	Indenter* indenter = new Indenter();

	indenter->process(&std::cin, &std::cout);

	delete indenter;

	return 0;
}