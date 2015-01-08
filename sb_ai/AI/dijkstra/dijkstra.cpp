#include <iostream>
#include "dijkstra.h"

using namespace std;

// PRIVATE


int Dijkstra::ConvertToIndex(Location xy)
{
	return xy.y * map_width + xy.x;
}

Location Dijkstra::ConvertToLocation(int n)
{
	Location xy;
	xy.x = n % map_width;
	xy.y = n / map_width;
	return xy; 
}

void Dijkstra::CheckBoundaries(Location neighbor, int current)
{
	if (neighbor.x < 0 || neighbor.x >= map_width || neighbor.y < 0 || neighbor.y >= map_height) {
		neighbor = ConvertToLocation(parent[current]);
	}
	return;
}


void Dijkstra::ReconstructPath()
{
	return;
}


	

// PUBLIC	


void Dijkstra::SetStart(int s)
{
	start = s;
	return;
}

void Dijkstra::SetGoal(int g)
{
	goal = g;
	return;
}

bool Dijkstra::Init(int * main_map, int width, int height)		// Executes the algorithm
{	
	// do a check to see if map, width, height, start, and goal are valid
	if (!map || width <= 0 || height <= 0 || start < 0 || goal < 0 
			|| start >= map_size || goal >= map_size)
		{ return false; }
	
	map = main_map;
	map_width = width;
	map_height = height;
	
	parent = new int[map_size];
	distance = new int[map_size];
	destination = -1;
	
	for (int i=0; i < map_size; i++) {
		parent[i] = -1;
		distance[i] = -1;
	}
	parent[start] = start;
	distance[start] = 0;
	
	return true;
}	


void Dijkstra::Search(int location) 
{
	if (start == goal) { return; }
	return;
}


int main()
{
	return 0;
}