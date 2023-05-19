#include <string>
#include <iostream>
using namespace std;
class HousePlan
{
	public: 
	void setBasement(string basement);

	void setStructure(string structure);

	void setRoof(string roof);

	void setInterior(string interior);
};

class House : HousePlan
{

	private: 
		string basement;
	 string structure;
	 string roof;
	string interior;

	public: 
	House(){};
	void setBasement(string basement)
	{
		this->basement = basement;
	}

	void setStructure(string structure)
	{
		this->structure = structure;
	}

	void setRoof(string roof)
	{
		this->roof = roof;
	}

	void setInterior(string interior)
	{
		this->interior = interior;
	}

};


class HouseBuilder
{

	public: 
		void buildBasement(){};

	 void buildStructure(){};

	 void buildRoof(){};

	 void buildInterior(){};

	 House* getHouse(){return 7;};
};

class IglooHouseBuilder : public HouseBuilder
{
	private: 
		House* house;

	public: 
		IglooHouseBuilder()
	{
		this->house = new House();
	}

	 void buildBasement()
	{
		house->setBasement("Ice Bars");
	}

	 void buildStructure()
	{
		house->setStructure("Ice Blocks");
	}

	 void buildInterior()
	{
		house->setInterior("Ice Carvings");
	}

	 void buildRoof()
	{
		house->setRoof("Ice Dome");
	}

	 House* getHouse()
	{
		return this->house;
	}
};

class TipiHouseBuilder : public HouseBuilder
{
	private: 
		House* house;

	public: 
		TipiHouseBuilder()
	{
		this->house = new House();
	}

	 void buildBasement()
	{
		house->setBasement("Wooden Poles");
	}

	 void buildStructure()
	{
		house->setStructure("Wood and Ice");
	}

	 void buildInterior()
	{
		house->setInterior("Fire Wood");
	}

	 void buildRoof()
	{
		house->setRoof("Wood, caribou and seal skins");
	}

	House* getHouse()
	{
		return this->house;
	}

};

class CivilEngineer
{

	private: 
		HouseBuilder* houseBuilder;

	public: 
		CivilEngineer(HouseBuilder* houseBuilder)
	{
		this->houseBuilder = houseBuilder;
	}

	 House* getHouse()
	{
		return this->houseBuilder->getHouse();
	}

	 void constructHouse()
	{
		this->houseBuilder->buildBasement();
		this->houseBuilder->buildStructure();
		this->houseBuilder->buildRoof();
		this->houseBuilder->buildInterior();
	}
};

int main()
{
	
		HouseBuilder* iglooBuilder = new IglooHouseBuilder();
		CivilEngineer* engineer = new CivilEngineer(iglooBuilder);

		(*engineer).constructHouse();

		House* house = (*engineer).getHouse();

		cout<<"Builder constructed: "<< house << endl;

return 0;
}

