#define MAXSIZE 20
#define OK 1
#define Error 0
#define True 1
#define False 0
typedef int ElemType;
typedef int Status;

typedef struct stackNode{
	ElemType data;
	struct stackNode *next;
}stackNode;
typedef struct stackNode *sPointer;

typedef struct stackLink{
	sPointer top;//sPointer 实例化第一个指针top;
	int count;
}stackLink;
typedef struct stackLink* sStack;
