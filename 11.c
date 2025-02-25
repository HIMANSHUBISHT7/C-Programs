#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Function to perform Depth-First Search (DFS) traversal
void DFS(int adjacencyMatrix[MAX_SIZE][MAX_SIZE], int startVertex, int vertices, int visited[]) {
    printf("%d ", startVertex);
    visited[startVertex] = 1;

    for (int i = 0; i < vertices; i++) {
        if (adjacencyMatrix[startVertex][i] == 1 && !visited[i]) {
            DFS(adjacencyMatrix, i, vertices, visited);
        }
    }
}

int main() {
    int vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    int adjacencyMatrix[MAX_SIZE][MAX_SIZE];
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &adjacencyMatrix[i][j]);
        }
    }

    int startVertex;
    printf("Enter the starting vertex: ");
    scanf("%d", &startVertex);

    int visited[MAX_SIZE] = { 0 }; // Array to keep track of visited vertices

    printf("DFS Traversal: ");
    DFS(adjacencyMatrix, startVertex, vertices, visited);
    printf("\n");

    return 0;
}
