#include<stdio.h>

//Making Function for Background Colour
void backcyan(){
    printf("\e[1;106m");
}
void blue(){
    printf("\e[0;34m");
}
//Making function for color
void yellow(){
  printf("\033[1;33m");
}
void red (){
  printf("\033[1;31m");
}
void white(){
    printf("\033[0;37m");
}
void cyan(){
    printf("\033[0;36m");
}
void green(){
    printf("\e[0;32m");
}
void reset(){
    printf("\e[0m");
}

int main(){
	 //Defining Variable 
    int l,b,size,age,id,L=6000,F=5000,H=9000,disc,costph,costpl,costpf;
    float discount;
	char prop;

	//Printing Real Estate 
	printf("\n");
    red();
	printf("        *************                *****  *****   ***   **        *****  ****  *****   ***   *****  *****                *************\n");
    yellow();
	printf("        *  **   **  *                *   *  *      *   *  **        *      *       *    *   *    *    *                    *  **   **  *\n");
    red();
    printf("        *  **   **  *********        *****  *****  *****  **        *****  ****    *    *****    *    *****       *********   **   **  *\n");
    yellow();
    printf("        *  **   **  * ***** *        * *    *      *   *  **        *         *    *    *   *    *    *           * ***** *   **   **  *\n");
    red();
    printf("        ***************   ***        *  *   *****  *   *  *****     *****  ****    *    *   *    *    *****       ***   ****************\n\n");
    white();
    printf("\n\n");

	//Priinting and Entering the data for Client
    backcyan();
	printf("\t\t\t\t---------------------------------CLient Details------------------------------\n\n");
    reset();
    green();
	printf("                                                   Enter Client ID: ");
	scanf("%d",&id);
	printf("                                                   Enter Client Age: ");
	scanf("%d",&age);
	printf("\n\n");

	//Printing and Entering the Details for the Real Estate Buyer Requirements
    reset();
    backcyan();
    printf("\t\t\t\t---------------------------Real Estate Cost Calculator-------------------------\n\n");
    reset();
    green();
    printf("\t\t\t\t\t    Enter Property Type Land(L) , Flat(F) , House(H) : ");
    scanf(" %c",&prop);
    printf("\t\t\t\t\t    Enter The Dimensions {Length and Breath} :         ");
    scanf("%d %d", &l,&b);
    
    printf("\n\n");

    //Algorithm for Calculating the Cost of Property
    if(prop=='L'){
        size = l * b;
        costpl = L * size;
    }
    else if(prop=='F'){
        size = l * b;
        costpf = F * size;
    }
    else if(prop=='H'){
        size = l * b;
        costph = H * size;
    }

    //Printng all the Details given in above Code
    reset();
    blue();
    printf("\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t|          Estimation of Property Cost         |\n");
    printf("\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t|    1: Property Type: %c                       |\n",prop);
    printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
    printf("\t\t\t\t\t|    2: Dimensions :   %d %d                     |\n",l,b);
    printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
    printf("\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t|       Estimate Property Cost Calcualted      |\n");
    printf("\t\t\t\t\t------------------------------------------------\n");
	if(age>=50 && prop=='L'){
    	disc = (costpl/100)*2;
        discount = disc+costpl;
		printf("\t\t\t\t\t|         %.2f                               |",discount);
	}
    else if(age<50 && prop=='L'){
        disc = ((costpl/100)*12);
        discount = disc+costpf;
		printf("\t\t\t\t\t|         %.2f                               |",discount);
    }
    else if(age>=50 && prop=='F'){
        printf("\t\t\t\t\t|         %d                                 |",costpf);
    }
    else if(age<50 && prop=='F' ){
        disc = (costpf/100)*10;
        discount = disc+costph;
		printf("\t\t\t\t\t|         %.2f                               |",discount);
    }
    else if(age>=50 && prop=='H'){
        printf("\t\t\t\t\t|         %d                                 |",costph);
    }
    else if(age<50 && prop=='H'){
    	disc = ((costph/100)*10);
        discount = disc+costph;
		printf("\t\t\t\t\t|         %.2f                               |",discount);
    }
    printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
    if(prop=='L'){
        printf("\t\t\t\t\t|              Government Approved             |\n");
	}
    else{
        printf("\t\t\t\t\t|           Government Not Approved            |\n");
	}
    printf("\t\t\t\t\t------------------------------------------------\n");

    return 0;
}




