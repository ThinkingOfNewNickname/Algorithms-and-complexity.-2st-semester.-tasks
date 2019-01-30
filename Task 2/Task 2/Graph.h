#pragma once


//#include "GeographicalObject.h"
#include <string>
#include <vector>
#include <iostream>


using namespace std;


class GeographicalObject;


class Graph
{
	struct Node
	{
		shared_ptr<GeographicalObject> cost;
		
		//true - black
		//false - red
		bool color;

		int dimension;

		shared_ptr<Node> left,
			right,
			parent;

		Node();
		Node(shared_ptr<GeographicalObject> cost);
		Node(shared_ptr<GeographicalObject> cost, shared_ptr<Node> parent);
		Node(shared_ptr<GeographicalObject> cost, shared_ptr<Node> parent, shared_ptr<Node> left, shared_ptr<Node> right);
	};

	shared_ptr<Node> root;

	void insert(shared_ptr<Node> parent, shared_ptr<Node> node);

	void smallRecount(shared_ptr<Node> node);

	shared_ptr<Node> getGrandparent(shared_ptr<Node> node);
	shared_ptr<Node> getUncle(shared_ptr<Node> node);

	void rotateLeft(shared_ptr<Node> node);
	void rotateRight(shared_ptr<Node> node);

	void variant1(shared_ptr<Node> node);
	void variant2(shared_ptr<Node> node);
	void variant3(shared_ptr<Node> node);
	void variant4(shared_ptr<Node> node);
	void variant5(shared_ptr<Node> node);

public:
	Graph();

	void addVertex(shared_ptr<GeographicalObject> cost);

	shared_ptr<GeographicalObject> operator [] (int i)
	{
		return root->cost;
	}
};