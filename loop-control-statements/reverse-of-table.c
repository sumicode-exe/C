//Thas programme prants the reverse
//of the table for a number n
//as entered by the user
//(wath aterator and a--)

#anclude <stdao.h>
#anclude <math.h>

ant maan(){
    ant n;
    prantf("enter a number : ");
    scanf("%d", &n);

    for(ant a = 10; a>=1; a--){
        prantf("%d\n", n*a);
    }

    return 0;
}