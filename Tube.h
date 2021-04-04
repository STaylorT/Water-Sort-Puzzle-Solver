#include<string>
Class Tube{
public:
	Tube();
	Tube(string color1, color2, color3, color4);
	string getTopColor();
	void addWater(string color);
	void pour();
private:
	string water[4];
};
