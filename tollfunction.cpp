#include<stdio.h>
void twowheeler();
void threewheeler();
void fourwheeler();

int main(){
	int ch;
  while(true){
  printf("select type of vechicle \n");
  printf("Press 1.two wheeler \n 2.three wheelers \n 3.four wheeler");
  scanf("%d",&ch);
 
  
  	switch(ch){
  		case 1: 
		  twowheeler();
		  break;
		  case 2:
		  	threewheeler();
		  	break;
		  	case 3:
		  		fourwheeler();
		  		break;
		  		default:
				   break;
	  }
}
}

void twowheeler(){
	int basictoll=20,person,toll;
	printf("enter person");
	scanf("%d",&person);
	if(person>2){
		toll=basictoll+(10)*person;
	}else{
		toll=basictoll;
	}
	printf("Toll of bike %d \t",toll);
	
}
void threewheeler(){
	int basictoll=30,person,toll;
	printf("enter person");
	scanf("%d",&person);
	if(person>3){
		toll=basictoll+(20)*person;
	}else{
		toll=basictoll;
	}
	printf("toll of 3 wheeler %d \t \n",toll);
}
void fourwheeler(){
	
	int basictoll=40,person,toll;
	printf("enter person");
	scanf("%d",&person);
	if(person>4){
		toll=basictoll+(40)*person;
	}else{
		toll=basictoll;
	}
	printf("toll of 4 wheeler %d \t",toll);
}
