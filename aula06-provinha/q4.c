#include<stdio.h>

int main(int argc, char *argv[]){
   
    float n1, n2, n3, n4, p3;
    float media, media2;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = (n1*2 + n2*3 + n3*4 + n4*1)/(2+3+4+1);

    printf("Media :%f", media);
    if(media >= 7) printf("Aluno aprovado\n");
    else if(media < 5) printf("Aluno reprovado\n");
    else {
        printf("Aluno em P3\n");
        scanf("%f",&p3);
        printf("Nota do exame: %f\n", p3);
        
        media2 = (media + p3)/2;
        if(media2 >= 5) printf("Aluno aprovado\n");
        else printf("Aluno reprovado\n");

        printf("Media final: %f", media2);

    }

    

    return 0;
}
