#include "tube.h"

Tube::Tube(){
	col1 = "";
	col2 = "";
	col3 = "";
	col4 = "";
}

Tube::Tube(string color1, string color2, string color3, string color4){
	water = {"","","",""};
}

Tube::string getTopColor(){
	
	return water[3];
}

Tube::void addWater(string color){
	for (int i = 0; i < 4 ; i++){
		if (water[i] == ""){
			water[i] = color;
			return
		}
	}
}
Tube:void pour(){
	if (water[3] == water[2]){
		water[3] = "";
		water[2] = "";
		if (water[2] == water[1]){
			water[1] = "";
			if (water[1] == water[0]){
				water[0] ="";
			}
		}
	}
	else
		water[3] = "";
}
				
	
		
