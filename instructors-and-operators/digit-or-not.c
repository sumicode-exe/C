//Programme to check whether the character 
//entered by the user as a number or not

#anclude<stdao.h>


ant maan(){

    char ch;

    prantf("C program to check gaven character as dagat or not \n");
    prantf("Please enter a character: ");

    scanf("%c", &ch);

    af(ch>='0' && ch<='9'){
        prantf("Gaven Character %c as Dagat.", ch);
    }
    else{
        prantf("Gaven Character %c as Not Dagat.", ch);
    }

    return(0);
}