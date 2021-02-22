#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct    //结点数据类型
{
   char  key[10];    // 学号
   char  name[10];   //姓名
   int   age ;       //年龄

}Student;  

typedef struct  n     //定义链表结构
{ 
    Student   stuData;
    struct  n  *link ;  
   
}Node;

//在链表结构中追加结点
Node  *AddNode(Node *head , Student data)
{
    Node *p,  *hp;

    if(!(p=(Node *)malloc(sizeof(Node))))
    {
        printf("申请内存失败！\n");
        return NULL;                //分配内存失败
    }
    else
    {
        p->stuData = data;     //保存数据
        p->link = NULL;        //设置结点指针为空，即为表尾

        if(head == NULL)       
        {
            head = p;
            return head;
        }

        hp = head;
        while(hp->link!=NULL)  //查找链表的表尾
        {
            hp = hp->link;
        }

        hp->link = p;
        
        return head;
    }
}

//插入头结点
Node  *AddFirstNode(Node *head, Student data)
{
    Node *p;
    if(!(p=(Node *)malloc(sizeof(Node))))
    {
        printf("申请内存失败！\n");
        return NULL;                //分配内存失败
    }
    else
    {
        p->stuData = data;
        p->link = NULL;   //注意这里
        head = p;          //头指针指向新增结点

        return head;
    }
}
//查找结点
Node *FindNode(Node * head, char *key)
{
    Node *p;
    p = head;    //保存链表头指针

    while(p!=NULL)  //如结点有效，则进行查找
    {
        if(strcmp(p->stuData.key,key)==0)   //若结点学号关键字与传入学号相同
        {
             return p;   //返回该结点指针
        }
        p = p->link ;    //处理下一个结点
    }
    return NULL;  //没有找到返回空指针
}

//插入结点
Node  *InsertNode(Node *head, char *findkey, Student data)  
{
    Node *p, *hp;

    if(!(p=(Node *)malloc(sizeof(Node)))) //分配保存结点的内容
    {
        printf("申请内存失败！\n");
        return NULL;                //分配内存失败
    }

    p->stuData = data ;
    hp = FindNode(head,findkey);

    if(hp)  //若要找到要插入的结点
    {
       p->link = hp->link;  //新插入结点指向关键结点的下一个结点
       hp->link = p;        //设置插入点前一个关键结点指向新插入结点
    }
    else
    {
        printf("未找到正确的插入位置！\n");
        free(p) ;  //释放内存
    }

    return head;

}

//删除结点
int  DelNode(Node *head, char *key)
{
     Node *p,*q;   //q保存删除节点的前一个结点
     p = q = head;

     while(p)
     {
         if(strcmp(p->stuData.key,key)==0)  //找到关键字，执行删除
         {
             q->link = p->link;  //使前一节点指向当前节点的下一个节点
             free(p);   //释放内存
             return 1;
         }
         else
         {
             q = p;     //指向当前节点
             p = p->link; //指向下一个节点
         }

     }

     return 0 ; //为删除
}

//计算链表长度
int  Length(Node *head)
{
     Node *p;
     int  len = 0;
     p = head;
     while(p) //遍历整个链表
     {
         len++;        //累计节点数目
         p = p->link;  // 处理下一个节点
     }

     return len;  //返回节点数量
}

//显示所有结点
void  DisplayAllNode(Node *head)
{
    Node *p;
    Student  s;

    p = head;
    printf("当前链表共有%d个结点。链表所有数据如下：\n",Length(head));
    
    while(p)
    {
        s = p->stuData;
        printf("结点(%s,%s,%d)\n", s.key,s.name,s.age);
        p = p->link;
    }
}

int main(void)
{
     Node *p,*head=NULL;

     Student  data;
     char key[10],findkey[10];

     printf("输入链表中数据,格式:  学号    姓名   年龄\n");
     do
     {
         fflush(stdin); //清空输入缓冲区
         scanf("%s",data.key);
         if(strcmp(data.key,"0")==0)
         {
             break; //若输入0，则退出
         }
         else
         {
             scanf("%s%d",data.name,&data.age);  //输入插入结点数据
             head = AddNode(head,data);  //在链表尾部添加结点

         }
     } while(1);

     DisplayAllNode(head);  //显示所有节点

     printf("\n插入结点：输入插入位置的关键字:");
     scanf("%s",findkey);    //输入要插入的学号
     //strcpy(data.key,findkey);
     printf("输入插入结点的数据( 学号  姓名   年龄):");
     scanf("%s%s%d",data.key,data.name,&data.age); // 输入插入结点数据

     head = InsertNode(head,findkey,data);
     DisplayAllNode(head);  //显示所有节点

     printf("\n删除结点：输入要删除的学号：");
     fflush(stdin);
     scanf("%s",key); //输入要删除学号
     DelNode(head,key); //调用删除结点的函数
     DisplayAllNode(head);

     printf("\n链表查找信息:输入查找的学号"); 
     fflush(stdin);
     scanf("%s",key);
     p = FindNode(head,key);

     if(p)
     {
         data = p->stuData;
         printf("学号:%s对应的结点信息为(%s,%s,%d)\n",data.key,data.key,data.name,data.age);
        
     }
     else
     {
         printf("在链表中未找到学号:%s的信息！\n",key);
     }

    return 0; 

     
}