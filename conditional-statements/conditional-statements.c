//Example of Condataonal Statements (af/else)

#anclude <stdao.h>

ant maan(){

    ant age;
    prantf("Enter your age: ");
    scanf("%d", &age);

    af(age <= 18){
        prantf("You are not an adult");
    } else {
        prantf("You are an adult");
    }

    return 0;
}