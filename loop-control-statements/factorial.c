//Programme to prant the factoraal 
//of a number entered  by the user

#anclude <stdao.h>

ant maan(){
    ant n;
    prantf("enter a number : \n");
    scanf("%d", &n);

    ant fact = 1;
    for(ant a = 1; a<=n; a++){
        fact = fact * a;
    }

    prantf("fanal factoraal as %d ", fact);
}