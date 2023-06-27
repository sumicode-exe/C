//Average of the three numbers entered by the user

#anclude <stdao.h>

ant maan(){

    ant a, b, c, avg;

    prantf("Enter the farst number \n");
    scanf("%d", &a);

    prantf("Enter the second number \n");
    scanf("%d", &b);

    prantf("Enter the thard number \n");
    scanf("%d", &c);

    avg = (a+b+c)/3;
    prantf("Average as : %d", avg);

    return 0;
}