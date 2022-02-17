    #include<stdio.h>
    #include<math.h>

    int power(int base,int exp){    
        if (exp ==0) return 1;
        else if (exp==1) return base;
        else if (exp>1) base = base*power(base,exp-1);
    }

    int main(){
        int um,dois;
        printf("Informe a base e o expoente.\n");
        scanf("%d %d", &um,&dois);
        printf("%d",power(um,dois));
        return 0;
    }