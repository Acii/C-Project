#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Abonat
{
	char name[50];
	char number[10];
	float suma ;
	float meseci;
	float lihva ;
};

void Input(struct Abonat *Arr, int N);
int Find(struct Abonat *Arr, int N);
void sum(struct Abonat *Arr, int i);
void Print(struct Abonat Arr);

void main (void)
{
	char ch,res;
	struct Abonat Array[100];
	int number=0;
	int i=0;
	while(1)
	{
		printf("\n1. Vuvedete Klient");
		printf("\n2. Tyrsene po ime na klienta");
		printf("\n3. Obshtata suma v bankata ");
		printf("\n4. Exit");
		switch(ch=getch())
		{
		case '1':
			if(number <100)
			{
				Input(Array, number);
				number ++;
			}
			else
				printf("\nMemory full");
			break;
		
		case '2' :	
			res = Find(Array, number);
			if(res < 0)
			{
				printf("\nNo one found");
			}
			else
			{
				Print(Array[res]);
			}
			break;
		case '3':
			sum(Array, i);
		case '4':
		return;
		break;
		}
	};


}
	
void Input(struct Abonat *Arr, int N)
{
	printf("\n Vavedi tri imena :");
	gets(Arr[N].name);
	printf("\n Vavedi  nomer na smetka: ");
	gets(Arr[N].number);
	printf("\n Vavedete suma po vashata smetka:");
    scanf("%f",&Arr[N].suma);
	fflush(stdin);
	printf("\n Meseci ot vnosa:");
	scanf("%f",&Arr[N].meseci);
	fflush(stdin);
	printf("\n Vavedete godishna lihva:");
	scanf("%f",&Arr[N].lihva);
	fflush(stdin);
	
}

int Find(struct Abonat *Arr, int N)
{
	int i;
	char name[50];
	fflush(stdin);
	printf("\nVavedi ime na abonata: ");
	gets(name);
	for(i = 0; i < N; i++)
	{
		if(strcmp(Arr[i].name, name) == 0)
			break;
	}
	if(i < N)
	{
		return i;
	}
	else
	{
		return -1;
	}
}


void Print(struct Abonat Arr)
{
	
    float a,p,s,h,m;
	h=Arr.lihva/100;
	a=h/12;
	p=a*Arr.meseci;
	s=p*Arr.suma;
	m=Arr.suma+s;
	printf("\n Ime na Klienta:%s",Arr.name);
	printf("\n Nomer na smetkata: %s", Arr.number);
	printf("\n Ot kolko meseca e vloga: %f", Arr.meseci);
	printf("\n Godishna lihva:%f",Arr.lihva);
	printf("\n Tekushtata suma e : %f",m);
}
void sum(struct Abonat *Arr, int i)
{
	int n;
	float f;
	for(n=0;n<i;n++)
	{
		f=Arr[n].suma;
	}
}




