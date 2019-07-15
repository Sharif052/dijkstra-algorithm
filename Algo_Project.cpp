#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
#include<typeinfo>
#include<stdlib.h>
#include<stdio.h>
#include <conio.h>

using namespace std;

#define GRAPHSIZE 2048
#define INFINITY GRAPHSIZE*GRAPHSIZE
#define MAX(a, b) ((a > b) ? (a) : (b))
int menu,dist1,dist2,i,j,br,so,in,b,p,q,w,count=1,D[10][10],bd[10];
string st="sharif";
    char pass[32];
string S[10],str,BD[8]={"O+","O-","A+","A-","B+","B-","AB+","AB-"};
char a;
int u, v;
int e; /* The number of nonzero edges in the graph */
int n; /* The number of nodes in the graph */
long dist[GRAPHSIZE][GRAPHSIZE]; /* dist[i][j] is the distance between node i and j; or 0 if there is no direct connection */
long d[GRAPHSIZE]; /* d[i] is the length of the shortest path between the source (s) and node i */


using namespace std;

void Display(int dist1,int dist2) {
    ifstream name;
    name.open("name.txt");

    cout<<S[dist1]<< " to "<<S[dist2]<<" ="<<d[dist2]<<endl<<endl;


    cout<<"if you want to see all the brunches in shortest path press 1 or press 0 for stop:"; cin>>br;
	if(br==1){
	for (i = 1; i <= n; ++i) {
            name>>str;
            cout<<str<<"     - ";
	    	cout<< d[i]<<" minutes"<<endl;
	}
	}
	printf("\n");

}


void dijkstra(int s) {
	int i, k, mini;
	int visited[GRAPHSIZE];

	for (i = 1; i <= n; ++i) {
		d[i] = INFINITY;
		visited[i] = 0; /* the i-th element has not yet been visited */
	}

	d[s] = 0;

	for (k = 1; k <= n; ++k) {
		mini = -1;
		for (i = 1; i <= n; ++i)
			if (!visited[i] && ((mini == -1) || (d[i] < d[mini])))
				mini = i;

		visited[mini] = 1;

		for (i = 1; i <= n; ++i)
			if (dist[mini][i])
				if (d[mini] + dist[mini][i] < d[i])
					d[i] = d[mini] + dist[mini][i];
	}
}

