#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define V 5 // Number of vertices in the graph
#define E 8 // Number of edges in the graph

// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// Function to find the shortest paths from a source vertex using Bellman-Ford algorithm
void bellmanFord(struct Edge* edges, int src) {
    int distance[V];

    // Initialize distances from src to all other vertices as INFINITY
    for (int i = 0; i < V; i++) {
        distance[i] = INT_MAX;
    }
    distance[src] = 0; // Distance from source to itself is 0

    // Relax all edges |V| - 1 times
    for (int i = 0; i < V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].src;
            int v = edges[j].dest;
            int weight = edges[j].weight;
            if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
            }
        }
    }

    // Check for negative-weight cycles
    for (int i = 0; i < E; i++) {
        int u = edges[i].src;
        int v = edges[i].dest;
        int weight = edges[i].weight;
        if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
            printf("Graph contains negative-weight cycle.\n");
            return;
        }
    }

    // Print the distances from source vertex
    printf("Shortest distances from source vertex %d:\n", src);
    for (int i = 0; i < V; i++) {
        printf("Vertex %d -> Distance: %d\n", i, distance[i]);
    }
}

int main() {
    // Example graph represented as an array of edges
    struct Edge edges[E] = {
        {0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2},
        {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}
    };

    int sourceVertex = 0; // Source vertex

    // Apply Bellman-Ford algorithm for shortest paths from sourceVertex
    bellmanFord(edges, sourceVertex);

    return 0;
}
