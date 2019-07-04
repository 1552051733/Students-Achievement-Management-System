#define HEADER1 "|================================================ѧ������ѡ�޿γ���Ϣ================================================|\n"
#define HEADER2 "|------------|--------|------------|------|------|----------|----------------|------|----------|----------|----------|\n"
#define HEADER3 "|    ѧ��    |  ����  |    �༶    | �Ա� | ���� | �γ̱�� |    �γ�����    | ѧ�� | ƽʱ�ɼ� | ���Գɼ� | �ۺϳɼ� |\n"
#define HEADER4 "|------------|--------|------------|------|------|----------|----------------|------|----------|----------|----------|\n"
#define FORMAT1 "|%-12s|%-8s|%-12s|  %2s  |  %2d  |%-10s|%-16s|  %2d  |  %-8.2lf|  %-8.2lf|  %-8.2lf|\n"
#define FORMAT2 "|            |        |            |      |      |%-10s|%-16s|  %2d  |  %-8.2lf|  %-8.2lf|  %-8.2lf|\n"
#define FORMAT3 "|            |        |            |      |      |%-10s|%-16s|  %2d  |  %-8.2lf|  %-8.2lf|  %-8.2lf|\n"
#define HEADER5 "|====================================================================================================================|\n"
#define DATA1 p->data.num,p->data.name,p->data.classes,p->data.sex,p->data.age,h->data.num1,h->data.name1,h->data.score1,h->data.usual1,h->data.test1,h->data.result1
#define DATA2 h->data.num2,h->data.name2,h->data.score2,h->data.usual2,h->data.test2,h->data.result2
#define DATA3 h->data.num3,h->data.name3,h->data.score3,h->data.usual3,h->data.test3,h->data.result3
#define HEADER6 "|==================������ѧ���嵥=================|\n"
#define HEADER7 "|------------|--------|----------------|----------|\n"
#define HEADER8 "|    ѧ��    |  ����  |    �γ�����    | �ۺϳɼ� |\n"
#define HEADER9 "|------------|--------|----------------|----------|\n"
#define FORMAT4 "|%-12s|%-8s|%-16s|  %-8.2lf|\n"
#define FORMAT5 "|            |        |%-16s|  %-8.2lf|\n"
#define FORMAT6 "|            |        |%-16s|  %-8.2lf|\n"
#define HEADER10 "|=================================================|\n"
#define DATA4 p->data.num,p->data.name,h->data.name1,h->data.result1
#define DATA5 p->data.num,p->data.name,h->data.name2,h->data.result2
#define DATA6 p->data.num,p->data.name,h->data.name3,h->data.result3
#define DATA8 h->data.name2,h->data.result2
#define DATA9 h->data.name3,h->data.result3
#define HEADER11 "|========================ѧ�����Ź���ƽ���ɼ�=====================|\n"
#define HEADER12 "|------------|--------|------------|----------|----------|--------|\n"
#define HEADER13 "|    ѧ��    |  ����  |    �༶    | �γ���Ŀ | ƽ���ɼ� |  ����  |\n"
#define HEADER14 "|------------|--------|------------|----------|----------|--------|\n"
#define FORMAT7 "|%-12s|%-8s|%-12s|    %2d    |  %-8.2lf|   %2d   |\n"
#define HEADER15 "|=================================================================|\n"
#define DATA7 p->data.num,p->data.name,p->data.classes,p->data.m,h->data.aver,p->data.NO
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
//ѧ��������Ϣ
struct student             
{
	char num[20];          /*ѧ��*/
	char name[10];         /*����*/
	char classes[20];      /*�༶*/
	char sex[5];           /*�Ա�*/
	int age;               /*����*/
	int m;                 /*ѡ�޿γ���Ŀ*/
	int NO;                /*����*/
};
//ѧ��ѡ�޿γɼ���Ϣ
struct course             
{
	char num[20];          /*ѧ��*/
	char name[10];         /*����*/
	double aver;           /*ƽ����*/
	char num1[10];         /*��һ�ſγ̱��*/   
	int score1;	           /*��һ�ſγ�ѧ��*/
	char name1[15];        /*��һ�ſγ�����*/
	double usual1;         /*��һ��ѡ��ƽʱ�ɼ�*/
	double test1;          /*��һ��ѡ�޿��Գɼ�*/
	double result1;        /*��һ��ѡ���ۺϳɼ�*/
	char num2[10];               
	int score2;	         
	char name2[15]; 
    double usual2;   
	double test2;
	double result2;
    char num3[10];               
	int score3;	         
	char name3[15]; 
    double usual3;   
	double test3;
	double result3;
};
typedef struct node   
{
	struct student data;
	struct node *next;
}Node;
typedef struct Course
{
	struct course data;
	struct Course *next;
}Courselink;
/*��¼�������Ϣ����*/
int count1=0;
//��ʾѧ����ѡ�޿���Ϣͷ��
void printheader1()
{
	printf(HEADER1);
	printf(HEADER2);
	printf(HEADER3);
	printf(HEADER4);
}
//��ʾ������ѧ��ͷ��
void printheader2()
{
	printf(HEADER6);
	printf(HEADER7);
	printf(HEADER8);
	printf(HEADER9);
}
//��ʾƽ���ɼ�ͷ��
void printheader3()
{
	printf(HEADER11);
	printf(HEADER12);
	printf(HEADER13);
	printf(HEADER14);
}
//���ڲ����޸ĺ�ɾ����Ϣʱͬ��ͬ�յ�ѧ����Ϣ�����
void printdata(Node *p,Courselink *h)
{
	
	if(p->data.m==1)
		printf(FORMAT1,DATA1);
    else if(p->data.m==2)
	{
		printf(FORMAT1,DATA1);
		printf(FORMAT2,DATA2);
	}
	else if(p->data.m==3)
	{
		printf(FORMAT1,DATA1);
		printf(FORMAT2,DATA2);
		printf(FORMAT3,DATA3);
	}
}
//�˵�
void menu()
{
	printf("\n\n");
	printf("\t\t|��������������������������������������|\n");
	printf("\t\t|         ѧ���ɼ���Ϣ����ϵͳ         |\n");
	printf("\t\t|��������������������������������������|\n");
	printf("\t\t|     1.¼��ѧ������ѡ�޿γ���Ϣ       |\n");
	printf("\t\t|     2.�޸�ѧ������ѡ�޿γ���Ϣ       |\n");
	printf("\t\t|     3.����ѧ������ѡ�޿γ���Ϣ       |\n");
	printf("\t\t|     4.��ѯѧ������ѡ�޿γ���Ϣ       |\n");
	printf("\t\t|     5.ɾ��ѧ������ѡ�޿γ���Ϣ       |\n");
	printf("\t\t|     6.��ʾѧ������ѡ�޿γ���Ϣ       |\n");
	printf("\t\t|     7.����ѧ�����Ź���ƽ���ɼ������� |\n");
	printf("\t\t|     8.�г�������ѧ��������           |\n");
	printf("\t\t|     9.�����Ѹ��ĵ�������Ϣ           |\n");
	printf("\t\t|     10.��¼��ѡ�޿γ̱�Ŷ�Ӧ��      |\n");
	printf("\t\t|     0.�˳�����                       |\n");
	printf("\t\t|______________________________________|\n");
}
//��¼
void tips()
{
	printf("\n\n");
	printf("\t\t|������������������������|\n");
	printf("\t\t|   ���|�γ�����        |\n");
	printf("\t\t|������������������������|\n");
	printf("\t\t|    001|��ѧ����        |\n");
	printf("\t\t|    002|��ѧ��ģ        |\n");
	printf("\t\t|    003|�г�Ӫ��        |\n");
	printf("\t\t|    004|��Ȼ����ѧ      |\n");
	printf("\t\t|    005|�й��մ�ʷ      |\n");
	printf("\t\t|������������������������|\n");
}
//¼��ѧ������ѡ�޿γ���Ϣ
void info(Node *head,Courselink *head2)
{
	Node *p,*r,*s;
    Courselink *k,*h;
	char num[20],ch;
	r=head;
	k=head2;
	while(r->next!=NULL && k->next!=NULL)
	{
		r=r->next;
        k=k->next;
	}
    while(1)
	{	
lab1:printf("\n������ѧ��ѧ��(����0�򷵻�):");    /*ѧ��ѧ��Ψһ����¼����ͬѧ�ŵ��ݴ��Դ���*/
	 scanf("%s",num);
	 if(strcmp(num,"0")==0)
		 return;
	 s=head->next;
	 while(s)
	 {
		 if(strcmp(s->data.num,num)==0)
		 {
			 printf("��ѧ��Ϊ%s��ѧ���Ѿ�����!��\n",num);
			 do
			 {
				 printf("������Ҫ����¼����?<y/n>:");
				 getchar();
				 scanf("%c",&ch);
				 if(ch=='y' || ch=='Y')
					 goto lab1;
				 else if(ch=='n' || ch=='N')
					 return;
				 else
					 printf("��������������!����������!��\n");
			 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
		 }	
		 s=s->next;
	 }
	 p=(Node*)malloc(sizeof(Node));
	 h=(Courselink*)malloc(sizeof(Courselink));
	 strcpy(p->data.num,num);
	 strcpy(h->data.num,p->data.num);
	 printf("������ѧ��������:");
	 scanf("%s",p->data.name);
	 strcpy(h->data.name,p->data.name);
	 printf("������ѧ���İ༶:");
	 scanf("%s",p->data.classes);
	 do
	 {
		 printf("������ѧ�����Ա�(�л�Ů):");
		 scanf("%s",p->data.sex);
		 if((strcmp(p->data.sex,"��")!=0) && (strcmp(p->data.sex,"Ů")!=0))
			 printf("����������Ա��ʽ����!����������!��\n");
	 }while((strcmp(p->data.sex,"��")!=0) && (strcmp(p->data.sex,"Ů")!=0));
	 do
	 {
		 printf("������ѧ��������:");
		 scanf("%d",&p->data.age);
		 if(p->data.age<=0 || p->data.age>=120)
			 printf("������������䲻����ʵ��!����������!��\n");
	 }while(p->data.age<=0 || p->data.age>=120);
	 p->next=NULL;
	 r->next=p;    
	 r=p;
	 do
	 {	
		 printf("��ѧ��ѡ�������ѡ�޿�(0<m<=3):");
		 scanf("%d",&p->data.m);
		 if(p->data.m<=0 || p->data.m>3)
			 printf("�����������������!����������!��\n");
	 }while(p->data.m<=0 || p->data.m>3);
	 switch(p->data.m)
	 {
	 case 1:
		 do
		 {
			 printf("����������ѡ�޿εı��:");
			 scanf("%s",h->data.num1);
			 if(strcmp(h->data.num1,"001")==0 || strcmp(h->data.num1,"002")==0 || strcmp(h->data.num1,"003")==0 || strcmp(h->data.num1,"004")==0 || strcmp(h->data.num1,"005")==0)
				 break;
			 else
				 printf("���������ı�Ų�����!����������!��\n");
		 }while(h->data.num1!="001" || h->data.num1!="002" || h->data.num1!="003" || h->data.num1!="004" || h->data.num1!="005");
		 do
		 {
			 printf("����������ѡ�޿ε�����:");
			 scanf("%s",h->data.name1);
			 if(strcmp(h->data.num1,"001")==0)
			 {
				 if(strcmp(h->data.name1,"��ѧ����")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"002")==0)
			 {
				 if(strcmp(h->data.name1,"��ѧ��ģ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"003")==0)
			 {
				 if(strcmp(h->data.name1,"�г�Ӫ��")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"004")==0)
			 {
				 if(strcmp(h->data.name1,"��Ȼ����ѧ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"005")==0)
			 {
				 if(strcmp(h->data.name1,"�й��մ�ʷ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
		 }while(strcmp(h->data.name1,"��ѧ����")!=0 || strcmp(h->data.name1,"��ѧ��ģ")!=0 || strcmp(h->data.name1,"�г�Ӫ��")!=0 || strcmp(h->data.name1,"��Ȼ����ѧ")!=0 || strcmp(h->data.name1,"�й��մ�ʷ")!=0);
		 do
		 {
			 printf("����������ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score1);
			 if(h->data.score1<=0 || h->data.score1>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score1<=0 || h->data.score1>4);
		 do
		 {
			 printf("����������ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test1);
			 if(h->data.test1<0 || h->data.test1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test1<0 || h->data.test1>100);
		 do
		 {
			 printf("����������ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual1);
			 if(h->data.usual1<0 || h->data.usual1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual1<0 || h->data.usual1>100);
		 h->data.result1=0.7*h->data.test1+0.3*h->data.usual1;
		 printf("��ѧ�����ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result1);
		 break;
	 case 2:
		 do
		 {
			 printf("�������һ��ѡ�޿εı��:");
			 scanf("%s",h->data.num1);
			 if(strcmp(h->data.num1,"001")==0 || strcmp(h->data.num1,"002")==0 || strcmp(h->data.num1,"003")==0 || strcmp(h->data.num1,"004")==0 || strcmp(h->data.num1,"005")==0)
				 break;
			 else
				 printf("���������ı�Ų�����!����������!��\n");
		 }while(h->data.num1!="001" || h->data.num1!="002" || h->data.num1!="003" || h->data.num1!="004" || h->data.num1!="005");
		 do
		 {
			 printf("�������һ��ѡ�޿ε�����:");
			 scanf("%s",h->data.name1);
			 if(strcmp(h->data.num1,"001")==0)
			 {
				 if(strcmp(h->data.name1,"��ѧ����")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"002")==0)
			 {
				 if(strcmp(h->data.name1,"��ѧ��ģ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"003")==0)
			 {
				 if(strcmp(h->data.name1,"�г�Ӫ��")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"004")==0)
			 {
				 if(strcmp(h->data.name1,"��Ȼ����ѧ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"005")==0)
			 {
				 if(strcmp(h->data.name1,"�й��մ�ʷ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
		 }while(strcmp(h->data.name1,"��ѧ����")!=0 || strcmp(h->data.name1,"��ѧ��ģ")!=0 || strcmp(h->data.name1,"�г�Ӫ��")!=0 || strcmp(h->data.name1,"��Ȼ����ѧ")!=0 || strcmp(h->data.name1,"�й��մ�ʷ")!=0);
		 do
		 {	
			 printf("�������һ��ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score1);
			 if(h->data.score1<=0 || h->data.score1>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score1<=0 || h->data.score1>4);
		 do
		 {
			 printf("�������һ��ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test1);
			 if(h->data.test1<0 || h->data.test1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test1<0 || h->data.test1>100);
		 do
		 {
			 printf("�������һ��ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual1);
			 if(h->data.usual1<0 || h->data.usual1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual1<0 || h->data.usual1>100);
		 h->data.result1=0.7*h->data.test1+0.3*h->data.usual1;
		 printf("��ѧ����һ�ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result1);
		 do
		 {
			 do
			 {
				 printf("������ڶ���ѡ�޿εı��:");
				 scanf("%s",h->data.num2);
				 if(strcmp(h->data.num2,"001")==0 || strcmp(h->data.num2,"002")==0 || strcmp(h->data.num2,"003")==0 || strcmp(h->data.num2,"004")==0 || strcmp(h->data.num2,"005")==0)
					 break;
				 else
					 printf("���������ı�Ų�����!����������!��\n");
			 }while(h->data.num2!="001" || h->data.num2!="002" || h->data.num2!="003" || h->data.num2!="004" || h->data.num2!="005");
			 if(strcmp(h->data.num1,h->data.num2)==0)
				 printf("��������ظ�,����������!��\n");
		 }while(strcmp(h->data.num1,h->data.num2)==0);
		 do
		 {
			 do
			 {
				 printf("������ڶ���ѡ�޿ε�����:");
				 scanf("%s",h->data.name2);
				 if(strcmp(h->data.num2,"001")==0)
				 {
					 if(strcmp(h->data.name2,"��ѧ����")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"002")==0)
				 {
					 if(strcmp(h->data.name2,"��ѧ��ģ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"003")==0)
				 {
					 if(strcmp(h->data.name2,"�г�Ӫ��")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"004")==0)
				 {
					 if(strcmp(h->data.name2,"��Ȼ����ѧ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"005")==0)
				 {
					 if(strcmp(h->data.name2,"�й��մ�ʷ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
		 }while(strcmp(h->data.name2,"��ѧ����")!=0 || strcmp(h->data.name2,"��ѧ��ģ")!=0 || strcmp(h->data.name2,"�г�Ӫ��")!=0 || strcmp(h->data.name2,"��Ȼ����ѧ")!=0 || strcmp(h->data.name2,"�й��մ�ʷ")!=0);
		 if(strcmp(h->data.name1,h->data.name2)==0)
			 printf("���������ظ�,����������!��\n");
		 }while(strcmp(h->data.name1,h->data.name2)==0);
		 do
		 {	
			 printf("������ڶ���ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score2);
			 if(h->data.score2<=0 || h->data.score2>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
			 
		 }while(h->data.score2<=0 || h->data.score2>4);
		 do
		 {
			 printf("������ڶ���ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test2);
			 if(h->data.test2<0 || h->data.test2>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test2<0 || h->data.test2>100);
		 do
		 {
			 printf("������ڶ���ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual2);
			 if(h->data.usual2<0 || h->data.usual2>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual2<0 || h->data.usual2>100);
		 h->data.result2=0.7*h->data.test2+0.3*h->data.usual2;
		 printf("��ѧ���ڶ��ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result2);
		 break;
	 case 3:
		 do
		 {
			 printf("�������һ��ѡ�޿εı��:");
			 scanf("%s",h->data.num1);
			 if(strcmp(h->data.num1,"001")==0 || strcmp(h->data.num1,"002")==0 || strcmp(h->data.num1,"003")==0 || strcmp(h->data.num1,"004")==0 || strcmp(h->data.num1,"005")==0)
				 break;
			 else
				 printf("���������ı�Ų�����!����������!��\n");
		 }while(h->data.num1!="001" || h->data.num1!="002" || h->data.num1!="003" || h->data.num1!="004" || h->data.num1!="005");
		 do
		 {
			 printf("�������һ��ѡ�޿ε�����:");
			 scanf("%s",h->data.name1);
			 if(strcmp(h->data.num1,"001")==0)
			 {
				 if(strcmp(h->data.name1,"��ѧ����")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"002")==0)
			 {
				 if(strcmp(h->data.name1,"��ѧ��ģ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"003")==0)
			 {
				 if(strcmp(h->data.name1,"�г�Ӫ��")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"004")==0)
			 {
				 if(strcmp(h->data.name1,"��Ȼ����ѧ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
			 else if(strcmp(h->data.num1,"005")==0)
			 {
				 if(strcmp(h->data.name1,"�й��մ�ʷ")==0)
					 break;
				 else
				 {
					 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
					 do
					 {
						 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
						 getchar();
						 scanf("%c",&ch);
						 if(ch=='y' || ch =='Y')
						 {
							 tips();
							 printf("\n");
							 break;
						 }
						 else if(ch=='n' || ch=='N')
							 break;
						 else
							 printf("�����������������������!��\n");
					 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
				 }
			 }
		 }while(strcmp(h->data.name1,"��ѧ����")!=0 || strcmp(h->data.name1,"��ѧ��ģ")!=0 || strcmp(h->data.name1,"�г�Ӫ��")!=0 || strcmp(h->data.name1,"��Ȼ����ѧ")!=0 || strcmp(h->data.name1,"�й��մ�ʷ")!=0);
		 do
		 {	
			 printf("�������һ��ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score1);
			 if(h->data.score1<=0 || h->data.score1>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score1<=0 || h->data.score1>4);
		 do
		 {
			 printf("�������һ��ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test1);
			 if(h->data.test1<0 || h->data.test1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test1<0 || h->data.test1>100);
		 do
		 {
			 printf("�������һ��ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual1);
			 if(h->data.usual1<0 || h->data.usual1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual1<0 || h->data.usual1>100);
		 h->data.result1=0.7*h->data.test1+0.3*h->data.usual1;
		 printf("��ѧ����һ�ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result1);
		 do
		 {
			 do
			 {
				 printf("������ڶ���ѡ�޿εı��:");
				 scanf("%s",h->data.num2);
				 if(strcmp(h->data.num2,"001")==0 || strcmp(h->data.num2,"002")==0 || strcmp(h->data.num2,"003")==0 || strcmp(h->data.num2,"004")==0 || strcmp(h->data.num2,"005")==0)
					 break;
				 else
					 printf("���������ı�Ų�����!����������!��\n");
			 }while(h->data.num2!="001" || h->data.num2!="002" || h->data.num2!="003" || h->data.num2!="004" || h->data.num2!="005");
			 if(strcmp(h->data.num1,h->data.num2)==0)
				 printf("��������ظ�,����������!��\n");
		 }while(strcmp(h->data.num1,h->data.num2)==0);
		 do
		 {
			 do
			 {
				 printf("������ڶ���ѡ�޿ε�����:");
				 scanf("%s",h->data.name2);
				 if(strcmp(h->data.num2,"001")==0)
				 {
					 if(strcmp(h->data.name2,"��ѧ����")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"002")==0)
				 {
					 if(strcmp(h->data.name2,"��ѧ��ģ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"003")==0)
				 {
					 if(strcmp(h->data.name2,"�г�Ӫ��")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"004")==0)
				 {
					 if(strcmp(h->data.name2,"��Ȼ����ѧ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"005")==0)
				 {
					 if(strcmp(h->data.name2,"�й��մ�ʷ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
		 }while(strcmp(h->data.name2,"��ѧ����")!=0 || strcmp(h->data.name2,"��ѧ��ģ")!=0 || strcmp(h->data.name2,"�г�Ӫ��")!=0 || strcmp(h->data.name2,"��Ȼ����ѧ")!=0 || strcmp(h->data.name2,"�й��մ�ʷ")!=0);
		 if(strcmp(h->data.name1,h->data.name2)==0)
			 printf("���������ظ�,����������!��\n");
		 }while(strcmp(h->data.name1,h->data.name2)==0);
		 do
		 {	
			 printf("������ڶ���ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score2);
			 if(h->data.score2<=0 || h->data.score2>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score2<=0 || h->data.score2>4);
		 do
		 {
			 printf("������ڶ���ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test2);
			 if(h->data.test2<0 || h->data.test2>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test2<0 || h->data.test2>100);
		 do
		 {
			 printf("������ڶ���ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual2);
			 if(h->data.usual2<0 || h->data.usual2>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual2<0 || h->data.usual2>100);
		 h->data.result2=0.7*h->data.test2+0.3*h->data.usual2;
		 printf("��ѧ���ڶ��ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result2);
		 do
		 {
			 do
			 {
				 printf("�����������ѡ�޿εı��:");
				 scanf("%s",h->data.num3);
				 if(strcmp(h->data.num3,"001")==0 || strcmp(h->data.num3,"002")==0 || strcmp(h->data.num3,"003")==0 || strcmp(h->data.num3,"004")==0 || strcmp(h->data.num3,"005")==0)
					 break;
				 else
					 printf("���������ı�Ų�����!����������!��\n");
			 }while(h->data.num3!="001" || h->data.num3!="002" || h->data.num3!="003" || h->data.num3!="004" || h->data.num3!="005");
			 if(strcmp(h->data.num3,h->data.num1)==0 || strcmp(h->data.num3,h->data.num2)==0)
				 printf("��������ظ�,����������!��\n");
		 }while(strcmp(h->data.num3,h->data.num1)==0 || strcmp(h->data.num3,h->data.num2)==0);
		 do
		 {
			 do
			 {
				 printf("�����������ѡ�޿ε�����:");
				 scanf("%s",h->data.name3);
				 if(strcmp(h->data.num3,"001")==0)
				 {
					 if(strcmp(h->data.name3,"��ѧ����")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num3,"002")==0)
				 {
					 if(strcmp(h->data.name3,"��ѧ��ģ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num3,"003")==0)
				 {
					 if(strcmp(h->data.name3,"�г�Ӫ��")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num3,"004")==0)
				 {
					 if(strcmp(h->data.name3,"��Ȼ����ѧ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num3,"005")==0)
				 {
					 if(strcmp(h->data.name3,"�й��մ�ʷ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
		 }while(strcmp(h->data.name3,"��ѧ����")!=0 || strcmp(h->data.name3,"��ѧ��ģ")!=0 || strcmp(h->data.name3,"�г�Ӫ��")!=0 || strcmp(h->data.name3,"��Ȼ����ѧ")!=0 || strcmp(h->data.name3,"�й��մ�ʷ")!=0);
		 if(strcmp(h->data.name3,h->data.name1)==0 && strcmp(h->data.name3,h->data.name2)==0)
			 printf("���������ظ�,����������!��\n");
		 }while(strcmp(h->data.name3,h->data.name1)==0 && strcmp(h->data.name3,h->data.name2)==0);
		 do
		 {	
			 printf("�����������ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score3);
			 if(h->data.score3<=0 || h->data.score3>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score3<=0 || h->data.score3>4);
		 do
		 {
			 printf("�����������ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test3);
			 if(h->data.test3<0 || h->data.test3>=100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test3<0 || h->data.test3>=100);
		 do
		 {
			 printf("�����������ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual3);
			 if(h->data.usual3<0 || h->data.usual3>=100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual3<0 || h->data.usual3>=100);
		 h->data.result3=0.7*h->data.test3+0.3*h->data.usual3;
		 printf("��ѧ�������ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result3);
		 break;
        }
		h->next=NULL;
		k->next=h;    
		k=h;
	 }
}
//�޸�ѧ������ѡ�޿γ���Ϣ
void modify(Node *head,Courselink *head2)
{
	Node *p,*s[10];
	Courselink *h,*k[10];
	int j,i=0;
	char sel,ch,tnum[20],tnum1[20],tnum2[10],tname[10],tname1[10];
	p=head->next;
	h=head2->next;
	if(!p && !h)
	{
		printf("�޼�¼!\n");
		return;
	}
lab2:printf("\n��ѡ���޸�����:\n1:ѧ��������Ϣ;\t\t2.ѡ�޻�����Ϣ;\t\t*����������س����ز˵�.\n");
	 getchar();
	 scanf("%c",&sel);
	 /*����ѧ��������Ϣ�޸�*/
	 if(sel=='1')
	 {
lab3:printf("\n��ѡ���޸ĵ���Ϣ:\n1.ѧ��;\t2.����;\t3.�༶;\t4.�Ա�;\t5.����;\t*����������س�������һ��.\n");
	 getchar();
	 scanf("%c",&sel);
	 /*ѧ��*/
	 if(sel=='1')
	 {
		 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
		 getchar();
		 scanf("%c",&ch);
		 if(ch=='y' || ch=='Y')
		 {
			 printf("������ѧ��ԭ����ѧ��:");
			 scanf("%s",tnum);
			 while((p!=NULL)&&(h!=NULL))
			 {
				 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)    /*������Ҫ�޸ĵ�ѧ��*/
				 {
					 printheader1();
					 printdata(p,h);
					 printf(HEADER5);
					 do
					 {
						 printf("�������µ�ѧ��ѧ��:");
						 scanf("%s",p->data.num);
						 if(strcmp(p->data.num,"0")==0)
							 printf("���������ѧ������!����������!��\n");
					 }while(strcmp(p->data.num,"0")==0);
					 strcpy(h->data.num,p->data.num);
					 printf("\n��ѧ���ѳɹ�����!\n");
					 break;
				 }
				 else
				 {
					 p=p->next;
					 h=h->next;
					 if(p==NULL && h==NULL)
						 printf("���������ѧ��ѧ�Ų�����!��\n");
				 }	
			 }
		 }
		 else if(ch=='n' || ch=='N')
		 { 
			 printf("��������һ��!��\n");
			 goto lab3;
		 }
		 else
		 {
			 printf("��������������!������һ��!��\n");
			 goto lab3;
		 }
	 }
	 /*����*/
	 else if(sel=='2')
	 {
		 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
		 getchar();
		 scanf("%c",&ch);
		 if(ch=='y' || ch=='Y')
		 {
			 printf("������ѧ��ԭ��������:");
			 scanf("%s",tname);
			 while(p!=NULL && h!=NULL)
			 {
				 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
				 {
					 s[i]=p;
					 k[i]=h;
					 i++;
				 }
				 p=p->next;
				 h=h->next;
			 }
			 if(i==0)
				 printf("�����������������!�Ҳ��������Ϣ!��\n");
			 else
			 {
				 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
				 printheader1();
				 for(j=0;j<i;j++)
					 printdata(s[j],k[j]);
				 printf(HEADER5);
				 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
				 scanf("%s",tnum1);
				 for(j=0;j<i;j++)
				 {
					 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
					 {
						 printf("�������µ�ѧ������:");
						 scanf("%s",s[j]->data.name);
						 strcpy(k[j]->data.name,s[j]->data.name);
						 printf("\n�������ѳɹ�����!\n");
						 break;
					 }
					 else
					 {
						 s[j]=s[j]->next;
						 k[j]=k[j]->next;
						 if(++j==i)
						 {
							 printf("���������ѧ��ѧ�Ų�����!��\n");
							 break;
						 }
					 }
				 }
			 }
		 }
		 else if(ch=='n' || ch=='N')
		 {
			 printf("��������һ��!��\n");
			 goto lab3;
		 }
		 else
		 {
			 printf("��������������!������һ��!��\n");
			 goto lab3;
		 }
	 }
	 /*�༶*/
	 else if(sel=='3')
	 {
		 printf("\n��ѡ���޸ĵķ�ʽ:\n1:����ѧ��ѧ���޸���Ϣ;\t\t2:����ѧ�������޸���Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ���޸�*/
		 if(sel=='1')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 while((p!=NULL)&&(h!=NULL))
				 {
					 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)
					 {
						 printheader1();
						 printdata(p,h);
						 printf(HEADER5);
						 printf("�������µ�ѧ���༶:");
						 scanf("%s",p->data.classes);
						 printf("\n�°༶�ѳɹ�����!\n");
						 break;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
						 if(p==NULL && h==NULL)
							 printf("���������ѧ��ѧ�Ų�����!��\n");
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab3;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab3;
			 }
		 }
		 /*���������޸�*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
					 printf("�����������������!�Ҳ��������Ϣ!��\n");
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 printf("�������µ�ѧ���༶:");
							 scanf("%s",s[j]->data.classes);
							 printf("\n�°༶�ѳɹ�����!\n");
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab3;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab3;
			 }
		 }
		 else
			 goto lab3;
	 }
	 /*�Ա�*/
	 else if(sel=='4')
	 {
		 printf("\n��ѡ���޸ĵķ�ʽ:\n1:����ѧ��ѧ���޸���Ϣ;\t\t2:����ѧ�������޸���Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ���޸�*/
		 if(sel=='1')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 while((p!=NULL)&&(h!=NULL))
				 {
					 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)
					 {
						 printheader1();
						 printdata(p,h);
						 printf(HEADER5);
						 do
						 {
							 printf("�������µ�ѧ���Ա�(�л�Ů):");
							 scanf("%s",p->data.sex);
							 if((strcmp(p->data.sex,"��")!=0) && (strcmp(p->data.sex,"Ů")!=0))
								 printf("����������Ա��ʽ����!����������!��\n");
						 }while((strcmp(p->data.sex,"��")!=0) && (strcmp(p->data.sex,"Ů")!=0));
						 printf("\n���Ա��ѳɹ�����!\n");
						 break;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
						 if(p==NULL && h==NULL)
							 printf("���������ѧ��ѧ�Ų�����!��\n");
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab3;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab3;
			 }
		 }
		 /*���������޸�*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
					 printf("�����������������!�Ҳ��������Ϣ!��\n");
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 do
							 {
								 printf("�������µ�ѧ���Ա�:");
								 scanf("%s",s[j]->data.sex);
								 if((strcmp(s[j]->data.sex,"��")!=0) && (strcmp(s[j]->data.sex,"Ů")!=0))
									 printf("����������Ա��ʽ����!����������!��\n");
							 }while((strcmp(s[j]->data.sex,"��")!=0) && (strcmp(s[j]->data.sex,"Ů")!=0));
							 printf("\n���Ա��ѳɹ�����!\n");
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab3;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab3;
			 }
		 }
		 else
			 goto lab3;
	 }
	 /*����*/
	 else if(sel=='5')
	 {
		 printf("\n��ѡ���޸ĵķ�ʽ:\n1:����ѧ��ѧ���޸���Ϣ;\t\t2:����ѧ�������޸���Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ���޸�*/
		 if(sel=='1')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 while((p!=NULL)&&(h!=NULL))
				 {
					 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)
					 {
						 printheader1();
						 printdata(p,h);
						 printf(HEADER5);
						 do
						 {
							 printf("�������µ�ѧ������:");
							 scanf("%d",&p->data.age);
							 if(p->data.age<=0 || p->data.age>120)
								 printf("������������䲻����ʵ��!����������!��\n");
						 }while(p->data.age<=0 || p->data.age>120);
						 printf("\n�������ѳɹ�����!\n");
						 break;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
						 if(p==NULL && h==NULL)
							 printf("���������ѧ��ѧ�Ų�����!��\n");
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab3;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab3;
			 }
		 }
		 /*���������޸�*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
					 printf("�����������������!�Ҳ��������Ϣ!��\n");
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 do
							 {
								 printf("�������µ�ѧ������:");
								 scanf("%d",&s[j]->data.age);
								 if(s[j]->data.age<=0 || s[j]->data.age>120)
									 printf("������������䲻����ʵ��!����������!��\n");
							 }while(s[j]->data.age<=0 || s[j]->data.age>120);
							 printf("\n�������ѳɹ�����!\n");
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab3;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab3;
			 }
		 }
		 else
			 goto lab3;
	 }
	 else
		 goto lab2;
		 }
		 /*����ѡ�޻�����Ϣ�޸�*/
		 else if(sel=='2')
		 {
lab4:printf("\n��ѡ���޸ĵ���Ϣ:\n1.�γ̱��;\t2.�γ�����;\t3.�γ�ѧ��;\t4.ƽʱ�ɼ�;\t5.���Գɼ�;\t*����������س�������һ��.\n");
	 getchar();
	 scanf("%c",&sel);
	 /*�γ̱��*/
	 if(sel=='1')
	 {
		 printf("\n��ѡ���޸ĵķ�ʽ:\n1:����ѧ��ѧ���޸���Ϣ;\t\t2:����ѧ�������޸���Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ���޸�*/
		 if(sel=='1')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);                                                            
				 while((p!=NULL)&&(h!=NULL))
				 {
					 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)
					 {
						 printheader1();
						 printdata(p,h);
						 printf(HEADER5);
						 do
						 {
							 printf("��������Ҫ�޸ĵĿγ̱��:");
							 scanf("%s",tnum2);
							 if(strcmp(h->data.num1,tnum2)!=0 && strcmp(h->data.num2,tnum2)!=0 && strcmp(h->data.num3,tnum2)!=0)
								 printf("��������Ŀγ̱������!����������!��\n");
						 }while(strcmp(h->data.num1,tnum2)!=0 && strcmp(h->data.num2,tnum2)!=0 && strcmp(h->data.num3,tnum2)!=0);
						 if((strcmp(tnum2,h->data.num1))==0)
						 {
							 do
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿α��:");
									 scanf("%s",h->data.num1);
									 if(strcmp(h->data.num1,"001")==0 || strcmp(h->data.num1,"002")==0 || strcmp(h->data.num1,"003")==0 || strcmp(h->data.num1,"004")==0 || strcmp(h->data.num1,"005")==0)
										 break;
									 else
										 printf("��������ı�Ų�����!����������!��\n");
								 }while(h->data.num1!="001" || h->data.num1!="002" || h->data.num1!="003" || h->data.num1!="004" || h->data.num1!="005");
								 if(strcmp(h->data.num1,h->data.num2)==0 || strcmp(h->data.num1,h->data.num3)==0)
									 printf("��������ظ�!����������!��\n");
							 }while(strcmp(h->data.num1,h->data.num2)==0 || strcmp(h->data.num1,h->data.num3)==0);
							 if(strcmp(h->data.num1,"001")==0)
								 strcpy(h->data.name1,"��ѧ����");
							 else if(strcmp(h->data.num1,"002")==0)
								 strcpy(h->data.name1,"��ѧ��ģ");
							 else if(strcmp(h->data.num1,"003")==0)
								 strcpy(h->data.name1,"�г�Ӫ��");
							 else if(strcmp(h->data.num1,"004")==0)
								 strcpy(h->data.name1,"��Ȼ����ѧ");
							 else if(strcmp(h->data.num1,"005")==0)
								 strcpy(h->data.name1,"�й��մ�ʷ");
							 printf("\n��ѡ�ޱ���ѳɹ�����!\n");
						 }
						 else if((strcmp(tnum2,h->data.num2))==0)
						 {
							 do
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿α��:");
									 scanf("%s",h->data.num2);
									 if(strcmp(h->data.num2,"001")==0 || strcmp(h->data.num2,"002")==0 || strcmp(h->data.num2,"003")==0 || strcmp(h->data.num2,"004")==0 || strcmp(h->data.num2,"005")==0)
										 break;
									 else
										 printf("��������ı�Ų�����!����������!��\n");
								 }while(h->data.num2!="001" || h->data.num2!="002" || h->data.num2!="003" || h->data.num2!="004" || h->data.num2!="005");
								 if(strcmp(h->data.num2,h->data.num1)==0 || strcmp(h->data.num2,h->data.num3)==0)
									 printf("��������ظ�!����������!��\n");
							 }while(strcmp(h->data.num2,h->data.num1)==0 || strcmp(h->data.num2,h->data.num3)==0);
							 if(strcmp(h->data.num2,"001")==0)
								 strcpy(h->data.name2,"��ѧ����");
							 else if(strcmp(h->data.num2,"002")==0)
								 strcpy(h->data.name2,"��ѧ��ģ");
							 else if(strcmp(h->data.num2,"003")==0)
								 strcpy(h->data.name2,"�г�Ӫ��");
							 else if(strcmp(h->data.num2,"004")==0)
								 strcpy(h->data.name2,"��Ȼ����ѧ");
							 else if(strcmp(h->data.num2,"005")==0)
								 strcpy(h->data.name2,"�й��մ�ʷ");
							 printf("\n��ѡ�ޱ���ѳɹ�����!\n");
						 }
						 else if((strcmp(tnum2,h->data.num3))==0)
						 {
							 do
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿α��:");
									 scanf("%s",h->data.num3);
									 if(strcmp(h->data.num3,"001")==0 || strcmp(h->data.num3,"002")==0 || strcmp(h->data.num3,"003")==0 || strcmp(h->data.num3,"004")==0 || strcmp(h->data.num3,"005")==0)
										 break;
									 else
										 printf("��������ı�Ų�����!����������!��\n");
								 }while(h->data.num3!="001" || h->data.num3!="002" || h->data.num3!="003" || h->data.num3!="004" || h->data.num3!="005");
								 if(strcmp(h->data.num3,h->data.num1)==0 || strcmp(h->data.num3,h->data.num2)==0)
									 printf("��������ظ�!����������!��\n");
							 }while(strcmp(h->data.num3,h->data.num1)==0 || strcmp(h->data.num3,h->data.num2)==0);
							 if(strcmp(h->data.num3,"001")==0)
								 strcpy(h->data.name3,"��ѧ����");
							 else if(strcmp(h->data.num3,"002")==0)
								 strcpy(h->data.name3,"��ѧ��ģ");
							 else if(strcmp(h->data.num3,"003")==0)
								 strcpy(h->data.name3,"�г�Ӫ��");
							 else if(strcmp(h->data.num3,"004")==0)
								 strcpy(h->data.name3,"��Ȼ����ѧ");
							 else if(strcmp(h->data.num3,"005")==0)
								 strcpy(h->data.name3,"�й��մ�ʷ");
							 printf("\n��ѡ�ޱ���ѳɹ�����!\n");
						 }
						 break;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
						 if(p==NULL && h==NULL)
							 printf("���������ѧ��ѧ�Ų�����!��\n");
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 /*���������޸�*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
					 printf("�����������������!�Ҳ��������Ϣ!��\n");
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 do
							 {
								 printf("��������Ҫ�޸ĵĿγ̱��:");
								 scanf("%s",tnum2);
								 if(strcmp(k[j]->data.num1,tnum2)!=0 && strcmp(k[j]->data.num2,tnum2)!=0 && strcmp(k[j]->data.num3,tnum2)!=0)
									 printf("��������Ŀγ̱������!����������!��\n");
							 }while(strcmp(k[j]->data.num1,tnum2)!=0 && strcmp(k[j]->data.num2,tnum2)!=0 && strcmp(k[j]->data.num3,tnum2)!=0);
							 if((strcmp(tnum2,k[j]->data.num1))==0)
							 {
								 do
								 {
									 do
									 {
										 printf("�������µ�ѡ�޿α��:");
										 scanf("%s",k[j]->data.num1);
										 if(strcmp(k[j]->data.num1,"001")==0 || strcmp(k[j]->data.num1,"002")==0 || strcmp(k[j]->data.num1,"003")==0 || strcmp(k[j]->data.num1,"004")==0 || strcmp(k[j]->data.num1,"005")==0)
											 break;
										 else
											 printf("��������ı�Ų�����!����������!��\n");
									 }while(k[j]->data.num1!="001" || k[j]->data.num1!="002" || k[j]->data.num1!="003" || k[j]->data.num1!="004" || k[j]->data.num1!="005");
									 if(strcmp(k[j]->data.num1,k[j]->data.num2)==0 || strcmp(k[j]->data.num1,k[j]->data.num3)==0)
										 printf("��������ظ�!����������!��\n");
								 }while(strcmp(k[j]->data.num1,k[j]->data.num2)==0 || strcmp(k[j]->data.num1,k[j]->data.num3)==0);
								 if(strcmp(k[j]->data.num1,"001")==0)
									 strcpy(k[j]->data.name1,"��ѧ����");
								 else if(strcmp(k[j]->data.num1,"002")==0)
									 strcpy(k[j]->data.name1,"��ѧ��ģ");
								 else if(strcmp(k[j]->data.num1,"003")==0)
									 strcpy(k[j]->data.name1,"�г�Ӫ��");
								 else if(strcmp(k[j]->data.num1,"004")==0)
									 strcpy(k[j]->data.name1,"��Ȼ����ѧ");
								 else if(strcmp(k[j]->data.num1,"005")==0)
									 strcpy(k[j]->data.name1,"�й��մ�ʷ");
								 printf("\n��ѡ�ޱ���ѳɹ�����!\n");
							 }
							 else if((strcmp(tnum2,k[j]->data.num2))==0)
							 {
								 do
								 {
									 do
									 {
										 printf("�������µ�ѡ�޿α��:");
										 scanf("%s",k[j]->data.num2);
										 if(strcmp(k[j]->data.num2,"001")==0 || strcmp(k[j]->data.num2,"002")==0 || strcmp(k[j]->data.num2,"003")==0 || strcmp(k[j]->data.num2,"004")==0 || strcmp(k[j]->data.num2,"005")==0)
											 break;
										 else
											 printf("��������ı�Ų�����!����������!��\n");
									 }while(k[j]->data.num2!="001" || k[j]->data.num2!="002" || k[j]->data.num2!="003" || k[j]->data.num2!="004" || k[j]->data.num2!="005");
									 if(strcmp(k[j]->data.num2,k[j]->data.num1)==0 || strcmp(k[j]->data.num2,k[j]->data.num3)==0)
										 printf("��������ظ�!����������!��\n");
								 }while(strcmp(k[j]->data.num2,k[j]->data.num1)==0 || strcmp(k[j]->data.num2,k[j]->data.num3)==0);
								 if(strcmp(k[j]->data.num2,"001")==0)
									 strcpy(k[j]->data.name2,"��ѧ����");
								 else if(strcmp(k[j]->data.num2,"002")==0)
									 strcpy(k[j]->data.name2,"��ѧ��ģ");
								 else if(strcmp(k[j]->data.num2,"003")==0)
									 strcpy(k[j]->data.name2,"�г�Ӫ��");
								 else if(strcmp(k[j]->data.num2,"004")==0)
									 strcpy(k[j]->data.name2,"��Ȼ����ѧ");
								 else if(strcmp(k[j]->data.num2,"005")==0)
									 strcpy(k[j]->data.name2,"�й��մ�ʷ");
								 printf("\n��ѡ�ޱ���ѳɹ�����!\n");
							 }
							 else if((strcmp(tnum2,k[j]->data.num3))==0)
							 {
								 do
								 {
									 do
									 {
										 printf("�������µ�ѡ�޿α��:");
										 scanf("%s",k[j]->data.num3);
										 if(strcmp(k[j]->data.num3,"001")==0 || strcmp(k[j]->data.num3,"002")==0 || strcmp(k[j]->data.num3,"003")==0 || strcmp(k[j]->data.num3,"004")==0 || strcmp(k[j]->data.num3,"005")==0)
											 break;
										 else
											 printf("��������ı�Ų�����!����������!��\n");
									 }while(k[j]->data.num3!="001" || k[j]->data.num3!="002" || k[j]->data.num3!="003" || k[j]->data.num3!="004" || k[j]->data.num3!="005");
									 if(strcmp(k[j]->data.num3,k[j]->data.num2)==0 || strcmp(k[j]->data.num3,k[j]->data.num1)==0)
										 printf("��������ظ�!����������!��\n");
								 }while(strcmp(k[j]->data.num3,k[j]->data.num2)==0 || strcmp(k[j]->data.num3,k[j]->data.num1)==0);
								 if(strcmp(k[j]->data.num3,"001")==0)
									 strcpy(k[j]->data.name3,"��ѧ����");
								 else if(strcmp(k[j]->data.num3,"002")==0)
									 strcpy(k[j]->data.name3,"��ѧ��ģ");
								 else if(strcmp(k[j]->data.num3,"003")==0)
									 strcpy(k[j]->data.name3,"�г�Ӫ��");
								 else if(strcmp(k[j]->data.num3,"004")==0)
									 strcpy(k[j]->data.name3,"��Ȼ����ѧ");
								 else if(strcmp(k[j]->data.num3,"005")==0)
									 strcpy(k[j]->data.name3,"�й��մ�ʷ");
								 printf("\n��ѡ�ޱ���ѳɹ�����!\n");
							 }
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 else
			 goto lab4;
	 }
	 /*�γ�����*/
	 else if(sel=='2')
	 {
		 printf("\n��ѡ���޸ĵķ�ʽ:\n1:����ѧ��ѧ���޸���Ϣ;\t\t2:����ѧ�������޸���Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ���޸�*/
		 if(sel=='1')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 while((p!=NULL)&&(h!=NULL))
				 {
					 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)
					 {
						 printheader1();
						 printdata(p,h);
						 printf(HEADER5);
						 do
						 {
							 printf("������γ�����:");
							 scanf("%s",tname1);
							 if(strcmp(h->data.name1,tname1)!=0 && strcmp(h->data.name2,tname1)!=0 && strcmp(h->data.name3,tname1)!=0)
								 printf("��������Ŀγ���������!����������!��\n");
						 }while(strcmp(h->data.name1,tname1)!=0 && strcmp(h->data.name2,tname1)!=0 && strcmp(h->data.name3,tname1)!=0);
						 if(strcmp(tname1,h->data.name1)==0)
						 {
							 do
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿�����:");
									 scanf("%s",h->data.name1);
									 if(strcmp(h->data.name1,"��ѧ����")==0 || strcmp(h->data.name1,"��ѧ��ģ")==0 || strcmp(h->data.name1,"�г�Ӫ��")==0 || strcmp(h->data.name1,"��Ȼ����ѧ")==0 || strcmp(h->data.name1,"�й��մ�ʷ")==0)
										 break;
									 else
										 printf("��������Ŀγ̲�����!����������!��\n");
								 }while(strcmp(h->data.name1,"��ѧ����")!=0 || strcmp(h->data.name1,"��ѧ��ģ")!=0 || strcmp(h->data.name1,"�г�Ӫ��")!=0 || strcmp(h->data.name1,"��Ȼ����ѧ")!=0 || strcmp(h->data.name1,"�й��մ�ʷ")!=0);
								 if(strcmp(h->data.name1,h->data.name2)==0 || strcmp(h->data.name1,h->data.name3)==0)
									 printf("���γ��Ѵ���!����������!��\n");
							 }while(strcmp(h->data.name1,h->data.name2)==0 || strcmp(h->data.name1,h->data.name3)==0);
							 if(strcmp(h->data.name1,"��ѧ����")==0)
								 strcpy(h->data.num1,"001");
							 else if(strcmp(h->data.name1,"��ѧ��ģ")==0)
								 strcpy(h->data.num1,"002");
							 else if(strcmp(h->data.name1,"�г�Ӫ��")==0)
								 strcpy(h->data.num1,"003");
							 else if(strcmp(h->data.name1,"��Ȼ����ѧ")==0)
								 strcpy(h->data.num1,"004");
							 else if(strcmp(h->data.name1,"�й��մ�ʷ")==0)
								 strcpy(h->data.num1,"005");
						 }
						 if(strcmp(tname1,h->data.name2)==0)
						 {
							 do
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿�����:");
									 scanf("%s",h->data.name2);
									 if(strcmp(h->data.name2,"��ѧ����")==0 || strcmp(h->data.name2,"��ѧ��ģ")==0 || strcmp(h->data.name2,"�г�Ӫ��")==0 || strcmp(h->data.name2,"��Ȼ����ѧ")==0 || strcmp(h->data.name2,"�й��մ�ʷ")==0)
										 break;
									 else
										 printf("��������Ŀγ̲�����!����������!��\n");
								 }while(strcmp(h->data.name2,"��ѧ����")!=0 || strcmp(h->data.name2,"��ѧ��ģ")!=0 || strcmp(h->data.name2,"�г�Ӫ��")!=0 || strcmp(h->data.name2,"��Ȼ����ѧ")!=0 || strcmp(h->data.name2,"�й��մ�ʷ")!=0);
								 if(strcmp(h->data.name2,h->data.name1)==0 || strcmp(h->data.name2,h->data.name3)==0)
									 printf("���γ��Ѵ���!����������!��\n");
							 }while(strcmp(h->data.name2,h->data.name1)==0 || strcmp(h->data.name2,h->data.name3)==0);
							 if(strcmp(h->data.name2,"��ѧ����")==0)
								 strcpy(h->data.num2,"001");
							 else if(strcmp(h->data.name2,"��ѧ��ģ")==0)
								 strcpy(h->data.num2,"002");
							 else if(strcmp(h->data.name2,"�г�Ӫ��")==0)
								 strcpy(h->data.num2,"003");
							 else if(strcmp(h->data.name2,"��Ȼ����ѧ")==0)
								 strcpy(h->data.num2,"004");
							 else if(strcmp(h->data.name2,"�й��մ�ʷ")==0)
								 strcpy(h->data.num2,"005");
						 }
						 if(strcmp(tname1,h->data.name3)==0)
						 {
							 do
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿�����:");
									 scanf("%s",h->data.name3);
									 if(strcmp(h->data.name3,"��ѧ����")==0 || strcmp(h->data.name3,"��ѧ��ģ")==0 || strcmp(h->data.name3,"�г�Ӫ��")==0 || strcmp(h->data.name3,"��Ȼ����ѧ")==0 || strcmp(h->data.name3,"�й��մ�ʷ")==0)
										 break;
									 else
										 printf("��������Ŀγ̲�����!����������!��\n");
								 }while(strcmp(h->data.name3,"��ѧ����")!=0 || strcmp(h->data.name3,"��ѧ��ģ")!=0 || strcmp(h->data.name3,"�г�Ӫ��")!=0 || strcmp(h->data.name3,"��Ȼ����ѧ")!=0 || strcmp(h->data.name3,"�й��մ�ʷ")!=0);
								 if(strcmp(h->data.name3,h->data.name1)==0 || strcmp(h->data.name3,h->data.name2)==0)
									 printf("���γ��Ѵ���!����������!��\n");
							 }while(strcmp(h->data.name3,h->data.name1)==0 || strcmp(h->data.name3,h->data.name1)==0);
							 if(strcmp(h->data.name3,"��ѧ����")==0)
								 strcpy(h->data.num3,"001");
							 else if(strcmp(h->data.name3,"��ѧ��ģ")==0)
								 strcpy(h->data.num3,"002");
							 else if(strcmp(h->data.name3,"�г�Ӫ��")==0)
								 strcpy(h->data.num3,"003");
							 else if(strcmp(h->data.name3,"��Ȼ����ѧ")==0)
								 strcpy(h->data.num3,"004");
							 else if(strcmp(h->data.name3,"�й��մ�ʷ")==0)
								 strcpy(h->data.num3,"005");
						 }
						 printf("\n��ѡ�޿������ѳɹ�����!\n");
						 break;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
						 if(p==NULL && h==NULL)
							 printf("���������ѧ��ѧ�Ų�����!��\n");
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 /*���������޸�*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
					 printf("�����������������!�Ҳ��������Ϣ!��\n");
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 do
							 {
								 printf("������γ�����:");
								 scanf("%s",tname1);
								 if(strcmp(k[j]->data.name1,tname1)!=0 && strcmp(k[j]->data.name2,tname1)!=0 && strcmp(k[j]->data.name3,tname1)!=0)
									 printf("��������Ŀγ���������!����������!��\n");
							 }while(strcmp(k[j]->data.name1,tname1)!=0 && strcmp(k[j]->data.name2,tname1)!=0 && strcmp(k[j]->data.name3,tname1)!=0);
							 if(strcmp(tname1,k[j]->data.name1)==0)
							 {
								 do
								 {
									 do
									 {
										 printf("�������µ�ѡ�޿�����:");
										 scanf("%s",k[j]->data.name1);
										 if(strcmp(k[j]->data.name1,"��ѧ����")==0 || strcmp(k[j]->data.name1,"��ѧ��ģ")==0 || strcmp(k[j]->data.name1,"�г�Ӫ��")==0 || strcmp(k[j]->data.name1,"��Ȼ����ѧ")==0 || strcmp(k[j]->data.name1,"�й��մ�ʷ")==0)
											 break;
										 else
											 printf("��������Ŀγ̲�����!����������!��\n");
									 }while(strcmp(k[j]->data.name1,"��ѧ����")!=0 || strcmp(k[j]->data.name1,"��ѧ��ģ")!=0 || strcmp(k[j]->data.name1,"�г�Ӫ��")!=0 || strcmp(k[j]->data.name1,"��Ȼ����ѧ")!=0 || strcmp(k[j]->data.name1,"�й��մ�ʷ")!=0);
									 if(strcmp(k[j]->data.name1,k[j]->data.name2)==0 || strcmp(k[j]->data.name1,k[j]->data.name3)==0)
										 printf("���γ��Ѵ���!����������!��\n");
								 }while(strcmp(k[j]->data.name1,k[j]->data.name2)==0 || strcmp(k[j]->data.name1,k[j]->data.name3)==0);
								 if(strcmp(k[j]->data.name1,"��ѧ����")==0)
									 strcpy(k[j]->data.num1,"001");
								 else if(strcmp(k[j]->data.name1,"��ѧ��ģ")==0)
									 strcpy(k[j]->data.num1,"002");
								 else if(strcmp(k[j]->data.name1,"�г�Ӫ��")==0)
									 strcpy(k[j]->data.num1,"003");
								 else if(strcmp(k[j]->data.name1,"��Ȼ����ѧ")==0)
									 strcpy(k[j]->data.num1,"004");
								 else if(strcmp(k[j]->data.name1,"�й��մ�ʷ")==0)
									 strcpy(k[j]->data.num1,"005");
							 }
							 if(strcmp(tname1,k[j]->data.name2)==0)
							 {
								 do
								 {
									 do
									 {
										 printf("�������µ�ѡ�޿�����:");
										 scanf("%s",k[j]->data.name2);
										 if(strcmp(k[j]->data.name2,"��ѧ����")==0 || strcmp(k[j]->data.name2,"��ѧ��ģ")==0 || strcmp(k[j]->data.name2,"�г�Ӫ��")==0 || strcmp(k[j]->data.name2,"��Ȼ����ѧ")==0 || strcmp(k[j]->data.name2,"�й��մ�ʷ")==0)
											 break;
										 else
											 printf("��������Ŀγ̲�����!����������!��\n");
									 }while(strcmp(k[j]->data.name2,"��ѧ����")!=0 || strcmp(k[j]->data.name2,"��ѧ��ģ")!=0 || strcmp(k[j]->data.name2,"�г�Ӫ��")!=0 || strcmp(k[j]->data.name2,"��Ȼ����ѧ")!=0 || strcmp(k[j]->data.name2,"�й��մ�ʷ")!=0);
									 if(strcmp(k[j]->data.name2,k[j]->data.name1)==0 || strcmp(k[j]->data.name2,k[j]->data.name3)==0)
										 printf("���γ��Ѵ���!����������!��\n");
								 }while(strcmp(k[j]->data.name2,k[j]->data.name1)==0 || strcmp(k[j]->data.name2,k[j]->data.name3)==0);
								 if(strcmp(k[j]->data.name2,"��ѧ����")==0)
									 strcpy(k[j]->data.num2,"001");
								 else if(strcmp(k[j]->data.name2,"��ѧ��ģ")==0)
									 strcpy(k[j]->data.num2,"002");
								 else if(strcmp(k[j]->data.name2,"�г�Ӫ��")==0)
									 strcpy(k[j]->data.num2,"003");
								 else if(strcmp(k[j]->data.name2,"��Ȼ����ѧ")==0)
									 strcpy(k[j]->data.num2,"004");
								 else if(strcmp(k[j]->data.name2,"�й��մ�ʷ")==0)
									 strcpy(k[j]->data.num2,"005");
							 }
							 if(strcmp(tname1,k[j]->data.name3)==0)
							 {
								 do
								 {
									 do
									 {
										 printf("�������µ�ѡ�޿�����:");
										 scanf("%s",k[j]->data.name3);
										 if(strcmp(k[j]->data.name3,"��ѧ����")==0 || strcmp(k[j]->data.name3,"��ѧ��ģ")==0 || strcmp(k[j]->data.name3,"�г�Ӫ��")==0 || strcmp(k[j]->data.name3,"��Ȼ����ѧ")==0 || strcmp(k[j]->data.name3,"�й��մ�ʷ")==0)
											 break;
										 else
											 printf("��������Ŀγ̲�����!����������!��\n");
									 }while(strcmp(k[j]->data.name3,"��ѧ����")!=0 || strcmp(k[j]->data.name3,"��ѧ��ģ")!=0 || strcmp(k[j]->data.name3,"�г�Ӫ��")!=0 || strcmp(k[j]->data.name3,"��Ȼ����ѧ")!=0 || strcmp(k[j]->data.name3,"�й��մ�ʷ")!=0);
									 if(strcmp(k[j]->data.name3,k[j]->data.name1)==0 || strcmp(k[j]->data.name3,k[j]->data.name2)==0)
										 printf("���γ��Ѵ���!����������!��\n");
								 }while(strcmp(k[j]->data.name3,k[j]->data.name1)==0 || strcmp(k[j]->data.name3,k[j]->data.name1)==0);
								 if(strcmp(k[j]->data.name3,"��ѧ����")==0)
									 strcpy(k[j]->data.num3,"001");
								 else if(strcmp(k[j]->data.name3,"��ѧ��ģ")==0)
									 strcpy(k[j]->data.num3,"002");
								 else if(strcmp(k[j]->data.name3,"�г�Ӫ��")==0)
									 strcpy(k[j]->data.num3,"003");
								 else if(strcmp(k[j]->data.name3,"��Ȼ����ѧ")==0)
									 strcpy(k[j]->data.num3,"004");
								 else if(strcmp(k[j]->data.name3,"�й��մ�ʷ")==0)
									 strcpy(k[j]->data.num3,"005");
							 }
							 printf("\n��ѡ�޿������ѳɹ�����!\n");
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 else
			 goto lab4;
	 }
	 /*�γ�ѧ��*/
	 else if(sel=='3')
	 {
		 printf("\n��ѡ���޸ĵķ�ʽ:\n1:����ѧ��ѧ���޸���Ϣ;\t\t2:����ѧ�������޸���Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ���޸�*/
		 if(sel=='1')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 while((p!=NULL)&&(h!=NULL))
				 {
					 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)
					 {
						 printheader1();
						 printdata(p,h);
						 printf(HEADER5);
						 do
						 {
							 printf("������γ̱��:");
							 scanf("%s",tnum2);
							 if(strcmp(h->data.num1,tnum2)!=0 && strcmp(h->data.num2,tnum2)!=0 && strcmp(h->data.num3,tnum2)!=0)
								 printf("��������Ŀγ̱������!����������!��\n");
						 }while(strcmp(h->data.num1,tnum2)!=0 && strcmp(h->data.num2,tnum2)!=0 && strcmp(h->data.num3,tnum2)!=0);
						 if(strcmp(tnum2,h->data.num1)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿�ѧ��(0<=score<=4):");
								 scanf("%d",&h->data.score1);
								 if(h->data.score1<=0 || h->data.score1>4)
									 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
							 }while(h->data.score1<=0 || h->data.score1>4);
							 printf("\n��ѡ�޿�ѧ���ѳɹ�����!\n");
						 }
						 else if(strcmp(tnum2,h->data.num2)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿�ѧ��(0<=score<=4):");
								 scanf("%d",&h->data.score2);
								 if(h->data.score2<=0 || h->data.score2>4)
									 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
							 }while(h->data.score2<=0 || h->data.score2>4);
							 printf("\n��ѡ�޿�ѧ���ѳɹ�����!\n");
						 }
						 else if(strcmp(tnum2,h->data.num3)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿�ѧ��(0<=score<=4):");
								 scanf("%d",&h->data.score3);
								 if(h->data.score3<=0 || h->data.score3>4)
									 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
							 }while(h->data.score3<=0 || h->data.score3>4);
							 printf("\n��ѡ�޿�ѧ���ѳɹ�����!\n");
						 }
						 break;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
						 if(p==NULL && h==NULL)
							 printf("���������ѧ��ѧ�Ų�����!��\n");
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 /*���������޸�*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
					 printf("�����������������!�Ҳ��������Ϣ!��\n");
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 do
							 {
								 printf("������γ̱��:");
								 scanf("%s",tnum2);
								 if(strcmp(k[j]->data.num1,tnum2)!=0 && strcmp(k[j]->data.num2,tnum2)!=0 && strcmp(k[j]->data.num3,tnum2)!=0)
									 printf("��������Ŀγ̱������!����������!��\n");
							 }while(strcmp(k[j]->data.num1,tnum2)!=0 && strcmp(k[j]->data.num2,tnum2)!=0 && strcmp(k[j]->data.num3,tnum2)!=0);
							 if(strcmp(tnum2,k[j]->data.num1)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿�ѧ��(0<=score<=4):");
									 scanf("%d",&k[j]->data.score1);
									 if(k[j]->data.score1<=0 || k[j]->data.score1>4)
										 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
								 }while(k[j]->data.score1<=0 || k[j]->data.score1>4);
								 printf("\n��ѡ�޿�ѧ���ѳɹ�����!\n");
							 }
							 else if(strcmp(tnum2,k[j]->data.num2)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿�ѧ��(0<=score<=4):");
									 scanf("%d",&k[j]->data.score2);
									 if(k[j]->data.score2<=0 || k[j]->data.score2>4)
										 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
								 }while(k[j]->data.score2<=0 || k[j]->data.score2>4);
								 printf("\n��ѡ�޿�ѧ���ѳɹ�����!\n");
							 }
							 else if(strcmp(tnum2,k[j]->data.num3)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿�ѧ��(0<=score<=4):");
									 scanf("%d",&k[j]->data.score3);
									 if(k[j]->data.score3<=0 || k[j]->data.score3>4)
										 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
								 }while(k[j]->data.score3<=0 || k[j]->data.score3>4);
								 printf("\n��ѡ�޿�ѧ���ѳɹ�����!\n");
							 }
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 else
			 goto lab4;
	 }
	 /*ƽʱ�ɼ�*/
	 else if(sel=='4')
	 {
		 printf("\n��ѡ���޸ĵķ�ʽ:\n1:����ѧ��ѧ���޸���Ϣ;\t\t2:����ѧ�������޸���Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ���޸�*/
		 if(sel=='1')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 while((p!=NULL)&&(h!=NULL))
				 {
					 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)
					 {
						 printheader1();
						 printdata(p,h);
						 printf(HEADER5);
						 do
						 {
							 printf("������γ̱��:");
							 scanf("%s",tnum2);
							 if(strcmp(h->data.num1,tnum2)!=0 && strcmp(h->data.num2,tnum2)!=0 && strcmp(h->data.num3,tnum2)!=0)
								 printf("��������Ŀγ̱������!����������!��\n");
						 }while(strcmp(h->data.num1,tnum2)!=0 && strcmp(h->data.num2,tnum2)!=0 && strcmp(h->data.num3,tnum2)!=0);
						 if(strcmp(tnum2,h->data.num1)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿ε�ƽʱ�ɼ�:");
								 scanf("%lf",&h->data.usual1);
								 if(h->data.usual1<0 || h->data.usual1>100)
									 printf("��������ĳɼ�����!����������!��\n");
							 }while(h->data.usual1<0 || h->data.usual1>100);
							 h->data.result1=0.7*h->data.test1+0.3*h->data.usual1;
							 printf("\n��ƽʱ�ɼ��ѳɹ�����!\n");
						 }
						 if(strcmp(tnum2,h->data.num2)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿ε�ƽʱ�ɼ�:");
								 scanf("%lf",&h->data.usual2);
								 if(h->data.usual2<0 || h->data.usual2>100)
									 printf("��������ĳɼ�����!����������!��\n");
							 }while(h->data.usual2<0 || h->data.usual2>100);
							 h->data.result2=0.7*h->data.test2+0.3*h->data.usual2;
							 printf("\n��ƽʱ�ɼ��ѳɹ�����!\n");
						 }
						 if(strcmp(tnum2,h->data.num3)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿ε�ƽʱ�ɼ�:");
								 scanf("%lf",&h->data.usual3);
								 if(h->data.usual3<0 || h->data.usual3>100)
									 printf("��������ĳɼ�����!����������!��\n");
							 }while(h->data.usual3<0 || h->data.usual3>100);
							 h->data.result3=0.7*h->data.test3+0.3*h->data.usual3;
							 printf("\n��ƽʱ�ɼ��ѳɹ�����!\n");
						 }
						 break;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
						 if(p==NULL && h==NULL)
							 printf("���������ѧ��ѧ�Ų�����!��\n");
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 /*���������޸�*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
					 printf("�����������������!�Ҳ��������Ϣ!��\n");
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 do
							 {
								 printf("������γ̱��:");
								 scanf("%s",tnum2);
								 if(strcmp(k[j]->data.num1,tnum2)!=0 && strcmp(k[j]->data.num2,tnum2)!=0 && strcmp(k[j]->data.num3,tnum2)!=0)
									 printf("��������Ŀγ̱������!����������!��\n");
							 }while(strcmp(k[j]->data.num1,tnum2)!=0 && strcmp(k[j]->data.num2,tnum2)!=0 && strcmp(k[j]->data.num3,tnum2)!=0);
							 if(strcmp(tnum2,k[j]->data.num1)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿ε�ƽʱ�ɼ�:");
									 scanf("%lf",&k[j]->data.usual1);
									 if(k[j]->data.usual1<0 || k[j]->data.usual1>100)
										 printf("��������ĳɼ�����!����������!��\n");
								 }while(k[j]->data.usual1<0 || k[j]->data.usual1>100);
								 k[j]->data.result1=0.7*k[j]->data.test1+0.3*k[j]->data.usual1;
								 printf("\n��ƽʱ�ɼ��ѳɹ�����!\n");
							 }
							 if(strcmp(tnum2,k[j]->data.num2)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿ε�ƽʱ�ɼ�:");
									 scanf("%lf",&k[j]->data.usual2);
									 if(k[j]->data.usual2<0 || k[j]->data.usual2>100)
										 printf("��������ĳɼ�����!����������!��\n");
								 }while(k[j]->data.usual2<0 || k[j]->data.usual2>100);
								 k[j]->data.result2=0.7*k[j]->data.test2+0.3*k[j]->data.usual2;
								 printf("\n��ƽʱ�ɼ��ѳɹ�����!\n");
							 }
							 if(strcmp(tnum2,k[j]->data.num3)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿ε�ƽʱ�ɼ�:");
									 scanf("%lf",&k[j]->data.usual3);
									 if(k[j]->data.usual3<0 || k[j]->data.usual3>100)
										 printf("��������ĳɼ�����!����������!��\n");
								 }while(k[j]->data.usual3<0 || k[j]->data.usual3>100);
								 k[j]->data.result3=0.7*k[j]->data.test3+0.3*k[j]->data.usual3;
								 printf("\n��ƽʱ�ɼ��ѳɹ�����!\n");
							 }
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 else
			 goto lab4;
	 }
	 /*���Գɼ�*/
	 else if(sel=='5')
	 {
		 printf("\n��ѡ���޸ĵķ�ʽ:\n1:����ѧ��ѧ���޸���Ϣ;\t\t2:����ѧ�������޸���Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ���޸�*/
		 if(sel=='1')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 while((p!=NULL)&&(h!=NULL))
				 {
					 if(strcmp(tnum,p->data.num)==0 && strcmp(tnum,h->data.num)==0)
					 {
						 printheader1();
						 printdata(p,h);
						 printf(HEADER5);
						 do
						 {
							 printf("������γ̱��:");
							 scanf("%s",tnum2);
							 if(strcmp(h->data.num1,tnum2)!=0 && strcmp(h->data.num2,tnum2)!=0 && strcmp(h->data.num3,tnum2)!=0)
								 printf("��������Ŀγ̱������!����������!��\n");
						 }while(strcmp(h->data.num1,tnum2)!=0 && strcmp(h->data.num2,tnum2)!=0 && strcmp(h->data.num3,tnum2)!=0);
						 if(strcmp(tnum2,h->data.num1)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿εĿ��Գɼ�:");
								 scanf("%lf",&h->data.test1);
								 if(h->data.test1<0 || h->data.test1>100)
									 printf("��������ĳɼ�����!����������!��\n");
							 }while(h->data.test1<0 || h->data.test1>100);
							 h->data.result1=0.7*h->data.test1+0.3*h->data.usual1;
							 printf("\n�¿��Գɼ��ѳɹ�����!\n");
						 }
						 if(strcmp(tnum2,h->data.num2)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿εĿ��Գɼ�:");
								 scanf("%lf",&h->data.test2);
								 if(h->data.test2<0 || h->data.test2>100)
									 printf("��������ĳɼ�����!����������!��\n");
							 }while(h->data.test2<0 || h->data.test2>100);
							 h->data.result2=0.7*h->data.test2+0.3*h->data.usual2;
							 printf("\n�¿��Գɼ��ѳɹ�����!\n");
						 }
						 if(strcmp(tnum2,h->data.num3)==0)
						 {
							 do
							 {
								 printf("�������µ�ѡ�޿εĿ��Գɼ�:");
								 scanf("%lf",&h->data.test3);
								 if(h->data.test3<0 || h->data.test3>100)
									 printf("��������ĳɼ�����!����������!��\n");
							 }while(h->data.test3<0 || h->data.test3>100);
							 h->data.result3=0.7*h->data.test3+0.3*h->data.usual3;
							 printf("\n�¿��Գɼ��ѳɹ�����!\n");
						 }
						 break;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
						 if(p==NULL && h==NULL)
							 printf("���������ѧ��ѧ�Ų�����!��\n");
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 /*���������޸�*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ���޸�ѧ����Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)      /*��ͬ��ͬ�յ�ѧ����ѡ����Ϣ�Ž�������*/
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
					 printf("�����������������!�Ҳ��������Ϣ!��\n");
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);                /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣ�޸�*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫ�޸ĵ�ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 do
							 {
								 printf("������γ̱��:");
								 scanf("%s",tnum2);
								 if(strcmp(k[j]->data.num1,tnum2)!=0 && strcmp(k[j]->data.num2,tnum2)!=0 && strcmp(k[j]->data.num3,tnum2)!=0)
									 printf("��������Ŀγ̱������!����������!��\n");
							 }while(strcmp(k[j]->data.num1,tnum2)!=0 && strcmp(k[j]->data.num2,tnum2)!=0 && strcmp(k[j]->data.num3,tnum2)!=0);
							 if(strcmp(tnum2,k[j]->data.num1)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿εĿ��Գɼ�:");
									 scanf("%lf",&k[j]->data.test1);
									 if(k[j]->data.test1<0 || k[j]->data.test1>100)
										 printf("��������ĳɼ�����!����������!��\n");
								 }while(k[j]->data.test1<0 || k[j]->data.test1>100);
								 k[j]->data.result1=0.7*k[j]->data.test1+0.3*k[j]->data.usual1;
								 printf("\n�¿��Գɼ��ѳɹ�����!\n");
							 }
							 if(strcmp(tnum2,k[j]->data.num2)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿εĿ��Գɼ�:");
									 scanf("%lf",&k[j]->data.test2);
									 if(k[j]->data.test2<0 || k[j]->data.test2>100)
										 printf("��������ĳɼ�����!����������!��\n");
								 }while(k[j]->data.test2<0 || k[j]->data.test2>100);
								 k[j]->data.result2=0.7*k[j]->data.test2+0.3*k[j]->data.usual2;
								 printf("\n�¿��Գɼ��ѳɹ�����!\n");
							 }
							 if(strcmp(tnum2,k[j]->data.num3)==0)
							 {
								 do
								 {
									 printf("�������µ�ѡ�޿εĿ��Գɼ�:");
									 scanf("%lf",&k[j]->data.test3);
									 if(k[j]->data.test3<0 || k[j]->data.test3>100)
										 printf("��������ĳɼ�����!����������!��\n");
								 }while(k[j]->data.test3<0 || k[j]->data.test3>100);
								 k[j]->data.result3=0.7*k[j]->data.test3+0.3*k[j]->data.usual3;
								 printf("\n�¿��Գɼ��ѳɹ�����!\n");
							 }
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab4;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab4;
			 }
		 }
		 else
			 goto lab4;
	 }
	 else
		 goto lab2;
	 }
	 }
	 //����ͷ�巨�����û������ѧ��������ѡ�޿γ���Ϣ
	 void insert(Node *head,Courselink *head2)
	 {
		 Node *p,*s,*r;
		 Courselink *h,*q,*k;
		 char ch,tnum[20],tnum1[20];
		 int i,n;
		 printf("\n������Ҫ������Ϣ��ѧ������(����0�򷵻�):");
		 scanf("%d",&n);
		 if(n!=0)
		 {
			 for(i=0;i<n;i++)
			 {
				 do
				 {
					 printf("������ѧ��ѧ��:");
					 scanf("%s",tnum);
					 if(strcmp(tnum,"0")==0)
						 printf("���������ѧ������!����������!��\n");
				 }while(strcmp(tnum,"0")==0);
				 s=head->next;
				 while(s)
				 {
					 if(strcmp(s->data.num,tnum)==0)
					 {
						 printf("��ѧ��Ϊ%s��ѧ���Ѿ�����!��\n",tnum);
						 return;
					 }
					 s=s->next;
				 }
				 p=(Node*)malloc(sizeof(Node));
				 h=(Courselink*)malloc(sizeof(Courselink));
				 strcpy(p->data.num,tnum);
				 strcpy(h->data.num,p->data.num);
				 printf("������ѧ��������:");
				 scanf("%s",p->data.name);
				 strcpy(h->data.name,p->data.name);
				 printf("������ѧ���İ༶:");
				 scanf("%s",p->data.classes);
				 do
				 {
					 printf("������ѧ�����Ա�(�л�Ů):");
					 scanf("%s",p->data.sex);
					 if((strcmp(p->data.sex,"��")!=0) && (strcmp(p->data.sex,"Ů")!=0))
						 printf("����������Ա��ʽ����!����������!��\n");
				 }while((strcmp(p->data.sex,"��")!=0) && (strcmp(p->data.sex,"Ů")!=0));
				 do
				 {
					 printf("������ѧ��������:");
					 scanf("%d",&p->data.age);
					 if(p->data.age<=0 || p->data.age>120)
						 printf("�����������������!����������!��\n");
				 }while(p->data.age<=0 || p->data.age>120);
				 do
				 {	
					 printf("��ѧ��ѡ�������ѡ�޿�(m<=3):");
					 scanf("%d",&p->data.m);
					 if(p->data.m<=0 || p->data.m>3)
						 printf("�����������������!����������!��\n");
				 }while(p->data.m<=0 || p->data.m>3);
				 switch(p->data.m)
				 {
				 case 1:
					 do
					 {
						 printf("����������ѡ�޿εı��:");
						 scanf("%s",h->data.num1);
						 if(strcmp(h->data.num1,"001")==0 || strcmp(h->data.num1,"002")==0 || strcmp(h->data.num1,"003")==0 || strcmp(h->data.num1,"004")==0 || strcmp(h->data.num1,"005")==0)
							 break;
						 else
							 printf("���������ı�Ų�����!����������!��\n");
					 }while(h->data.num1!="001" || h->data.num1!="002" || h->data.num1!="003" || h->data.num1!="004" || h->data.num1!="005");
					 do
					 {
						 printf("����������ѡ�޿ε�����:");
						 scanf("%s",h->data.name1);
						 if(strcmp(h->data.num1,"001")==0)
						 {
							 if(strcmp(h->data.name1,"��ѧ����")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"002")==0)
						 {
							 if(strcmp(h->data.name1,"��ѧ��ģ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"003")==0)
						 {
							 if(strcmp(h->data.name1,"�г�Ӫ��")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"004")==0)
						 {
							 if(strcmp(h->data.name1,"��Ȼ����ѧ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"005")==0)
						 {
							 if(strcmp(h->data.name1,"�й��մ�ʷ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
		 }while(strcmp(h->data.name1,"��ѧ����")!=0 || strcmp(h->data.name1,"��ѧ��ģ")!=0 || strcmp(h->data.name1,"�г�Ӫ��")!=0 || strcmp(h->data.name1,"��Ȼ����ѧ")!=0 || strcmp(h->data.name1,"�й��մ�ʷ")!=0);
		 do
		 {
			 printf("����������ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score1);
			 if(h->data.score1<=0 || h->data.score1>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score1<=0 || h->data.score1>4);
		 do
		 {
			 printf("����������ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test1);
			 if(h->data.test1<0 || h->data.test1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test1<0 || h->data.test1>100);
		 do
		 {
			 printf("����������ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual1);
			 if(h->data.usual1<0 || h->data.usual1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual1<0 || h->data.usual1>100);
		 h->data.result1=0.7*h->data.test1+0.3*h->data.usual1;
		 printf("��ѧ�����ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result1);
		 break;
				 case 2:
					 do
					 {
						 printf("�������һ��ѡ�޿εı��:");
						 scanf("%s",h->data.num1);
						 if(strcmp(h->data.num1,"001")==0 || strcmp(h->data.num1,"002")==0 || strcmp(h->data.num1,"003")==0 || strcmp(h->data.num1,"004")==0 || strcmp(h->data.num1,"005")==0)
							 break;
						 else
							 printf("���������ı�Ų�����!����������!��\n");
					 }while(h->data.num1!="001" || h->data.num1!="002" || h->data.num1!="003" || h->data.num1!="004" || h->data.num1!="005");
					 do
					 {
						 printf("�������һ��ѡ�޿ε�����:");
						 scanf("%s",h->data.name1);
						 if(strcmp(h->data.num1,"001")==0)
						 {
							 if(strcmp(h->data.name1,"��ѧ����")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"002")==0)
						 {
							 if(strcmp(h->data.name1,"��ѧ��ģ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"003")==0)
						 {
							 if(strcmp(h->data.name1,"�г�Ӫ��")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"004")==0)
						 {
							 if(strcmp(h->data.name1,"��Ȼ����ѧ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"005")==0)
						 {
							 if(strcmp(h->data.name1,"�й��մ�ʷ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
		 }while(strcmp(h->data.name1,"��ѧ����")!=0 || strcmp(h->data.name1,"��ѧ��ģ")!=0 || strcmp(h->data.name1,"�г�Ӫ��")!=0 || strcmp(h->data.name1,"��Ȼ����ѧ")!=0 || strcmp(h->data.name1,"�й��մ�ʷ")!=0);
		 do
		 {	
			 printf("�������һ��ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score1);
			 if(h->data.score1<=0 || h->data.score1>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score1<=0 || h->data.score1>4);
		 do
		 {
			 printf("�������һ��ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test1);
			 if(h->data.test1<0 ||h->data.test1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test1<0 || h->data.test1>100);
		 do
		 {
			 printf("�������һ��ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual1);
			 if(h->data.usual1<0 || h->data.usual1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual1<0 || h->data.usual1>100);
		 h->data.result1=0.7*h->data.test1+0.3*h->data.usual1;
		 printf("��ѧ����һ�ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result1);
		 do
		 {
			 do
			 {
				 printf("������ڶ���ѡ�޿εı��:");
				 scanf("%s",h->data.num2);
				 if(strcmp(h->data.num2,"001")==0 || strcmp(h->data.num2,"002")==0 || strcmp(h->data.num2,"003")==0 || strcmp(h->data.num2,"004")==0 || strcmp(h->data.num2,"005")==0)
					 break;
				 else
					 printf("���������ı�Ų�����!����������!��\n");
			 }while(h->data.num2!="001" || h->data.num2!="002" || h->data.num2!="003" || h->data.num2!="004" || h->data.num2!="005");
			 if(strcmp(h->data.num1,h->data.num2)==0)
				 printf("��������ظ�,����������!��\n");
		 }while(strcmp(h->data.num1,h->data.num2)==0);
		 do
		 {
			 do
			 {
				 printf("������ڶ���ѡ�޿ε�����:");
				 scanf("%s",h->data.name2);
				 if(strcmp(h->data.num2,"001")==0)
				 {
					 if(strcmp(h->data.name2,"��ѧ����")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"002")==0)
				 {
					 if(strcmp(h->data.name2,"��ѧ��ģ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"003")==0)
				 {
					 if(strcmp(h->data.name2,"�г�Ӫ��")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"004")==0)
				 {
					 if(strcmp(h->data.name2,"��Ȼ����ѧ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"005")==0)
				 {
					 if(strcmp(h->data.name2,"�й��մ�ʷ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
		 }while(strcmp(h->data.name2,"��ѧ����")!=0 || strcmp(h->data.name2,"��ѧ��ģ")!=0 || strcmp(h->data.name2,"�г�Ӫ��")!=0 || strcmp(h->data.name2,"��Ȼ����ѧ")!=0 || strcmp(h->data.name2,"�й��մ�ʷ")!=0);
		 if(strcmp(h->data.name1,h->data.name2)==0)
			 printf("���������ظ�,����������!��\n");
		 }while(strcmp(h->data.name1,h->data.name2)==0);
		 do
		 {	
			 printf("������ڶ���ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score2);
			 if(h->data.score2<=0 || h->data.score2>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score2<=0 || h->data.score2>4);
		 do
		 {
			 printf("������ڶ���ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test2);
			 if(h->data.test2<0 || h->data.test2>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test2<0 || h->data.test2>100);
		 do
		 {
			 printf("������ڶ���ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual2);
			 if(h->data.usual2<0 || h->data.usual2>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual2<0 || h->data.usual2>100);
		 h->data.result2=0.7*h->data.test2+0.3*h->data.usual2;
		 printf("��ѧ���ڶ��ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result2);
		 break;
				 case 3:
					 do
					 {
						 printf("�������һ��ѡ�޿εı��:");
						 scanf("%s",h->data.num1);
						 if(strcmp(h->data.num1,"001")==0 || strcmp(h->data.num1,"002")==0 || strcmp(h->data.num1,"003")==0 || strcmp(h->data.num1,"004")==0 || strcmp(h->data.num1,"005")==0)
							 break;
						 else
							 printf("���������ı�Ų�����!����������!��\n");
					 }while(h->data.num1!="001" || h->data.num1!="002" || h->data.num1!="003" || h->data.num1!="004" || h->data.num1!="005");
					 do
					 {
						 printf("�������һ��ѡ�޿ε�����:");
						 scanf("%s",h->data.name1);
						 if(strcmp(h->data.num1,"001")==0)
						 {
							 if(strcmp(h->data.name1,"��ѧ����")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"002")==0)
						 {
							 if(strcmp(h->data.name1,"��ѧ��ģ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"003")==0)
						 {
							 if(strcmp(h->data.name1,"�г�Ӫ��")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"004")==0)
						 {
							 if(strcmp(h->data.name1,"��Ȼ����ѧ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
						 else if(strcmp(h->data.num1,"005")==0)
						 {
							 if(strcmp(h->data.name1,"�й��մ�ʷ")==0)
								 break;
							 else
							 {
								 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
								 do
								 {
									 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
									 getchar();
									 scanf("%c",&ch);
									 if(ch=='y' || ch =='Y')
									 {
										 tips();
										 printf("\n");
										 break;
									 }
									 else if(ch=='n' || ch=='N')
										 break;
									 else
										 printf("�����������������������!��\n");
								 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
							 }
						 }
		 }while(strcmp(h->data.name1,"��ѧ����")!=0 || strcmp(h->data.name1,"��ѧ��ģ")!=0 || strcmp(h->data.name1,"�г�Ӫ��")!=0 || strcmp(h->data.name1,"��Ȼ����ѧ")!=0 || strcmp(h->data.name1,"�й��մ�ʷ")!=0);
		 do
		 {	
			 printf("�������һ��ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score1);
			 if(h->data.score1<=0 || h->data.score1>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score1<=0 || h->data.score1>4);
		 do
		 {
			 printf("�������һ��ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test1);
			 if(h->data.test1<0 || h->data.test1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test1<0 || h->data.test1>100);
		 do
		 {
			 printf("�������һ��ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual1);
			 if(h->data.usual1<0 || h->data.usual1>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual1<0 || h->data.usual1>100);
		 h->data.result1=0.7*h->data.test1+0.3*h->data.usual1;
		 printf("��ѧ����һ�ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result1);
		 do
		 {
			 do
			 {
				 printf("������ڶ���ѡ�޿εı��:");
				 scanf("%s",h->data.num2);
				 if(strcmp(h->data.num2,"001")==0 || strcmp(h->data.num2,"002")==0 || strcmp(h->data.num2,"003")==0 || strcmp(h->data.num2,"004")==0 || strcmp(h->data.num2,"005")==0)
					 break;
				 else
					 printf("���������ı�Ų�����!����������!��\n");
			 }while(h->data.num2!="001" || h->data.num2!="002" || h->data.num2!="003" || h->data.num2!="004" || h->data.num2!="005");
			 if(strcmp(h->data.num1,h->data.num2)==0)
				 printf("��������ظ�,����������!��\n");
		 }while(strcmp(h->data.num1,h->data.num2)==0);
		 do
		 {
			 do
			 {
				 printf("������ڶ���ѡ�޿ε�����:");
				 scanf("%s",h->data.name2);
				 if(strcmp(h->data.num2,"001")==0)
				 {
					 if(strcmp(h->data.name2,"��ѧ����")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"002")==0)
				 {
					 if(strcmp(h->data.name2,"��ѧ��ģ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"003")==0)
				 {
					 if(strcmp(h->data.name2,"�г�Ӫ��")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"004")==0)
				 {
					 if(strcmp(h->data.name2,"��Ȼ����ѧ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num2,"005")==0)
				 {
					 if(strcmp(h->data.name2,"�й��մ�ʷ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
		 }while(strcmp(h->data.name2,"��ѧ����")!=0 || strcmp(h->data.name2,"��ѧ��ģ")!=0 || strcmp(h->data.name2,"�г�Ӫ��")!=0 || strcmp(h->data.name2,"��Ȼ����ѧ")!=0 || strcmp(h->data.name2,"�й��մ�ʷ")!=0);
		 if(strcmp(h->data.name1,h->data.name2)==0)
			 printf("���������ظ�,����������!��\n");
		 }while(strcmp(h->data.name1,h->data.name2)==0);
		 do
		 {	
			 printf("������ڶ���ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score2);
			 if(h->data.score2<=0 || h->data.score2>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score2<=0 || h->data.score2>4);
		 do
		 {
			 printf("������ڶ���ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test2);
			 if(h->data.test2<0 || h->data.test2>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test2<0 || h->data.test2>100);
		 do
		 {
			 printf("������ڶ���ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual2);
			 if(h->data.usual2<0 || h->data.usual2>100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual2<0 || h->data.usual2>100);
		 h->data.result2=0.7*h->data.test2+0.3*h->data.usual2;
		 printf("��ѧ���ڶ��ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result2);
		 do
		 {
			 do
			 {
				 printf("�����������ѡ�޿εı��:");
				 scanf("%s",h->data.num3);
				 if(strcmp(h->data.num3,"001")==0 || strcmp(h->data.num3,"002")==0 || strcmp(h->data.num3,"003")==0 || strcmp(h->data.num3,"004")==0 || strcmp(h->data.num3,"005")==0)
					 break;
				 else
					 printf("���������ı�Ų�����!����������!��\n");
			 }while(h->data.num3!="001" || h->data.num3!="002" || h->data.num3!="003" || h->data.num3!="004" || h->data.num3!="005");
			 if(strcmp(h->data.num3,h->data.num1)==0 || strcmp(h->data.num3,h->data.num2)==0)
				 printf("��������ظ�,����������!��\n");
		 }while(strcmp(h->data.num3,h->data.num1)==0 || strcmp(h->data.num3,h->data.num2)==0);
		 do
		 {
			 do
			 {
				 printf("�����������ѡ�޿ε�����:");
				 scanf("%s",h->data.name3);
				 if(strcmp(h->data.num3,"001")==0)
				 {
					 if(strcmp(h->data.name3,"��ѧ����")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num3,"002")==0)
				 {
					 if(strcmp(h->data.name3,"��ѧ��ģ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num3,"003")==0)
				 {
					 if(strcmp(h->data.name3,"�г�Ӫ��")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num3,"004")==0)
				 {
					 if(strcmp(h->data.name3,"��Ȼ����ѧ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
				 else if(strcmp(h->data.num3,"005")==0)
				 {
					 if(strcmp(h->data.name3,"�й��մ�ʷ")==0)
						 break;
					 else
					 {
						 printf("��������Ŀγ��������Ų���Ӧ!����������!��\n");
						 do
						 {
							 printf("��Ҫ�鿴��ѡ�޿γ̱�Ŷ�Ӧ����<y/n>?");
							 getchar();
							 scanf("%c",&ch);
							 if(ch=='y' || ch =='Y')
							 {
								 tips();
								 printf("\n");
								 break;
							 }
							 else if(ch=='n' || ch=='N')
								 break;
							 else
								 printf("�����������������������!��\n");
						 }while(ch!='y' || ch!='Y' || ch!='n' || ch!='N');
					 }
				 }
		 }while(strcmp(h->data.name3,"��ѧ����")!=0 || strcmp(h->data.name3,"��ѧ��ģ")!=0 || strcmp(h->data.name3,"�г�Ӫ��")!=0 || strcmp(h->data.name3,"��Ȼ����ѧ")!=0 || strcmp(h->data.name3,"�й��մ�ʷ")!=0);
		 if(strcmp(h->data.name3,h->data.name1)==0 && strcmp(h->data.name3,h->data.name2)==0)
			 printf("���������ظ�,����������!��\n");
		 }while(strcmp(h->data.name3,h->data.name1)==0 && strcmp(h->data.name3,h->data.name2)==0);
		 do
		 {	
			 printf("�����������ѡ�޿ε�ѧ��(0<score<=4):");
			 scanf("%d",&h->data.score3);
			 if(h->data.score3<=0 || h->data.score3>4)
				 printf("���������ѧ�ֲ���ʵ��!����������!��\n");
		 }while(h->data.score3<=0 || h->data.score3>4);
		 do
		 {
			 printf("�����������ѡ�޿εĿ��Գɼ�:");
			 scanf("%lf",&h->data.test3);
			 if(h->data.test3<0 || h->data.test3>=100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.test3<0 || h->data.test3>=100);
		 do
		 {
			 printf("�����������ѡ�޿ε�ƽʱ�ɼ�:");
			 scanf("%lf",&h->data.usual3);
			 if(h->data.usual3<0 || h->data.usual3>=100)
				 printf("��������ĳɼ�����!����������!��\n");
		 }while(h->data.usual3<0 || h->data.usual3>=100);
		 h->data.result3=0.7*h->data.test3+0.3*h->data.usual3;
		 printf("��ѧ�������ſε��ۺϳɼ�Ϊ%0.2lf\n",h->data.result3);
		 break;
}
printf("������Ҫ����Ϣ���뵽�ĸ�ѧ�ŵ�ѧ��֮ǰ?��������ѧ��:");
do
{
	scanf("%s",tnum1);
	if(strcmp(tnum1,"0")==0)
		printf("���������ѧ������!����������!��\n");
}while(strcmp(tnum1,"0")==0);
r=head;
q=head2;
s=r->next;
k=q->next;
while(s!=NULL && k!=NULL)
{
	if(strcmp(s->data.num,tnum1)!=0 && strcmp(k->data.num,tnum1)!=0)
	{
		r=s;
		s=s->next;
		q=k;
		k=k->next;
		if(s==NULL && k==NULL)
		{	 
			printf("���������ѧ������!��Ϣδ���벢�������˵�!��\n");
			return;
		}
	}
	else if(strcmp(s->data.num,tnum1)==0 && strcmp(k->data.num,tnum1)==0)
	{
		p->next=r->next;
		r->next=p;
		h->next=q->next;
		q->next=h;
		break;
	}
}
}
printf("\n�ѳɹ�����%d��ѧ������ѡ�޿ε���Ϣ!\n",n);
}
else
return;
}
//��ѯѧ������ѡ�޿γ���Ϣ
void search(Node *head,Courselink *head2)
{
	Node *p,*s[10];
	Courselink *h,*k[10];
	int i=0,j;
	int sel;
	char tnum[20],tname[10];
	if((!head->next) && (!head2->next))
	{
		printf("�޼�¼!\n");
		return;
	}
	printf("\n�������ѯ�ķ�ʽ:\n1:����ѧ��ѧ�Ų�ѯ��Ϣ;\t\t2:����ѧ��������ѯ��Ϣ;\t\t*�����������ּ����ز˵�.\n");
	scanf("%d",&sel);
	if(sel==1)
	{
		printf("������ѧ����ѧ��:");
		scanf("%s",tnum);
		p=head->next;
        h=head2->next;
		while((p!=NULL) && (h!=NULL))
		{
			if(strcmp(p->data.num,tnum)==0 && strcmp(h->data.num,tnum)==0)
			{
				printheader1();
				while((p!=NULL) && (h!=NULL))
				{
					if(p->data.m==1)
					{
						printf(FORMAT1,DATA1);
						break;
					}
					else if(p->data.m==2)
					{
						printf(FORMAT1,DATA1);
						printf(FORMAT2,DATA2);
						break;
					}
					else if(p->data.m==3)
					{
						printf(FORMAT1,DATA1);
						printf(FORMAT2,DATA2);
						printf(FORMAT3,DATA3);
						break;
					}
				}
				printf(HEADER5);
				break;
			}
			else
			{
				p=p->next;
				h=h->next;
				if((p==NULL) && (h==NULL))
					printf("���������ѧ������!�Ҳ��������Ϣ!��\n");
			}
		}
	}
	else if(sel==2)
	{
		printf("������ѧ��������:");
		scanf("%s",tname);
		p=head->next;
        h=head2->next;
		while((p!=NULL) && (h!=NULL))
		{
			if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)
			{
				while(p!=NULL && h!=NULL)
				{
					if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)
					{
						s[i]=p;
						k[i]=h;
						i++;
					}
					p=p->next;
					h=h->next;
				}
				printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);
				printheader1();
				for(j=0;j<i;j++)
					printdata(s[j],k[j]);
				printf(HEADER5);
				break;
			}
			else
			{
				p=p->next;
				h=h->next;
				if((p==NULL) && (h==NULL))
					printf("�����������������!�Ҳ��������Ϣ!��\n");
			}
		}
	}
	else
		return;
}
//ɾ��ѧ������ѡ�޿γ���Ϣ
void del(Node *head,Courselink *head2)
{
	Node *p,*r,*s[10];
	Courselink *h,*q,*k[10];
	int j,i=0;
	char sel,ch,tnum[20],tname[10],tnum1[20];
	if((head->next==NULL) && (head2->next==NULL))
	{
		printf("�޼�¼!\n");	
        return;
	}
lab5:printf("\n��ѡ��ɾ��������:\n1:ɾ������ѡ�޿���Ϣ;\t2.ɾ����һ��ѡ�޿γɼ�;\t3.ɾ���ڶ���ѡ�޿γɼ�;\t4.ɾ��������ѡ�޿γɼ�;\t*����������س����ز˵�.\n");
	 getchar();
	 scanf("%c",&sel);
	 /*ɾ������ѡ�޿���Ϣ*/
	 if(sel=='1')
	 {
lab6:printf("\n��ѡ��ɾ���ķ�ʽ:\n1:����ѧ��ѧ��ɾ����Ϣ;\t\t2:����ѧ������ɾ����Ϣ;\t\t*����������س�������һ��.\n");
	 getchar();
	 scanf("%c",&sel);
	 /*����ѧ��ɾ��*/
	 if(sel=='1')
	 { 
		 printf("���Ƿ�ȷ��ɾ��ѧ��ѡ�޿���Ϣ?(y/n):");
		 getchar();
		 scanf("%c",&ch);
		 if(ch=='y' || ch=='Y')
		 {
			 printf("������ѧ����ѧ��:");
			 scanf("%s",tnum);
			 r=head;
			 p=r->next;
			 q=head2;
			 h=q->next;
			 while(p!=NULL && h!=NULL)
			 {
				 if(strcmp(p->data.num,tnum)!=0 && strcmp(h->data.num,tnum)!=0)
				 {
					 r=p;
					 p=p->next;
					 q=h;
					 h=h->next;
					 if(p==NULL && h==NULL)
					 {	 
						 printf("���������ѧ������!��Ϣδɾ�����������˵�!��\n");
						 return;
					 }
				 }
				 else if(strcmp(p->data.num,tnum)==0 && strcmp(h->data.num,tnum)==0)
				 {
					 printheader1();
					 if(p->data.m==1)
						 printf(FORMAT1,DATA1);
					 else if(p->data.m==2)
					 {
						 printf(FORMAT1,DATA1);
						 printf(FORMAT2,DATA2);
					 }
					 else if(p->data.m==3)
					 {
						 printf(FORMAT1,DATA1);
						 printf(FORMAT2,DATA2);
						 printf(FORMAT3,DATA3);
					 }
					 printf(HEADER5);
					 
					 r->next=p->next;
					 q->next=h->next;
					 free(p);
					 free(h);
					 printf("�ѳɹ�ɾ��ȫ��ѡ�޿���Ϣ!\n");
					 break;
				 }
				 
			 }
		 }
		 else if(ch=='n' || ch=='N')
		 { 
			 printf("��������һ��!��\n");
			 goto lab6;
		 }
		 else
		 {
			 printf("��������������!������һ��!��\n");
			 goto lab6;
		 }
	 }
	 /*��������ɾ��*/
	 else if(sel=='2')
	 {
		 printf("���Ƿ�ȷ��ɾ��ѧ��ѡ�޿���Ϣ?(y/n):");
		 getchar();
		 scanf("%c",&ch);
		 if(ch=='y' || ch=='Y')
		 {
			 printf("������ѧ��ԭ��������:");
			 scanf("%s",tname);
			 r=head;
			 p=r->next;
			 q=head2;
			 h=q->next;
			 while(p!=NULL && h!=NULL)
			 {
				 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)
				 {
					 s[i]=p;
					 k[i]=h;
					 i++;
				 }
				 p=p->next;
				 h=h->next;
			 }
			 if(i==0)
			 {	 
				 printf("�����������������!��Ϣδɾ�����������˵�!��\n");
				 return;
			 }
			 else
			 {
				 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);          /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣɾ��*/
				 printheader1();
				 for(j=0;j<i;j++)
					 printdata(s[j],k[j]);
				 printf(HEADER5);
				 printf("��������Ҫɾ����ѧ��ѧ��:");
				 scanf("%s",tnum1);
				 for(j=0;j<i;j++)
				 { 
					 r=head;
					 q=head2;
					 while(r->next!=s[j] && q->next!=k[j])
					 {
						 r=r->next;
						 q=q->next;
					 }
					 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
					 {
						 r->next=s[j]->next;
						 free(s[j]);
						 q->next=k[j]->next;
						 free(k[j]);
						 printf("�ѳɹ�ɾ��!\n");
						 break;
					 }
					 else
					 {
						 s[j]=s[j]->next;
						 k[j]=k[j]->next;
						 if(++j==i)
						 {
							 printf("���������ѧ��ѧ�Ų�����!��\n");
							 break;
						 }
					 }
				 }
			 }
		 }
		 else if(ch=='n' || ch=='N')
		 {
			 printf("��������һ��!��\n");
			 goto lab6;
		 }
		 else
		 {
			 printf("��������������!������һ��!��\n");
			 goto lab6;
		 }
	 }
	 else
		 goto lab5;
}
/*ɾ����һ��ѡ�޿���Ϣ*/
else if(sel=='2')
{
lab7:printf("\n��ѡ��ɾ���ķ�ʽ:\n1:����ѧ��ѧ��ɾ����Ϣ;\t\t2:����ѧ������ɾ����Ϣ;\t\t*����������س�������һ��.\n");
	 getchar();
	 scanf("%c",&sel);
	 /*����ѧ��ɾ��*/
	 if(sel=='1')
	 { 
		 printf("���Ƿ�ȷ��ɾ��ѧ��ѡ�޿���Ϣ?(y/n):");
		 getchar();
		 scanf("%c",&ch);
		 if(ch=='y' || ch=='Y')
		 {
			 printf("������ѧ����ѧ��:");
			 scanf("%s",tnum);
			 r=head;
			 p=r->next;
			 q=head2;
			 h=q->next;
			 while(p!=NULL && h!=NULL)
			 {
				 if(strcmp(p->data.num,tnum)!=0 && strcmp(h->data.num,tnum)!=0)
				 {
					 r=p;
					 p=p->next;
					 q=h;
					 h=h->next;
					 if(p==NULL && h==NULL)
					 {	 
						 printf("���������ѧ������!��Ϣδɾ�����������˵�!��\n");
						 return;
					 }
				 }
				 else if(strcmp(p->data.num,tnum)==0 && strcmp(h->data.num,tnum)==0)
				 {
					 if(p->data.m==1)
					 {	 
						 r->next=p->next;
						 q->next=h->next;
						 free(p);
						 free(h);
						 printf("�ѳɹ�ɾ����һ��ѡ�޿���Ϣ!\n");
					 }
					 else if(p->data.m==2)
					 {
						 strcpy(h->data.num1,h->data.num2);
                         strcpy(h->data.name1,h->data.name2);
                         h->data.score1=h->data.score2;
						 h->data.usual1=h->data.usual2;
						 h->data.test1=h->data.test2;
						 h->data.result1=h->data.result2;
						 p->data.m=1;
						 printf("�ѳɹ�ɾ����һ��ѡ�޿���Ϣ!\n");
					 }
					 else if(p->data.m==3)
					 {
						 strcpy(h->data.num1,h->data.num2);
                         strcpy(h->data.name1,h->data.name2);
                         h->data.score1=h->data.score2;
						 h->data.usual1=h->data.usual2;
						 h->data.test1=h->data.test2;
						 h->data.result1=h->data.result2;
						 strcpy(h->data.num2,h->data.num3);
                         strcpy(h->data.name2,h->data.name3);
                         h->data.score2=h->data.score3;
						 h->data.usual2=h->data.usual3;
						 h->data.test2=h->data.test3;
						 h->data.result2=h->data.result3;
						 p->data.m=2;
						 printf("�ѳɹ�ɾ����һ��ѡ�޿���Ϣ!\n");
					 }
					 break;
				 }
			 }
		 }
		 else if(ch=='n' || ch=='N')
		 { 
			 printf("��������һ��!��\n");
			 goto lab7;
		 }
		 else
		 {
			 printf("��������������!������һ��!��\n");
			 goto lab7;
		 }
	 }
	 /*��������ɾ��*/
	 else if(sel=='2')
	 {
		 printf("���Ƿ�ȷ��ɾ��ѧ��ѡ�޿���Ϣ?(y/n):");
		 getchar();
		 scanf("%c",&ch);
		 if(ch=='y' || ch=='Y')
		 {
			 printf("������ѧ��ԭ��������:");
			 scanf("%s",tname);
			 r=head;
			 p=r->next;
			 q=head2;
			 h=q->next;
			 while(p!=NULL && h!=NULL)
			 {
				 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)
				 {
					 s[i]=p;
					 k[i]=h;
					 i++;
				 }
				 p=p->next;
				 h=h->next;
			 }
			 if(i==0)
			 {	 
				 printf("�����������������!��Ϣδɾ�����������˵�!��\n");
				 return;
			 }
			 else
			 {
				 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);          /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣɾ��*/
				 printheader1();
				 for(j=0;j<i;j++)
					 printdata(s[j],k[j]);
				 printf(HEADER5);
				 printf("��������Ҫɾ����ѧ��ѧ��:");
				 scanf("%s",tnum1);
				 for(j=0;j<i;j++)
				 {
					 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
					 {
						 if(s[j]->data.m==1)
						 {	 
							 r=head;
							 q=head2;
							 while(r->next!=s[j] && q->next!=k[j])
							 {
								 r=r->next;
								 q=q->next;
							 }
							 r->next=s[j]->next;
							 free(s[j]);
							 q->next=k[j]->next;
							 free(k[j]);
							 printf("�ѳɹ�ɾ����һ��ѡ�޿���Ϣ!\n");
							 break;
						 }
						 else if(s[j]->data.m==2)
						 {
							 strcpy(k[j]->data.num1,k[j]->data.num2);
							 strcpy(k[j]->data.name1,k[j]->data.name2);
							 k[j]->data.score1=k[j]->data.score2;
							 k[j]->data.usual1=k[j]->data.usual2;
							 k[j]->data.test1=k[j]->data.test2;
							 k[j]->data.result1=k[j]->data.result2;
							 s[j]->data.m=1;
							 printf("�ѳɹ�ɾ����һ��ѡ�޿���Ϣ!\n");
							 break;
						 }
						 else if(s[j]->data.m==3)
						 {
							 strcpy(k[j]->data.num1,k[j]->data.num2);
							 strcpy(k[j]->data.name1,k[j]->data.name2);
							 k[j]->data.score1=k[j]->data.score2;
							 k[j]->data.usual1=k[j]->data.usual2;
							 k[j]->data.test1=k[j]->data.test2;
							 k[j]->data.result1=k[j]->data.result2;
							 strcpy(k[j]->data.num2,k[j]->data.num3);
							 strcpy(k[j]->data.name2,k[j]->data.name3);
							 k[j]->data.score2=k[j]->data.score3;
							 k[j]->data.usual2=k[j]->data.usual3;
							 k[j]->data.test2=k[j]->data.test3;
							 k[j]->data.result2=k[j]->data.result3;
							 s[j]->data.m=2;
							 printf("�ѳɹ�ɾ����һ��ѡ�޿���Ϣ!\n");
							 break;
						 }
					 }
					 else
					 {
						 s[j]=s[j]->next;
						 k[j]=k[j]->next;
						 if(++j==i)
						 {
							 printf("���������ѧ��ѧ�Ų�����!��\n");
							 break;
						 }
					 }
				 }
			 }
		 }
		 else if(ch=='n' || ch=='N')
		 {
			 printf("��������һ��!��\n");
			 goto lab7;
		 }
		 else
		 {
			 printf("��������������!������һ��!��\n");
			 goto lab7;
		 }
	 }
	 else
		 goto lab5;
	 }
	 /*ɾ���ڶ���ѡ�޿���Ϣ*/
	 else if(sel=='3')
	 {
		 printf("\n��ѡ��ɾ���ķ�ʽ:\n1:����ѧ��ѧ��ɾ����Ϣ;\t\t2:����ѧ������ɾ����Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ��ɾ��*/
		 if(sel=='1')
		 { 
			 printf("���Ƿ�ȷ��ɾ��ѧ��ѡ�޿���Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 r=head;
				 p=r->next;
				 q=head2;
				 h=q->next;
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.num,tnum)!=0 && strcmp(h->data.num,tnum)!=0)
					 {
						 r=p;
						 p=p->next;
						 q=h;
						 h=h->next;
						 if(p==NULL && h==NULL)
						 {	 
							 printf("���������ѧ������!��Ϣδɾ�����������˵�!��\n");
							 return;
						 }
					 }
					 else if(strcmp(p->data.num,tnum)==0 && strcmp(h->data.num,tnum)==0)
					 {
						 if(p->data.m==1)
						 {	 
							 printf("��ֻ��һ��ѡ�޿�,�޷�ɾ���ڶ���ѡ�޿���Ϣ!��\n");
							 break;
						 }
						 else if(p->data.m==2)
						 {
							 p->data.m=1;
							 printf("�ѳɹ�ɾ���ڶ���ѡ�޿���Ϣ!\n");
							 break;
						 }
						 else if(p->data.m==3)
						 {
							 strcpy(h->data.num2,h->data.num3);
							 strcpy(h->data.name2,h->data.name3);
							 h->data.score2=h->data.score3;
							 h->data.usual2=h->data.usual3;
							 h->data.test2=h->data.test3;
							 h->data.result2=h->data.result3;
							 p->data.m=2;
							 printf("�ѳɹ�ɾ���ڶ���ѡ�޿���Ϣ!\n");
							 break;
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 { 
				 printf("��������һ��!��\n");
				 goto lab7;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab7;
			 }
		 }
		 /*��������ɾ��*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ��ɾ��ѧ��ѡ�޿���Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 r=head;
				 p=r->next;
				 q=head2;
				 h=q->next;
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
				 {	 
					 printf("�����������������!��Ϣδɾ�����������˵�!��\n");
					 return;
				 }
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);          /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣɾ��*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫɾ����ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 if(s[j]->data.m==1)
								 printf("��ֻ��һ��ѡ�޿�,�޷�ɾ���ڶ���ѡ�޿���Ϣ!��\n");
							 else if(s[j]->data.m==2)
							 {
								 s[j]->data.m=1;
								 printf("�ѳɹ�ɾ���ڶ���ѡ�޿���Ϣ!\n");
							 }
							 else if(s[j]->data.m==3)
							 {
								 strcpy(k[j]->data.num2,k[j]->data.num3);
								 strcpy(k[j]->data.name2,k[j]->data.name3);
								 k[j]->data.score2=k[j]->data.score3;
								 k[j]->data.usual2=k[j]->data.usual3;
								 k[j]->data.test2=k[j]->data.test3;
								 k[j]->data.result2=k[j]->data.result3;
								 s[j]->data.m=2;
								 printf("�ѳɹ�ɾ���ڶ���ѡ�޿���Ϣ!\n");
							 }
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab7;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab7;
			 }
		 }
		 else
			 goto lab5;
	 }
	 /*ɾ��������ѡ�޿���Ϣ*/
	 else if(sel=='4')
	 {
		 printf("\n��ѡ��ɾ���ķ�ʽ:\n1:����ѧ��ѧ��ɾ����Ϣ;\t\t2:����ѧ������ɾ����Ϣ;\t\t*����������س�������һ��.\n");
		 getchar();
		 scanf("%c",&sel);
		 /*����ѧ��ɾ��*/
		 if(sel=='1')
		 { 
			 printf("���Ƿ�ȷ��ɾ��ѧ��ѡ�޿���Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ����ѧ��:");
				 scanf("%s",tnum);
				 r=head;
				 p=r->next;
				 q=head2;
				 h=q->next;
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.num,tnum)!=0 && strcmp(h->data.num,tnum)!=0)
					 {
						 r=p;
						 p=p->next;
						 q=h;
						 h=h->next;
						 if(p==NULL && h==NULL)
						 {	 
							 printf("���������ѧ������!��Ϣδɾ�����������˵�!��\n");
							 return;
						 }
					 }
					 else if(strcmp(p->data.num,tnum)==0 && strcmp(h->data.num,tnum)==0)
					 {
						 if(p->data.m==1)
							 printf("��ֻ��һ��ѡ�޿�,�޷�ɾ��������ѡ�޿���Ϣ!��\n");
						 else if(p->data.m==2)
							 printf("��ֻ������ѡ�޿�,�޷�ɾ��������ѡ�޿���Ϣ!��\n");
						 else if(p->data.m==3)
						 {
							 p->data.m=2;
							 printf("�ѳɹ�ɾ��������ѡ�޿���Ϣ!\n");
						 }
						 break;
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 { 
				 printf("��������һ��!��\n");
				 goto lab7;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab7;
			 }
		 }
		 /*��������ɾ��*/
		 else if(sel=='2')
		 {
			 printf("���Ƿ�ȷ��ɾ��ѧ��ѡ�޿���Ϣ?(y/n):");
			 getchar();
			 scanf("%c",&ch);
			 if(ch=='y' || ch=='Y')
			 {
				 printf("������ѧ��ԭ��������:");
				 scanf("%s",tname);
				 r=head;
				 p=r->next;
				 q=head2;
				 h=q->next;
				 while(p!=NULL && h!=NULL)
				 {
					 if(strcmp(p->data.name,tname)==0 && strcmp(h->data.name,tname)==0)
					 {
						 s[i]=p;
						 k[i]=h;
						 i++;
					 }
					 p=p->next;
					 h=h->next;
				 }
				 if(i==0)
				 {	 
					 printf("�����������������!��Ϣδɾ�����������˵�!��\n");
					 return;
				 }
				 else
				 {
					 printf("\nͬ��ͬ�յ�ѧ��һ����%d��!\n",i);          /*��ͬ��ͬ���ߵ�����ͳ�ƣ��ٶ��û������ѧ�Ž�����Ϣɾ��*/
					 printheader1();
					 for(j=0;j<i;j++)
						 printdata(s[j],k[j]);
					 printf(HEADER5);
					 printf("��������Ҫɾ����ѧ��ѧ��:");
					 scanf("%s",tnum1);
					 for(j=0;j<i;j++)
					 {
						 if(strcmp(s[j]->data.num,tnum1)==0 && strcmp(k[j]->data.num,tnum1)==0)
						 {
							 if(s[j]->data.m==1)
								 printf("��ֻ��һ��ѡ�޿�,�޷�ɾ��������ѡ�޿���Ϣ!��\n");
							 else if(s[j]->data.m==2)
								 printf("��ֻ������ѡ�޿�,�޷�ɾ��������ѡ�޿���Ϣ!��\n");
							 else if(s[j]->data.m==3)
							 {
								 s[j]->data.m=2;
								 printf("�ѳɹ�ɾ��������ѡ�޿���Ϣ!\n");
							 }
							 break;
						 }
						 else
						 {
							 s[j]=s[j]->next;
							 k[j]=k[j]->next;
							 if(++j==i)
							 {
								 printf("���������ѧ��ѧ�Ų�����!��\n");
								 break;
							 }
						 }
					 }
				 }
			 }
			 else if(ch=='n' || ch=='N')
			 {
				 printf("��������һ��!��\n");
				 goto lab7;
			 }
			 else
			 {
				 printf("��������������!������һ��!��\n");
				 goto lab7;
			 }
		 }
		 else
			 goto lab5;
	 }
	 }
	 
	 //��ʾ����ѧ������ѡ�޿γ���Ϣ
	 void showall(Node *head,Courselink *head2)
	 {
		 Node *p;
		 Courselink *h;
		 p=head->next;
		 h=head2->next;
		 if((head->next==NULL) && (head2->next==NULL))
		 {
			 printf("�޼�¼!\n");	
			 return;
		 }
		 else
		 {
			 printheader1();
			 while((p!=NULL) && (h!=NULL))
			 {
				 if(p->data.m==1)
					 printf(FORMAT1,DATA1);
				 else if(p->data.m==2)
				 {
					 printf(FORMAT1,DATA1);
					 printf(FORMAT2,DATA2);
				 }
				 else if(p->data.m==3)
				 {
					 printf(FORMAT1,DATA1);
					 printf(FORMAT2,DATA2);
					 printf(FORMAT3,DATA3);
				 }
				 p=p->next;
				 h=h->next;
			 }
			 printf(HEADER5);
		 }
	 }
	 //����ѧ�����Ź���ƽ���ɼ����������򣬲���ֱ�Ӳ��������ȶ�������Ϊ����ʽ��ʱ�临�Ӷ�
	 void orderaver(Node *head,Courselink *head2)
	 {
		 Node *p,*f,*s;
		 Courselink *h,*pre,*r;
		 int re=1;              /*��¼ѧ�����εı���*/
		 p=head->next;
		 h=head2->next;
		 if((head->next==NULL) && (head2->next==NULL))
		 {
			 printf("�޼�¼!\n");
			 return;
		 }
		 while(p&&h)
		 {
			 if(p->data.m==1)
				 h->data.aver=h->data.result1;
			 else if(p->data.m==2)
				 h->data.aver=(h->data.result1+h->data.result2)/2;
			 else if(p->data.m==3)
				 h->data.aver=(h->data.result1+h->data.result2+h->data.result3)/3;
			 p=p->next;
			 h=h->next;
		 }
		 h=head2->next;
		 r=h->next;        /*r����*h��̽��ָ�룬�Ա�֤������*/
		 h->next=NULL;     /*����ֻ��һ�����ݽ��������*/
		 h=r;
		 p=head->next;
		 s=p->next;
		 p->next=NULL;
		 p=s;
		 while(p!=NULL && h!=NULL)
		 {
			 r=h->next;       /*����*h�ĺ�̽��ָ��*/
			 pre=head2;
			 s=p->next;
			 f=head;
			 while(f->next!=NULL && pre->next!=NULL && pre->next->data.aver>h->data.aver)
			 {	
				 pre=pre->next;    /*��������в��Ҳ���*h��ǰ�����*pre*/
				 f=f->next;
			 }
			 h->next=pre->next;   /*��*h���뵽*pre֮��*/
			 pre->next=h;
			 h=r;                 /*ɨ��ԭ��������ʣ�µĽ��*/
			 p->next=f->next;
			 f->next=p;
			 p=s;
		 }
		 printf("\n***��ƽ���ɼ��ɸߵ�������***\n");
		 printheader3();
		 p=head->next;
		 h=head2->next;
		 while(p&&h)
		 {
			 p->data.NO=re++;
			 printf(FORMAT7,DATA7);
			 p=p->next;
			 h=h->next;
		 }
		 printf(HEADER15);
	 }
	 //�г�������ѧ��������
	 void showbad(Node *head,Courselink *head2)
	 {
		 Node *p;
		 Courselink *h;
		 p=head->next;
		 h=head2->next;
		 if((head->next==NULL) && (head2->next==NULL))
		 {
			 printf("�޼�¼!\n");
			 return;
		 }
		 else
		 {
			 printheader2();
			 while((p!=NULL) && (h!=NULL))
			 {
				 if(p->data.m==1)
				 {
					 if(h->data.result1<60)
					 {
						 printf(FORMAT4,DATA4);
						 p=p->next;
						 h=h->next;
					 }
					 else
					 {
						 p=p->next;
						 h=h->next;
					 }
				 }
				 else if(p->data.m==2)
				 {
					 if(h->data.result1<60 && h->data.result2>=60)
						 printf(FORMAT4,DATA4);
					 if(h->data.result1>=60 && h->data.result2<60)
						 printf(FORMAT4,DATA5);
					 if(h->data.result1<60 && h->data.result2<60)
					 {
						 printf(FORMAT4,DATA4);
						 printf(FORMAT5,DATA8);
					 }
					 p=p->next;
					 h=h->next;
				 }
				 else if(p->data.m==3)
				 {
					 if(h->data.result1<60)
					 {
						 if(h->data.result2>=60)
						 {
							 if(h->data.result3>=60)
								 printf(FORMAT4,DATA4);
							 else
							 {
								 printf(FORMAT4,DATA4);
								 printf(FORMAT5,DATA9);
							 }
						 }
						 else
						 {
							 if(h->data.result3>=60)
							 {
								 printf(FORMAT4,DATA4);
								 printf(FORMAT5,DATA8);
							 }
							 else
							 {
								 printf(FORMAT4,DATA4);
								 printf(FORMAT5,DATA8);
								 printf(FORMAT6,DATA9);
							 }
						 }
					 }
					 else
					 {
						 if(h->data.result2>=60)
						 {
							 if(h->data.result3<0)
								 printf(FORMAT4,DATA6);
						 }
						 else
						 {
							 if(h->data.result3>=0)
								 printf(FORMAT4,DATA5);
							 else
							 {
								 printf(FORMAT4,DATA5);
								 printf(FORMAT5,DATA9);
							 }
						 }
					 }
					 p=p->next;
					 h=h->next;
				 }
				 else
				 {
					 p=p->next;
					 h=h->next;
					 if(p==NULL && h==NULL)
						 printf("�޲������ѧ��!\n");
				 }
			 }
			 printf(HEADER10);
		 }
}
//��ȡ��������Ϣ�����ļ�����
void read(Node *l,Courselink *k)
{
	FILE *fp1;
	Node *r,*p;
	Courselink *q,*h;
	r=l;
	q=k;
	fp1=fopen("������Ϣ.txt","rb+");/*�򿪴洢������Ϣ���ļ�*/
	if(fp1==NULL)
	{
		printf("��û�л�����Ϣ!��\n");
		return ;
	}
	while(feof(fp1)==0)
	{
		p=(Node *)malloc(sizeof(Node));
		h=(Courselink *)malloc(sizeof(Courselink));
		if(fread(p,sizeof(Node),1,fp1)==1 && fread(h,sizeof(Courselink),1,fp1)==1)/*��ָ�������ļ���ȡ��¼*/
		{
			p->next=NULL;/*��������*/
			r->next=p;
			r=p;
			h->next=NULL;
			q->next=h;
			q=h;
			count1++;
		}
	}
	fclose(fp1);
}
//����ѧ������ѡ�޿γ���Ϣ
void save(Node *l,Courselink *k)
{
	FILE *fp;
	Node *p;
	Courselink *h;
	int count=0,flag=1;
	fp=fopen("������Ϣ.txt","wb+");
	if(fp==NULL)
	{
		printf("���޷��򿪻�����Ϣ�ļ�!��\n");
		return;
	}
	p=l->next;
	h=k->next;
	while(p && h)
	{
		if(fwrite(p,sizeof(Node),1,fp)==1 && fwrite(h,sizeof(Courselink),1,fp)==1)
		{
			p=p->next;
			h=h->next;
			count++;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("�ѱ���%d��ѧ���Ļ�����Ϣ!\n",count-count1);
	}
	fclose(fp);
}
//������
main()
{
	int ch,i;
	char pr[20],word;
	Node *L;
	Courselink *k;
	L=(Node*)malloc(sizeof(Node));
	L->next=NULL;
	k=(Courselink*)malloc(sizeof(Courselink));
	k->next=NULL;
	while(1)
	{
		printf("\n\n");
		printf("\t\t|����������������������������������������|\n");
		printf("\t\t|                                        |\n");
		printf("\t\t|   �� ��ӭʹ��ѧ���ɼ���Ϣ����ϵͳ ��   |\n");
		printf("\t\t|                                        |\n");
		printf("\t\t|         �����ˣ������� ����Ө          |\n");
		printf("\t\t|                                        |\n");
		printf("\t\t|����������������������������������������|\n");
		printf("\t\t ������ϵͳ���룺");
		i=0;
		while((word=getch())!='\r') 
		{
            if(word=='\b' && i>0) 
			{
                printf("\b \b");                 /*'\b'�������һ���ո�' '���滻�����һ���ַ�*/
                --i;
            }
            else if(word!='\b') 
			{
                pr[i++]=word;
                printf("*");
            }
		}
        pr[i]='\0';
		if(strcmp(pr,"123456")==0)
		{
			printf("\n\t\t ��������ȷ!��\n");
			Sleep(500);
			system("CLS");
			break;
		}
		else
		{
			printf("\n\t\t ����������!��\n");
			printf("\n\t\t ����2�����������������...");
			Sleep(1000);
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b1�����������������...");
			Sleep(1000);
			system("CLS");
		}
	}
	read(L,k);
	while(1)
	{
		menu();
		do
		{
			printf("\n����������ѡ��(0~10):");
			scanf("%d",&ch);
			if(ch<0 ||ch>10)
				printf("��������������!����������!��\n");
		}while(ch<0 ||ch>10);
		switch(ch)
		{
		case 1:
			info(L,k);
            break;
		case 2:
			modify(L,k);
			break;
		case 3:
			insert(L,k);
			break;
		case 4:
			search(L,k);
			break;
		case 5:
			del(L,k);
			break;
		case 6:
			showall(L,k);
			break;
		case 7:
			orderaver(L,k);
			break;
		case 8:
			showbad(L,k);
			break;
		case 9:
			save(L,k);
			break;
		case 10:
			tips();
			break;
		case 0:
			printf("\n��лʹ��ѧ���ɼ���Ϣ����ϵͳ!\n");
			return 0;
		}
		printf("Press any key to continue...\n");
		getch();
	}
	return 0;
}