void blood_store(int so,int in)
{
        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("blood_store.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}

void rampura(int so,int in)
{
    ifstream store;
            store.open("rampura.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("rampura.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void khilgao(int so,int in)
{
    ifstream store;
            store.open("khilgao.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("khilgao.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void malibagh(int so,int in)
{
    ifstream store;
            store.open("malibagh.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("malibagh.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void mohakhali(int so,int in)
{
    ifstream store;
            store.open("mohakhali.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("mohakhali.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void farmgate(int so,int in)
{
    ifstream store;
            store.open("farmgate.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("farmgate.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void dhanmondi(int so,int in)
{
    ifstream store;
            store.open("dhanmondi.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("dhanmondi.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void shahbagh(int so,int in)
{
    ifstream store;
            store.open("shahbagh.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("shahbagh.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void kakrail(int so,int in)
{
    ifstream store;
            store.open("kakrail.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("kakrail.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void gulisthan(int so,int in)
{
    ifstream store;
            store.open("gulisthan.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("gulisthan.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}
void motijheel(int so,int in)
{
    ifstream store;
            store.open("motijheel.txt");
                 for(i=0;i<8;i++)
                    store>>bd[i];

        bd[so]=bd[so]+in;
        ofstream store1;
            store1.open("motijheel.txt");
                for(i=0;i<8;i++)
                    store1<<bd[i]<<endl;
}


void admin()
{

    while(1)
    {
    cout<<endl;
    cout<<"|-------------------------------------------------------------------|"<<endl;
    cout<<"|                    welcome to East West University                |"<<endl;
    cout<<"|                                                                   |"<<endl;
    cout<<"|1. Add blood bags.                                                 |"<<endl;
    cout<<"|2. Donor information                                               |"<<endl;
    cout<<"|3. Menu                                                             |"<<endl;
    cout<<"|                                                                   |"<<endl;
    cout<<"|-------------------------------------------------------------------|"<<endl;
    cin>>i;

    system("cls");
    switch(i)
        {
            int x;
            case 1:
               {

               ifstream store;
                    store.open("blood_store.txt");

                 for(i=0;i<8;i++)
                    {
                    store>>bd[i];
                    cout<<i+1<<". "<<BD[i]<<"  = "<<endl;
                   }

                cout<<"select blood group numbmer : "; cin>>so;
                so=so-1;
                cout<<"how many blood bags do you want to add :"; cin>>in;
                blood_store(so,in);

                cout<<"distributing' "<<BD[so]<<" 'blood group in these brunch"<<endl;
                ifstream name;
                        name.open("name.txt");
                            for (i = 1; i <= 10; ++i) {
                                name>>str;
                                cout<<i<<". "<<str<<endl;
                                }
                while(1){
                        cout<<"input brunch number and stop for ZERO(0) :"; cin>>x;

                    if(x==0)
                        break;

                    else if(x==1)
                    rampura(so,in);

                    else if(x==2)
                        khilgao(so,in);

                    else if(x==3)
                        malibagh(so,in);

                    else if(x==4)
                        mohakhali(so,in);

                    else if(x==5)
                        farmgate(so,in);

                    else if(x==6)
                       dhanmondi(so,in);


                    else if(x==7)
                        shahbagh(so,in);

                    else if(x==8)
                        kakrail(so,in);

                    else if(x==9)
                        gulisthan(so,in);

                    else if(x==10)
                        motijheel(so,in);

                    else
                        cout<<"Invalid area\n";
                 }
               }

            case 2:
                {
                    string name,blood;
                    int age;
                    ofstream out;
                        out.open("output1.txt",ios::app);
                        cout<<"input name : "; cin>>name;
                        cout<<"input age :"; cin>>age;
                        cout<<"input blood group :"; cin>>blood;

                        out<<"input name : "<<name<<endl;
                        out<<"input age :"<<age<<endl;
                        out<<"input blood group :"<<blood<<endl;

                }
                case 3:
                    system("cls");
                    break;
    }
    system("cls");
            break;
        }
    }




int password()
{
    {
    START:
    //system("cls");
    //string str="sharif";
    cout<<"\nEnter Password  : ";
   // char pass[32];//to store password.
    //int i = 0;
   // char a;//a Temp char
    for(i=0;;)//infinite loop
    {
        a=getch();//stores char typed in a
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            //check if a is numeric or alphabet
        {
            pass[i]=a;//stores a in pass
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)//if user typed backspace
            //i should be greater than 1.
        {
            cout<<"\b \b";//rub the character behind the cursor.
            --i;
        }
        if(a=='\r')//if enter is pressed
        {
            pass[i]='\0';//null means end of string.
            break;//break the loop
        }
    }
  /*  cout<<"\nYou entered : "<<pass;
    //here we can even check for minimum digits needed
    if(pass==str)
    {
        cout<<"\nMinimum 6 digits needed.\nEnter Again";
       // getch();//It was not pausing :p
      //  goto START;
    }
    return 0;*/
}
}

void change()
{
    int x[100][100],A,y,a,b,k,c,i=1,j=1;
    ifstream name;
    name.open("input1.txt");
    name>>y;
             for (i = 1; i !=0; ++i){
                    for (j = 1; j <=3; ++j){
                            // cout<<j<<endl;
                            name>>x[i][j];
                            A=x[i][j];
                            if(A==0)
                            {
                                break;
                            }
                    }
                    if(A==0)
                            {
                                break;
                            }
             }
             k=i;


             for (i = 1; i <k; ++i){
                    for (j = 1; j <=3; ++j){
                            cout<<x[i][j]<<" ";
                }
                cout<<endl;
             }
             cout<<"input 0 0 0 for stop : "<<endl;
             for (i = 1; i <k; ++i){
                    for (j = 1; j <=1; ++j){
                            cout<<"input same edge space edge space weight :";
                                    cin>>a>>b>>c;
                            if(x[i][j]==a && x[i][j+1]==b && x[i][j+2]==c)
                            {
                                cout<<"input changing weight :";
                                cin>>c;
                                x[i][j+2]=c;
                            }
                    }
                    if(a==0 && b==0 && c==0)
                                break;
                }


            ofstream name1;
    name1.open("input1.txt");
     name1<<y<<endl;
    for (i = 1; i <k; ++i){
                    for (j = 1; j <=3; ++j){
                            name1<<x[i][j]<<" ";
                }
                name1<<endl;
                }
                name1<<0;
}



int main(){
    int so;
     while(1)
    {
    cout<<endl;
    cout<<"|-------------------------------------------------------------------|"<<endl;
    cout<<"|                    welcome to East West University                |"<<endl;
    cout<<"|                                                                   |"<<endl;
    cout<<"|1. Admin                                                           |"<<endl;
    cout<<"|2. Mentor.                                                         |"<<endl;
    cout<<"|3. Receiver                                                        |"<<endl;
    cout<<"|4. Exit                                                            |"<<endl;
    cout<<"|                                                                   |"<<endl;
    cout<<"|-------------------------------------------------------------------|"<<endl;
    cin>>i;

    switch(i)
        {
            case 1:
                {
                    system("cls");
                password();
                if(pass==st)
                    admin();
                else
                    cout<<endl<<"worng password "<<endl;

                cout<<"\nback to the menu please press '1' |"; cin>>menu;
                if(menu==1)
                {
                    system("cls");
                    break;
                }
                }
        system("cls");
                break;

            case 2:
                {
                    system("cls");
                password();
                if(pass==st)
                   {
                   ifstream name;
                            name.open("name.txt");
                                for (i = 1; i <= e; ++i) {
                                name>>str;
                                cout<<i<<" means "<<str<<endl;
                                }
                                cout<<endl;
                        change();
                   }
                   else
                    cout<<endl<<"worng password "<<endl;

                cout<<"\nback to the menu please press '1' |"; cin>>menu;
                if(menu==1)
                    system("cls");
                }
                    break;

            case 3:
                   {
                       system("cls");
                   ifstream myproin;
                    myproin.open("input1.txt");
                    myproin>>e;

                    for (i = 1; i <=e; ++i)
                        for (j = 1; j <= e; ++j)
                                dist[i][j] = 0;
                    n = -1;
                    for (i = 1; i !=0; ++i){
                            myproin>>u>>v>>w;
                            if(u==0)
                                break;
                        dist[u][v] = w;
                        dist[v][u] = w;
                        n = MAX(u, MAX(v, n));
                        }

                        ifstream name;
                            name.open("name.txt");
                                for (i = 1; i <= n; ++i) {
                                name>>str;
                                cout<<i<<". "<<str<<endl;
                                S[i]=str;
                                }
                        cout<<"choice a number where are you from :"; cin>>p;
                        cout<<"choice a number where are you destination :"; cin>>q;
                        if(n<p || n<q)
                            cout<<"Invalid option\n";
                        else
                           {
                            dijkstra(p);
                            Display(p,q);}

                cout<<"\nback to the menu please press '1' |"; cin>>menu;
                if(menu==1)
                system("cls");
                   }
                break;
                case 4:
                exit(0);
            default: cout<<"Invalid option\n";
                    }
}

}

