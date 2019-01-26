#pragma once


#include <string>
#include <vector>
#include <iostream>


using namespace std;


class GeographicalObject
{
	string name;
	string additionalInformation;

	vector<shared_ptr<GeographicalObject> > ownedObjects;

public:
	GeographicalObject();
	GeographicalObject(string name, string additionalInformation, vector<shared_ptr<GeographicalObject> > &ownedObjects);

	void setName(string name);
	void setName(string &name);
	string getName();

	void setAdditionalInformation(string additionalInformation);
	void setAdditionalInformation(string &additionalInformation);
	string getAdditionalInformation();

	void setOwnedObjects(vector<shared_ptr<GeographicalObject> > &ownedObjects);
	vector<shared_ptr<GeographicalObject> > &getOwnedObjects();

};