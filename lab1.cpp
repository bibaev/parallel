#include <mpi.h>
#include <iostream>

int main(int argc, char** argv) {
	int rank, size;
	char hostname[50];
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Finalize();
}