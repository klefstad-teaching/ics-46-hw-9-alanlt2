#include "dijkstras.h"
int main(){
    Graph G;
    file_to_graph("./src/small.txt", G); 
    int source = 0;
    vector<int> previous;
    vector<int> distances = dijkstra_shortest_path(G, source, previous);
    for (int destination = 0; destination < G.numVertices; ++destination) {
        if (destination == source) continue;
        vector<int> path = extract_shortest_path(distances, previous, destination);
        if (distances[destination] == INF) {
            cout << "No path to vertex " << destination << endl;
        } else {
            print_path(path, distances[destination]);
        }
    }
    return 0;
}
