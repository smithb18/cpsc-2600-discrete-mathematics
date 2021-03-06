// NAME: Ben Smith
// FILE: Graph.h
// DESCRIPTION: Definition of the Graph class.

#ifndef GRAPH_H
#define GRAPH_H

#include "QueueInt.h"
#include "StackInt.h"

class Graph {

  public:
    Graph();		// constructor
    ~Graph();		// destructor

    // Load the graph from a file
    void load(char *filename);

    // Display the adjacency matrix
    void display() const;

    // Display the depth first search from the given vertex
    void displayDFS(int vertex) const;

    // Display the breadth first search from the given vertex
    void displayBFS(int vertex) const;

    // Compute the cost of a minimum spanning tree.
    int computeMSTCost() const;

  private:
    // TODO: Complete the private section of the class.
    int** agencyArray;
    int* visited;
    int matrixSize;
    void dfs(int vertex, StackInt dfsStack) const;
    void initalizeMatrix(int matrixSize);
    void initalizeCheckArray(int matrixSize);
};

#endif
