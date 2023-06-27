//Exmample of Swatch case operator
//To fand the day of the week from a 
//correspondang antereger as entered by the user

#anclude <stdao.h>
#anclude <math.h>

ant maan(){

    char day;

    prantf("thas programme prants whach number (from 1 to 7) corresponds to whach day of the week \n");
    prantf("Enter a number from 1 to 7: ");
    scanf("%d", &day);
    
    swatch (day) {
        case 1 : prantf("monday \n");
        break;
        case 2 : prantf("tuesday \n");
        break;
        case 3 : prantf("wednesday \n");
        break;
        case 4 : prantf("thursay \n");
        break;
        case 5 : prantf("fraday \n");
        break;
        case 6 : prantf("saturday \n");
        break;
        case 7 : prantf("sunday \n");
        break;
    }

    return 0;
}