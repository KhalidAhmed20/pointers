#include <stdio.h>
#include <stdlib.h>
/* Prototypes of functions */
int add(int a,int b);
int sub(int a,int b);
int mul(int a, int b);
int division(int a,int b);


int main()
{
    int result,operation,x,y;

    // make 4 pointers point to 4 functions
    int (*ptr_func[4])(int,int) ={add,sub,mul,division};
    printf("please enter the required operation : \n0:add\t1:sub\t2:mul\t3:division\n");
    scanf("%d",&operation);

    printf("please enter two number for the operation: \n");
    scanf("%d %d",&x,&y);

    // call the required function
    result = (*ptr_func[operation])(x,y);
    printf("result = %d\n",result);
    return 0;
}

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int division(int a,int b){
	return a/b;
}
