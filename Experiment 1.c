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

//Main Program
int main(){
	
    //Defining Variable 
    char prop;
    int l,b,cost,size,costp;

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

    //Printing and Entering the Details for the Real Estate Buyer Requirements
    backcyan();
    printf("\t\t\t\t---------------------------Real Estate Cost Calculator-------------------------\n\n");
    reset();
    green();
    printf("\t\t\t\t\t    Enter Property Type Land(L) , Flat(F) , House(H) : ");
    scanf("%c",&prop);
	printf("\n");
    printf("\t\t\t\t\t    Enter The Dimensions {Length and Breath} :         ");
    scanf("%d %d", &l,&b);
    printf("\n");
    printf("\t\t\t\t\t    Enter Cost Per Square Feet (ft) :                  ");
    scanf("%d",&cost);
    printf("\n\n");

    //Algorithm for Calculating the Cost of Property
    size = l * b;
    costp = cost * size;

    //Printng all the Details given in above Code
    reset();
    blue();
    printf("\t\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t\t|          Estimation of Property Cost         |\n");
    printf("\t\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t\t|    1: Property Type: %c                       |\n",prop);
    printf("\t\t\t\t\t\t|\t\t\t\t\t       |\n");
    printf("\t\t\t\t\t\t|    2: Dimensions :   %d %d                     |\n",l,b);
    printf("\t\t\t\t\t\t|\t\t\t\t\t       |\n");
    printf("\t\t\t\t\t\t|    3: Cost  Square Feet: %d                  |\n",cost);
    printf("\t\t\t\t\t\t|\t\t\t\t\t       |\n");
    printf("\t\t\t\t\t\t|    Estimate Cost of Property : $%d          |\n",costp);
    printf("\t\t\t\t\t\t|\t\t\t\t\t       |\n");
    if(cost<=100){
        printf("\t\t\t\t\t\t|              Government Approved             |\n");
    }
    else{
        printf("\t\t\t\t\t\t|           Government Not Approved            |\n");
    }
    printf("\t\t\t\t\t\t------------------------------------------------\n");

    return 0;
}

