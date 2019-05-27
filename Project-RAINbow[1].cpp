                                        //* COMPUTER SCIENCE PROJECT- C PROGRAMMING -*//
                                                         //*PROJECT- RAINbow*//
                                                         
//DONE BY- ANUSHRIE BANERJEE- 1840228//
         //RADHIKA RAJPAL -   1840233//
         //IPSHITA CHOWDHURY- 1840255//
        // NEETHU BEHANAN   - 1840232// 

//CODE//

#include<stdio.h>
#include<conio.h>
main()
{
	
char name[100], g, name1, name2, tb, mb,ch;
int choice=0,j,k,c,m ,q, ec, smm, sizetv, stv, sum;
int mc,en,mn,p,moz,vn,dn,nn,t,shamp,trn,dovn,sn,con,trc,dc,mnen;
int lp,lpm,lpma,lpla,hn,gn,ccn,lm;
int f,fm,fn,fl,fw;
int ss,sl,sh,sla,sc,co,tn,sham,fc,ln,bmc,bac,hac;
int se,set,sed,ses;
int cost[3],a[5],quantity[150],w;
int shi; int i;
int price=0;
int dlp,rate;
char items[200][200]={"Adidas shoes",
"Reebok shoes",
"Nike shoes",
"Puma shoes",
"Levis",
"Raymond",
"Arrow",
"VanHeusen",
"Soch",
"W",
"Biba",
"Global Desi",
"Sony",
"Panasonic",
"LG",
"Samsung",
"VIVO",
"OPPO",
"LG",
"Voltas",
"Hitachii",
"Whirlpool",
"Godrej",
"Phillips",
"Bosch",
"Haier"
};
    
printf("\n\t\t\t\t\t\tONLINE SHOPPING\n\n ");
printf("\n\n\nHello! Welcome to RAINbow!\nThe destination to all your shopping needs!\n\n");
printf("Please enter your First Name: ");
scanf("%s",&name1);
printf("\nPlease enter your Surname Name: ");
scanf("%s",&name2);
do
{
printf("\n\nEnter 1 to navigate to Clothes Section.\nEnter 2 to navigate to Shoes Section.\nEnter 3 to navigate to Electronics section.\nEnter 4 to navigate to Cosmetics Section\nPlease enter your choice: ");
scanf("%d",&choice);
	
switch(choice)
{
case 1:   //clothes section
printf("\n\t\t\t\t\tWelcome to the Clothes Section!\n ");
printf("\n\nEnter m to navigate to the Gents section or f to navigate to the Ladies Section\n\nPlease enter your choice: ");
fflush(stdin);
scanf("%c",&g);
if(g=='m')
{
printf("Welcome to Mens' Section!");
printf("Please choose your brand:\nEnter 1 for Levis.\nEnter 2 for Raymond.\nEnter 3 for Arrow.\nEnter 4 for VanHeusen\n\nEnter your choice: ");
scanf("%d",&k);
cost[0]=800;
cost[1]=1500;
cost[2]=1000;
cost[3]=2000;
switch(k)
{
case 1: //Levis
printf("\nYou chose to buy Levis shirts\n");
printf("\nHow many Levis shirts do you wish to buy?: ");
scanf("%d",&shi);
quantity[0]=shi;
price+=cost[0]*quantity[0];
printf("\nDo you wish to buy a shirt of any other brand too? If yes, then Enter 1 Else press any other key to continue:   ");
scanf("%d",&m);
if(m==1)
{
printf("Enter 1 to buy Raymond.\nEnter 2 to buy Arrow.\nEnter 3 to buy VanHeusen\nPlease enter your choice: \n");
scanf("%d",&q);
if(q==1) //Raymond
{
printf("\nHow many Raymond shirts do you wish to buy?: ");
scanf("%d",&p);
quantity[1]=p;
a[1]=1;
price+=cost[1]*p;
}
if(q==2)
{
printf("\nHow many Arrow shirts do you wish to buy?: ");
scanf("%d",&p);
quantity[2]=p;
a[2]=2;
price+=cost[2]*p;
}
if(q==3)
{
printf("\nHow many VanHeusen shirts do you wish to buy?: ");
scanf("%d",&p);
a[3]=3;
quantity[3]=p;
price+=cost[3]*p;
}
} 
printf("\nYou have bought %d Levis shirts",quantity[0]);
for(w=0;w<4;w++)
{
if(a[w]==1)
{
printf("\nYou have bought %d number of Raymond shirts.\n",quantity[w]);
}
		
if(a[w]==2)
{
printf("\nYou have bought %d number of Arrow shirts.\n",quantity[w]);
}
		
if(a[w]==3)
{
printf("\nYou have bought %d number of Van Heusen shirts.\n",quantity[w]);
}
}
printf("\nTotal Cost in Cart is Rs. %d\n",price);
sum=0;
break; 
     

case 2: //Raymond shirts
printf("\nYou chose to buy Raymond shirts");
printf("\nHow many Raymond shirts do you wish to buy?\n");
scanf("%d",&shi);
quantity[1]=shi;
price+=cost[1]*shi;
printf("\nDo you wish to buy a shirt of any other brand too? If yes, then Enter 1 Else press any other key to continue:   \n");
scanf("%d",&m);
if(m==1)
{
printf("Enter 1 to buy Levis .Enter 2 to buy Arrow. Enter 3 to buy VanHeusen\n");
scanf("%d",&q);
if(q==1)
{
printf("How many Levis shirts do you wish to buy?: ");
scanf("%d",&p);
quantity[0]=p;
a[0]=4;
price+=cost[0]*p;
}
if(q==2)
{
printf("How many Arrow shirts do you wish to buy?: ");
scanf("%d",&p);
quantity[2]=p;
a[2]=2;
price+=cost[2]*p;
}
if(q==3)
{
printf("How many VanHeusen shirts do you wish to buy?: ");
scanf("%d",&p);
quantity[3]=p;
a[3]=3;
price+=cost[3]*p;
}
}
printf("\nYou bought %d Raymond shirts\n",quantity[1]);
for(w=0;w<5;w++)
{
if(a[w]==4)
{
printf("You bought %d number of Levis shirts.\n ",quantity[w]);
}
if(a[w]==2)
{
printf("You bought %d number of Arrow shirts.\n ",quantity[w]);
}
if(a[w]==3)
{
printf("You bought %d number of Van Huesen shirts.\n",quantity[w]);
} 
}
printf("Cost in Cart is %d\n",price);
sum=0;
break;//Debugged



case 3://Arrow
		printf("\nYou chose to buy Arrow shirts");
		printf("\nHow many Arrow shirts do you wish to buy?: ");
		scanf("%d",&shi);
		quantity[2]=shi;
		price+=cost[2]*shi;
		printf("\nDo you wish to buy a shirt of any other brand too? If yes, then Enter 1 Else press any other key to continue:   ");
		scanf("%d",&m);
		if(m==1)
		{
		printf("Enter 1 to buy Levis.Enter 2 to buy Raymond.Enter 3 to buy VanHeusen\n");
		scanf("%d",&q);
		if(q==1)
		{
		printf("How many Levis shirts do you wish to buy?: ");
		scanf("%d",&p);
		quantity[0]=p;
		a[0]=4;
		price+=cost[0]*p;
		}
		if(q==2)
		{
		printf("How many Raymond shirts do you wish to buy?: ");
		scanf("%d",&p);
		quantity[1]=p;
		a[1]=1;
		price+=cost[1]*p;
		}
		if(q==3)
		{
		printf("How many VanHeusen shirts do you wish to buy?: ");
		scanf("%d",&p);
		quantity[3]=p;
		a[3]=3;
		price+=cost[3]*p;
		}
		}
		printf("\nYou bought %d Arrow shirts\n",quantity[2]);
		for(w=0;w<5;w++)
		{
			if(a[w]==1)
		{
			printf("You bought %d number of Raymonds shirts.\n",quantity[w]);
		}
		if(a[w]==3)
		{
			
			printf("You bought %d number of Van Huesen shirts.\n",quantity[w]);
		}
		if(a[w]==4)
		{
	     	printf("You bought %d number of Levis shirts.\n",quantity[w]);
		}
	}
	  printf("Your Cost in Cart is %d\n",price);
	  sum=0;
      break;
    
	
	  case 4://Van Huesen
		printf("\nYou chose to buy VanHeusen shirts");
		printf("\nHow many VanHeusen shirts do you wish to buy?: ");
		scanf("%d",&shi);
		quantity[3]=shi;
		price+=cost[3]*shi;
		printf("\nDo you want to buy any other shirt too? If yes,then enter 1 else press 2\n");
		scanf("%d",&m);
		if(m==1)
		{
		printf("Enter 1 to buy Levis.Enter 2 to buy Raymond .Enter 3 to buy Arrow\n");
		scanf("%d",&q);
		if(q==1)
		{
		printf("How many Levis shirts do you wish to buy?\n");
		scanf("%d",&p);
		quantity[0]=p;
		a[0]=4;
		price+=cost[0]*p;
		}
		if(q==2)
		{
		printf("How many Raymond shirts do you wish to buy?\n");
		scanf("%d",&p);
		quantity[1]=p;
		a[1]=1;
		price+=cost[1]*p;
		}
		if(q==3)
		{
		printf("How many Arrow shirts you want to buy?\n");
		scanf("%d",&p);
		quantity[2]=p;
		a[2]=2;
		price+=cost[2]*p;
		}
		}
		printf("\nYou bought %d VanHeusen shirts\n",quantity[3]);
		for(w=0;w<5;w++)
		{
			if(a[w]==4)
		{
			
			printf("You bought %d number of Levis shirts.\n",quantity[w]);
		}
			if(a[w]==1)
		{
			printf("You bought %d number of Raymonds shirts.\n",quantity[w]);
		}
		if(a[w]==2)
		{
		printf("You bought %d number of Arrow shirts.\n",quantity[w]);
		}
			
			
		}
		 printf("Your Cost in Cart is %d\n",price);
		 sum=0;
        break;
         
		default:
        printf("Exit from Mens Section\n");
	    }
        }
		
		//debugged (male section)
	
	
	
	
	
	
	
		if(g=='f')
		{
		printf("Welcome to Ladies' Section!");
		printf("Enter 1 to buy Soch.\nEnter 2 to buy W.\nEnter 3 buy to Biba.\nEnter 4 to buy Global Desi\nEnter your choice: ");
		scanf("%d",&k);
		cost[0]=1000;
		cost[1]=1500;
		cost[2]=2000;
		cost[3]=3000;
		switch(k)
		{
		case 1://Soch 
		printf("\nYou chose to buy Soch kurtis.\n");
		printf("\nHow many Soch kurtis do you wish to buy?: \n");
		scanf("%d",&shi);
		quantity[0]=shi;
		price+=cost[0]*quantity[0];
		printf("\nDo you want kurti from another brand too? If yes, then enter 1 Else press 2\n");
		scanf("%d",&m);
		if(m==1)
		{
		printf("\nEnter 1 to buy W.\nEnter 2 to buy Biba.\nEnter 3 to buy Global Desi\nEnter your choice: ");
		scanf("%d",&q);
		if(q==1)
		{
		printf("How many W kurtis do you wish to buy?\n");
		scanf("%d",&p);
		quantity[1]=p;
		a[1]=2;
		price+=cost[1]*p;
		}
		if(q==2)
		{
		printf("How many Biba kurtis do you wish to buy? \n");
		scanf("%d",&p);
		quantity[2]=p;
		a[2]=3;
		price+=cost[2]*p;
		}
		if(q==3)
		{
		printf("How many Global Desi kurtis do you wish to buy?");
		scanf("%d",&p);
		a[3]=4;
		quantity[3]=p;
		price+=cost[3]*p;
		}
		}
		printf("\nYou bought %d Soch kurtis\n",quantity[0]);
		for(w=1;w<5;w++)
		{
			if(a[w]==2)
			printf(" You bought %d number of W kutis",quantity[w]);
			if(a[w]==3)
			printf(" You bought %d number of BIBA kutis",quantity[w]);
			if(a[w]==4)
			printf(" You bought %d number of Global Desi kurtis",quantity[w]);
			
		}
	 printf("Your Cost in Cart is %d\n",price);
	 sum=0;
      break;
      
      
      case 2://W 
		printf("\nYou chose to buy W kurtis.\n");
		printf("\nHow many W kurtis do you wish to buy?: ");
		scanf("%d",&shi);
		quantity[1]=shi;
		price+=cost[1]*shi;
		printf("\nDo you wish to buy kurti drom any other brand kurti too? If yes,then enter 1 else press 2\n");
		scanf("%d",&m);
		if(m==1)
		{
		printf("Enter 1 to buy Soch.Enter 2 to buy Biba.Enter 3 to buy Global Desi \n");
		scanf("%d",&q);
		if(q==1)
		{
		printf("How many Soch kurtis do you wish to buy?\n");
		scanf("%d",&p);
		quantity[0]=p;
		a[0]=1;
		price+=cost[0]*p;
		}
		if(q==2)
		{
		printf("How many Biba kurtis do you wish to buy?\n");
		scanf("%d",&p);
		quantity[2]=p;
		a[2]=3;
		price+=cost[2]*p;
		}
		if(q==3)
		{
	    printf("How many Global desi kurtis do you wish to buy?\n");
		scanf("%d",&p);
		quantity[3]=p;
		a[3]=4;
		price+=cost[3]*p;
		}
		}
		printf("\nYou bought %d W kurtis\n",quantity[1]);
		for(w=0;w<5;w++)
		{
		if(a[w]==3)
		printf("You bought %d number of BIBA kurtis\n",quantity[w]);
		if(a[w]==4)
		printf("You bought %d number of Global Desi kurtis\n",quantity[w]);
		if(a[w]==1)
		printf("You bought %d number of Soch kurtis\n",quantity[w]);
		
		
		
		}
		printf("Your Cost in Cart is %d\n",price);
      sum=0;
	  break;
      case 3: //BIBA
		printf("\nYou chose to buy Biba kurtis.\n");
		printf("\nHow many Biba kurtis you want to buy?\n");
		scanf("%d",&shi);
		quantity[2]=shi;
		price+=cost[2]*shi;
		printf("\nDo you want to buy any other kurti too? If yes,then enter 1 else press 2: \n");
		scanf("%d",&m);
		if(m==1)
		{
		printf("Enter 1 to buy Soch.Enter 2 to buy W .Enter 3 to buy Global Desi: \n");
		scanf("%d",&q);
		if(q==1)
		{
		printf("How many Soch kurtis you want to buy?: \n");
		scanf("%d",&p);
		quantity[0]=p;
		a[0]=1;
		price+=cost[0]*p;
		}
		if(q==2)
		{
		printf("How many W kurtis you want to buy? \n");
		scanf("%d",&p);
		quantity[2]=p;
		a[1]=2;
		price+=cost[2]*p;
		}
		if(q==3)
		{
		printf("How many Global desi kurtis you want to buy?: \n");
		scanf("%d",&p);
		quantity[3]=p;
		a[3]=4;
		price+=cost[3]*p;
		}
		}
		printf("\n You bought %d Biba kurtis\n",quantity[2]);
		for(w=0;w<5;w++)
		{
		if(a[w]==2)
		printf(" You bought %d number of W kurtis. \n ",quantity[w]);
		if(a[w]==4)
		printf(" You bought %d number of Global Desi kurtis. \n ",quantity[w]);
		if(a[w]==1)
			printf(" You bought %d number of Soch kurtis. \n ",quantity[w]);
			
		}
	   printf("Your Cost in Cart is %d\n",price);
       sum=0;
	   break;
       
       
	   case 4: 
		printf("\nYou chose to buy Global Desi kurtis.\n");
		printf(" \n How many Global Desi kurtis you want to buy?:  ");
		scanf("%d",&shi);
		quantity[3]=shi;
		price+=cost[3]*shi;
		printf("\n Do you want to buy any other kurti too? If yes,then enter 1 else press 2 \n ");
		scanf("%d",&m);
		if(m==1)
		{
		printf("Enter 1 to buy Soch.Enter 2 to buy W.Enter 3 to buy Biba \n ");
		scanf("%d",&q);
		if(q==1)
		{
		printf("How many Soch kurtis you want to buy? \n");
		scanf("%d",&p);
		quantity[0]=p;
		a[0]=1;
		price+=cost[0]*p;
		}
		if(q==2)
		{
        printf("How many W kurtis you want to buy? \n");
		scanf("%d",&p);
		quantity[2]=p;
		a[1]=2;
		price+=cost[2]*p;
		}
		if(q==3)
		{
		printf("How many Biba kurtisyou want to buy? \n");
		scanf("%d",&p);
		quantity[1]=p;
		a[2]=3;
		price+=cost[1]*p;
		}
		}
		printf("\n You bought %d Global Desi kurtis\n",quantity[3]);
		for(w=0;w<5;w++)
		{
			if(a[w]==1)
			printf("\nYou bought %d number of Soch kurtis. \n ",quantity[w]);
			if(a[w]==2)
			printf("\nYou bought %d number of W kurtis. \n ",quantity[w]);
			if(a[w]==3)
			printf("\nYou bought %d number of BIBA kurtis. \n ",quantity[w]);
		}
	    printf("\nYour Cost in Cart is %d\n",price);
	    sum=0;
        break;
      default:
      printf("\nExit from womens clothing \n");
	}
    }
    break;
		
		
	case 2:  //  shoes
		printf("\nWelcome,You chose to buy shoes\n");
		printf("\nPrice of adidas shoes : 1200.\nPrice of Reebok shoes : 2500.\nPrice of Nike shoes : 1950.\nPrice of Puma shoes : 3100.\n");
		printf("\nEnter 1 to buy Adidas shoes.\nEnter 2 to buy Reebok shoes.\nEnter 3 buy to Nike shoes.\nEnter 4 to buy Puma shoes.\n");
		scanf("%d",&j);
		for(k=0;k<4;k++)
	{
		a[k]=0;
	}
		cost[0]=1200;
		cost[1]=2500;
		cost[2]=1950;
		cost[3]=3100;
		switch(j)
		{
			case 1: 
	    	printf("\nYou chose to buy Adidas shoes\n");
	    	printf("\n How many Adidas shoes you want to buy?\n");
			scanf("%d",&sh);
			quantity[0]=sh;
			price+=cost[0]*quantity[0];
			printf("\nDo you want to buy any other shoe too? If yes,then enter 1 else enter 0.\n");
			scanf("%d",&m);
			
			if(m==1)
		   	{
			printf("Enter 1 to buy Reebok.Enter 2 to buy Nike.Enter 3 to buy Puma\n");
			scanf("%d",&q);
			if(q==1)
			{
			printf("How many Reebok shoes you want to buy? \n");
			scanf("%d",&p);
			quantity[1]=p;
			a[1]=1;
			price+=cost[1]*quantity[1];
			}
			if(q==2)
			{
			printf("How many Nike shoes you want to buy? \n");
			scanf("%d",&p);
			quantity[2]=p;
			a[2]=1;
			price+=cost[2]*quantity[2];
			}
			if(q==3)
			{
			printf("How many Puma shoes you want to buy? \n");
			scanf("%d",&p);
			a[3]=1;
			quantity[3]=p;
			price+=cost[3]*quantity[3];
					
			}
			}
			printf("\nYou bought %d Adidas shoes\n",quantity[0]);
	        for(w=0;w<4;w++)
	    	{
			if(a[w]==1)
			{
			printf("\nYou bought %d %s.\n",quantity[w],items[w]);
	    }
			}
			printf("\nYour Cost in Cart is %d\n",price);
            sum=0;
			break;
            
			case 2: 
	    	printf("\nYou chose to buy Reebok shoes.\n");
	    	printf("\n How many Reebok shoes you want to buy?\n");
			scanf("%d",&sh);
			quantity[1]=sh;
			price+=cost[1]*sh;
			printf("\nDo you want to buy any other shoe too? If yes,then enter 1 else press enter\n");
			scanf("%d",&m);
			if(m==1)
			{
			printf("Enter 1 to buy adidas.\nEnter 2 to buy Nike.\nEnter 3 to buy Puma\nEbter your choice: ");
			scanf("%d",&q);
			if(q==1)
			{
			printf("How many adidas shoes you want to buy?\n");
			scanf("%d",&p);
			quantity[0]=p;
			a[0]=1;
			price+=cost[0]*quantity[0];
			}
			if(q==2)
			{
			printf("How many Nike shoes you want to buy? \n");
			scanf("%d",&p);
			quantity[2]=p;
			a[2]=1;
			price+=cost[2]*quantity[2];
			}
			if(q==3)
			{
		    printf("How many Puma shoes you want to buy? \n");
			scanf("%d",&p);
			quantity[3]=p;
			a[3]=1;
			price+=cost[3]*quantity[3];
			}
			}
		    printf("\n You bought %d Reebok shoes\n",quantity[1]);
	        for(w=0;w<4;w++)
	    	{
			if(a[w]==1)
			{
			printf(" You bought %d %s.\n",quantity[w],items[w]);
		
	    	}
		    }
			printf("Your Cost in Cart is %d\n",price);
            sum=0;
			break;
            
			case 3: 
	     	printf(" \n You chose to buy Nike shoes. \n ");
	     	printf(" \n How many Nike shoes you want to buy? \n ");
			scanf("%d",&sh);
			quantity[2]=sh;
			price+=cost[2]*sh;
			printf("\n Do you want to buy any other shoe too? If yes,then enter 1 else press enter \n ");
			scanf("%d",&m);
			if(m==1)
			{
			printf("Enter 1 to buy adidas.Enter 2 to buy Reebok.Enter 3 to buy Puma \n ");
			scanf("%d",&q);
			if(q==1)
			{
			printf("How many adidas shoes you want to buy? \n");
			scanf("%d",&p);
			quantity[0]=p;
			a[0]=1;
			price+=cost[0]*quantity[0];
			}
			if(q==2)
			{
			printf("How many Reebok shoes you want to buy? \n");
			scanf("%d",&p);
			quantity[1]=p;
			a[1]=1;
			price+=cost[1]*quantity[1];
			}
			if(q==3)
			{
			printf("How many Puma shoes you want to buy? \n");
			scanf("%d",&p);
			quantity[3]=p;
			a[3]=1;
			price+=cost[3]*quantity[3];
			}
			}
			printf("\n You bought %d Nike shoes\n",quantity[2]);
		    for(w=0;w<4;w++)
		    {
			if(a[w]==1)
			{
			printf(" You bought %d  %s.\n",quantity[w],items[w]);
			
		    }
	        }
		    printf("Your Cost in Cart is %d\n",price);
            sum=0;
			break;
            
			case 4: 
	    	printf("\nYou chose to buy Puma shoes.\n");
	    	printf("\nHow many Puma shoes you want to buy?\n");
			scanf("%d",&sh);
			quantity[3]=sh;
			price+=cost[3]*sh;
			printf("\nDo you want to buy any other shoe too? If yes,then enter 1 else press enter\n");
			scanf("%d",&m);
			if(m==1)
			{
				printf("Enter 1 to buy Adidas.Enter 2 to buy Nike.Enter 3 to buy Reebok\n");
				scanf("%d",&q);
				if(q==1)
				{
					printf("How many Adidas shoes you want to buy? \n");
					scanf("%d",&p);
					quantity[0]=p;
					a[0]=1;
					price+=cost[0]*quantity[0];
				}
					if(q==2)
				{
					printf("How many Nike shoes you want to buy? \n");
					scanf("%d",&p);
					quantity[2]=p;
					a[2]=1;
					price+=cost[2]*quantity[2];
				}
					if(q==3)
				{
					printf("How many Reebok shoes you want to buy? \n");
					scanf("%d",&p);
					quantity[1]=p;
					a[1]=1;
					price+=cost[1]*quantity[1];
				}
			}
			printf("\n You bought %d Puma shoes\n",quantity[3]);
		    for(w=0;w<4;w++)
	    	{
			if(a[w]==1)
			{
			printf(" You bought %d %s. \n ",quantity[w],items[w]);
		
	    	}
		}
			 printf("Your Cost in Cart is %d\n",price);
            sum=0;
			break;
            default:
      printf("Exit from Shoes \n");
	}
	break;
		




	
	
	
	
	
	
	
	
	case 3:   //Electronics
		printf("\n\t\t\t\t\tWelcome to the Electronics Section! \n ");
		printf("\n\nWhat would you like to buy?\n\n1.TELEVISIONS\n2.MOBILE PHONES\n3.HOME APPLIANCES");
		printf("\nEnter the number corresponding to your choice: ");
		scanf("%d",&ec);
		
		if(ec==1) //Television
		{
		printf("TELEVISION MENU:\n\nBrands Available:\n\na.Sony\nPrice=Rs.70000\n\nb.Panasonic\nPrice=Rs.80000\n\nc.LG\nPrice=Rs.90000\n\nEnter the variable corresponding to the brand of your choice: ");
		fflush(stdin);
		scanf("%s",&tb);
		cost[0]=70000;
		cost[1]=80000;
		cost[2]=90000;
		switch(tb)
		{
			case 'a': //Sony
			 
		printf("\nYou chose to buy Sony Television\n ");
		printf("Please choose the size of the screen:\n\n1.24 inches\n2.42 inches\nEnter the number corresponding to your choice: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		
		printf("\nHow many Sony Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[0]++;
			quantity[0]=stv;
			price=cost[0]*quantity[0];
			sum+=price;
	}
		if (sizetv==2)
		{
			printf("\nHow many Sony Televisions you want to buy?: \n ");
			scanf("%d",&stv);
			a[0]++;
			quantity[0]=stv;
			price=cost[0]*quantity[0];
			sum+=price;
		}
		if (sizetv!=1 && sizetv!=2)
		printf("Invalid Choice");
		printf("\nDo you want to buy tv of any other brand too? If yes, Enter 1 else enter any other number: \n");
			scanf("%d",&m);
			if(m==1)
			{
				printf("Enter 1 to buy Panasonic.\nEnter 2 to buy LG.: \n");
				scanf("%d",&q);
				if(q==1)
				{
		printf("Panasonic\n");
		printf("Please choose the size of the screen:\n1.24 inches\n2.42 inches\nPress the corresponding number: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		
		printf("\nHow many Panasonic Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[1]=1;
			quantity[1]=stv;
			price=cost[1]*quantity[1];
			sum+=price;
		}
		if (sizetv==2)
		{
			printf("\nHow many Panasonic Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[1]=1;
			quantity[1]=stv;
			price=cost[1]*quantity[1];
			sum+=price;
		}
		if (sizetv!=1 && sizetv!=2)
		printf("Invalid Choice");
				}
					if(q==2)
				{
		printf("\nLG");
		printf("Please choose the size of the screen:\n1.24 inches\n2.42 inches\nPress the corresponding number: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		printf("\nHow many LG Televisions you want to buy?: \n");
		scanf("%d",&stv);
		a[2]=2;
		quantity[2]=stv;
		price=cost[2]*quantity[2];
		sum+=price;
		}
		if (sizetv==2)
		{
			printf("\nHow many LG Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[2]=2;
			quantity[2]=stv;
			price=cost[2]*quantity[2];
			sum+=price;
		}
		if (sizetv!=1 && sizetv!=2)
		printf("Invalid Choice");
				}
					
				} 
		 
				
		printf("\nYou bought %d Sony Televisions\n",quantity[0]);
		for(w=1;w<4;w++)
		{
			if(a[w]==1)
			{
			
			printf("\nYou bought %d number of Panasonic televisons.\n",quantity[w]);
	}
		
			
		else if(a[w]==2)
		{
			
		printf("\nYou bought %d number of LG televisions,\n",quantity[w]);
		}
			
	}
			 printf("Your Cost in Cart is %d\n",sum);
			 sum=0;
      break;	
			
	case 'b': //Panasonic
	printf("\nYou chose to buy Panasonic Television\n");
		printf("Please choose the size of the screen:\n\n1.24 inches\n2.42 inches\nEnter the number corresponding to your choice: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		
		printf("\nHow many Panasonic Televisions you want to buy?: \n");
			scanf("%d",&stv);
	        quantity[1]=stv;
			price=cost[1]*quantity[1];
			sum+=price;
		}
		if (sizetv==2)
		{
			printf("\nHow many Panasonic Televisions you want to buy?: \n ");
			scanf("%d",&stv);
			
			quantity[1]=stv;
			price=cost[1]*quantity[1];
			sum+=price;
		}
		if (sizetv!=1 && sizetv!=2)
		printf("Invalid Choice");	
			printf("\nDo you want to buy tv of any other brand too? If yes, Enter 1 else enter any other number: \n");
			scanf("%d",&m);
			if(m==1)
			{
				printf("Enter 1 to buy Sony.\nEnter 2 to buy LG: \n ");
				scanf("%d",&q);
				if(q==1)
				{
		printf("SONY\n");
		printf("Please choose the size of the screen:\n1.24 inches\n2.42 inches\nPress the corresponding number: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		
		printf("\nHow many Sony Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[0]=3;
			quantity[0]=stv;
			price=cost[0]*quantity[0];
			sum+=price;
		}
		if (sizetv==2)
		{
			printf("\nHow many Sony Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[0]=3;
			quantity[1]=stv;
			price=cost[1]*quantity[1];
			sum+=price;
		}
		if (sizetv!=1 && sizetv!=2)
		printf("Invalid Choice");
				}
					if(q==2)
				{
		printf("\nLG");
		printf("Please choose the size of the screen:\n1.24 inches\n2.42 inches\nPress the corresponding number: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		printf("\nHow many LG Televisions you want to buy?: \n");
		scanf("%d",&stv);
		a[2]=2;
		quantity[2]=stv;
		price=cost[2]*quantity[2];
		sum+=price;
		}
		if (sizetv==2)
		{
			printf("\nHow many LG Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[2]=2;
			quantity[2]=stv;
			price=cost[2]*quantity[2];
			sum+=price;
		}
			
		if (sizetv!=1 && sizetv!=2)
		printf("Invalid Choice");
				}
					
				} 
		printf("\nYou bought %d Panasonic Televisions\n",quantity[1]);
		for(w=0;w<4;w++)
		{
			if(a[w]==3)
			{
			
			printf("\nYou bought %d number of Sony televisons.\n",quantity[w]);
	}
		
			
		else if(a[w]==2)
		{
			
		printf("\nYou bought %d number of LG televisions,\n",quantity[w]);
		}
			
	}
			 printf("\nYour Cost in Cart is %d\n",sum);
	sum=0;
      break;	
			
	
	  
	  
	  case 'c': //LG
			 
	printf("\nYou chose to buy LG Television\n ");
		printf("Please choose the size of the screen:\n\n1.24 inches\n2.42 inches\nEnter the number corresponding to your choice: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		
		printf("\nHow many LG Televisions you want to buy?: \n");
			scanf("%d",&stv);
			quantity[2]=stv;
			price=cost[2]*quantity[2];
			sum+=price;
		}
		if (sizetv==2)
		{
			printf("\nHow many LG Televisions you want to buy?: \n ");
			scanf("%d",&stv);
			quantity[2]=stv;
			price=cost[2]*quantity[2];
			sum+=price;
		}
			if (sizetv!=1 && sizetv!=2)
		printf("Invalid Choice");
			printf("\nDo you want to buy tv of any other too? If yes, Enter 1 else enter any other number:  \n");
			scanf("%d",&m);
			if(m==1)
			{
				printf("Enter 1 to buy Panasonic.\nEnter 2 to buy Sony: \n ");
				scanf("%d",&q);
				if(q==1)
				{
		printf("Panasonic\n");
		printf("Please choose the size of the screen:\n1.24 inches\n2.42 inches\nPress the corresponding number: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		
		printf("\nHow many Panasonic Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[1]=1;
			quantity[1]=stv;
			price=cost[1]*quantity[1];
			sum+=price;
		}
		if (sizetv==2)
		{
			printf("\nHow many Panasonic Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[1]=1;
			quantity[1]=stv;
			price=cost[1]*quantity[1];
			sum+=price;
		}
		if (sizetv!=1 && sizetv!=2)
		printf("Invalid Choice");
				}
					if(q==2)
				{
		printf("\nSONY");
		printf("Please choose the size of the screen:\n1.24 inches\n2.42 inches\nPress the corresponding number: ");
		scanf("%d",&sizetv);
		if(sizetv==1)
		{
		printf("\nHow many Sony Televisions you want to buy?: \n");
		scanf("%d",&stv);
		a[0]=3;
		quantity[0]=stv;
		price=cost[0]*quantity[0];
		sum+=price;
		}
		if (sizetv==2)
		{
			printf("\nHow many Sony Televisions you want to buy?: \n");
			scanf("%d",&stv);
			a[0]=3;
			quantity[0]=stv;
			price=cost[0]*quantity[0];
			sum+=price;
		}
		if (sizetv!=1 && sizetv!=2)
		printf("\nInvalid Choice\n");
				}
					
				} 
		printf("\nYou bought %d LG Televisions\n",quantity[2]);
		for(w=0;w<4;w++)
		{
			if(a[w]==1)
			{
			
			printf("You bought %d number of Panasonic televisons.\n",quantity[w]);
	}
		
			
		else if(a[w]==3)
		{
			
		printf("You bought %d number of Sony televisions,\n",quantity[w]);
		}
			
	}
			 printf("Your Cost in Cart is %d\n",sum);
      break;
      sum=0;
      default: 
      printf("\n\nYOUR CHOICE IS INVALID");
		}
	} 
	
	
	if (ec==2)
	{
		printf("MOBILE PHONES MENU:\n\nBrands Available:\n\na.Samsung\nb.VIVO\nc.OPPO\n\nEnter the variable corresponding to the brand of your choice: ");
		fflush(stdin);
		scanf("%s",&mb);
		switch(mb)
		{
			case 'a' : //Samsung
		printf("\nYou chose to buy Samsung mobiles\n");
		printf("Please choose the Samsung model you would like to buy:\n1.Samsung Galaxy S10\n2.Samsung Galaxy On7 Prime\n3.Samsung Galaxy J8.\n\nEnter the number corresponding to your choice: ");
		scanf("%d",&smm);
		cost[0]=36000;
		cost[1]=15000;
		cost[2]=25000;
		if(smm==1)//Samsung Galaxy S10
		{
		printf("\nYou chose to buy Samsung Galaxy S10\n");
		printf("Features:1. 5.5 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 6GB RAM, 128GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.36000");
		printf("\nHow many Samsung Galaxy S10 do you want to buy?: \n");
		scanf("%d",&stv);
		quantity[0]=stv;
		price=cost[0]*quantity[0];
		sum+=price;
		}
		if(smm==2)// Samsung Galaxy On7 Prime
		{
		printf("\nYou chose to buy Samsung Galaxy On7 Prime\n");
		printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 4GB RAM, 32GB ROM\n4. 3500 mAh bettery\n5. Price:Rs.15000");
		printf("\nHow many Samsung Galaxy On7 Prime do you want to buy?: \n");
		scanf("%d",&stv);
		quantity[0]=stv;
		price=cost[1]*quantity[0];
		sum+=price;
		}
		if(smm==3) //Samsung Galaxy J8
		{
		printf("\nYou chose to buy Samsung Galaxy J8\n");
		printf("Features:1. 5.7 inches screen\n2. 13MP rear camera and 13MP front camera\n3. 16GB RAM, 64GB ROM\n4. 3900 mAh bettery\n5. Price:Rs.25000");
		printf("\nHow many Samsung Galaxy On7 Prime do you want to buy?: \n");
		scanf("%d",&stv);
		quantity[0]=stv;
		price=cost[2]*quantity[0];
		sum+=price;
		}
		if(smm!=1&&smm!=2&&smm!=3)
		printf("Choice Invalid");
	
		printf("\nDo you want to buy mobile of any other brand? If yes, Enter 1 else enter any other number: ");
		scanf("%d",&m);
		if(m==1)
		{
		printf("Enter 1 to buy VIV0.\nEnter 2 to buy OPPO. :  \n");
		scanf("%d",&q);
		if(q==1)
		{
		printf("VIVO\n");
		printf("Please choose the VIVO model you would like to buy:\n1.VIVO V9\n2.VIVO V11\n3.VIVO Y83\n\nEnter the number corresponding to your choice: ");
		scanf("%d",&smm);
		cost[0]=20000;
		cost[1]=27000;
		cost[2]=25000;
		if(smm==1)
		{
		printf("\nYou chose to buy VIVO V9\n");
		printf("Features:1. 5.5 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 5GB RAM, 64GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.20000");
		printf("\nHow many VIVO V9 do you want to buy?: \n");
		scanf("%d",&stv);
		a[1]=1;
		quantity[1]=stv;
		price=cost[0]*quantity[1];
		sum+=price;
		}
		if(smm==2)
		{
		printf("\nYou chose to buy VIVO V11\n");
		printf("Features:1. 5.7 inches screen\n2. 13MP rear camera and 7MP front camera\n3. 4GB RAM, 64GB ROM\n4. 4500 mAh bettery\n5. Price:Rs.27000");
		printf("\nHow many VIVO V11 do you want to buy?: \n");
		scanf("%d",&stv);
		a[1]=1;
		quantity[1]=stv;
		price=cost[1]*quantity[1];
		sum+=price;
		}
		if(smm==3)
		{
		printf("\nYou chose to buy VIVO Y83\n");
		printf("Features:1. 6.1 inches screen\n2. 13MP rear camera and 9MP front camera\n3. 16GB RAM, 64GB ROM\n4. 4100 mAh bettery\n5. Price:Rs.25000");
		printf("\nHow many VIVO Y83 do you want to buy?: \n");
		scanf("%d",&stv);
		a[1]=1;
		quantity[1]=stv;
		price=cost[2]*quantity[1];
		sum+=price;
		}
		if(smm!=1&&smm!=2&&smm!=3)
		printf("Choice Invalid");
	}
		if(q==2)
		{
		printf("\nOPPO");
		printf("Please choose the OPPO model you would like to buy:\n1.OPPO A5\n2.OPPO F9\n3.OPPO Find X\n\nEnter the number corresponding to your choice: ");
		scanf("%d",&smm);
		cost[0]=15000;
		cost[1]=25000;
		cost[2]=60000;
		if(smm==1)
		{
		printf("\nYou chose to buy OPPO A5\n");
		printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 8MP front camera\n3. 5GB RAM, 64GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.15000");
		printf("\nHow many OPPO A5 do you want to buy?: \n");
		scanf("%d",&stv);
		a[2]=2;
		quantity[2]=stv;
		price=cost[0]*quantity[2];
		sum+=price;
		}
		if(smm==2)
		{
		printf("\nYou chose to buy OPPO F9\n");
		printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 7MP front camera\n3. 4GB RAM, 64GB ROM\n4. 4800 mAh bettery\n5. Price:Rs.25000");
		printf("\nHow many OPPO F9 do you want to buy?: \n");
		scanf("%d",&stv);
		a[2]=2;
		quantity[2]=stv;
		price=cost[1]*quantity[2];
		sum+=price;
		}
		if(smm==3)
		{
		printf("\nYou chose to buy OPPO Find X\n");
		printf("Features:1. 6.2 inches screen\n2. 18MP rear camera and 13MP front camera\n3. 16GB RAM, 128GB ROM\n4. 4900 mAh bettery\n5. Price:Rs.60000");
		printf("\nHow many OPPO Find X do you want to buy?: \n");
		scanf("%d",&stv);
		a[2]=2;
		quantity[2]=stv;
		price=cost[2]*quantity[2];
		sum+=price;
		}
		if(smm!=1&&smm!=2&&smm!=3)
		printf("Choice Invalid");
		}
		}
		else 
	printf("\nYou bought %d Samsung Mobiles\n",quantity[0]);
		for(w=1;w<4;w++)
		{
			if(a[w]==1)
			{
			
			printf("You bought %d number of VIV0 Phones.\n",quantity[w]);
	}
		
			
		else if(a[w]==2)
		{
			
		printf("You bought %d number of OPPO phones\n",quantity[w]);
		}
			
	}
			 printf("Your Cost in Cart is %d\n",sum);
			 
	sum=0;
    break;
    
    
   
   	case'b': //VIVO phones
	printf("\nYou chose to buy VIVO mobile phones\n");
	printf("Please choose the VIVO model you would like to buy:\n1.VIVO V9\n2.VIVO V11\n3.VIVO Y83\n\nEnter the number corresponding to your choice: ");
		scanf("%d",&smm);
		cost[0]=20000;
		cost[1]=27000;
		cost[2]=25000;
		if(smm==1)
		{
		printf("\nYou chose to buy VIVO V9\n");
		printf("Features:1. 5.5 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 5GB RAM, 64GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.20000");
		printf("\nHow many VIVO V9 do you want to buy?: \n");
		scanf("%d",&stv);
		quantity[1]=stv;
		price=cost[0]*quantity[1];
		sum+=price;
		}
		if(smm==2)
		{
		printf("\nYou chose to buy VIVO V11\n");
		printf("Features:1. 5.7 inches screen\n2. 13MP rear camera and 7MP front camera\n3. 4GB RAM, 64GB ROM\n4. 4500 mAh bettery\n5. Price:Rs.27000");
		printf("\nHow many VIVO V11 do you want to buy?: \n");
		scanf("%d",&stv);
		quantity[1]=stv;
		price=cost[1]*quantity[1];
		sum+=price;
		}
		if(smm==3)
		{
		printf("\nYou chose to buy VIVO Y83\n");
		printf("Features:1. 6.1 inches screen\n2. 13MP rear camera and 9MP front camera\n3. 16GB RAM, 64GB ROM\n4. 4100 mAh bettery\n5. Price:Rs.25000");
		printf("\nHow many VIVO Y83 do you want to buy?: \n");
		scanf("%d",&stv);
	
		quantity[1]=stv;
		price=cost[2]*quantity[1];
		sum+=price;
		}
		if(smm!=1&&smm!=2&&smm!=3)
		printf("Choice Invalid");
		
		printf("\nDo you want to buy mobile of any other brand? If yes, Enter 1 else enter any othefr number :  \n");
		scanf("%d",&m);
		if(m==1)
		{
		printf("Enter 1 to buy SAMSUNG.\nEnter 2 to buy OPPO: \n");
		scanf("%d",&q);
		if(q==1)
		{
		printf("SAMSUNG\n");
	    printf("Please choose the Samsung model you would like to buy:\n1.Samsung Galaxy S10\n2.Samsung Galaxy On7 Prime\n3.Samsung Galaxy J8.\n\nEnter the number corresponding to your choice: ");
		scanf("%d",&smm);
		cost[0]=36000;
		cost[1]=15000;
		cost[2]=25000;
		if(smm==1)
		{
		printf("\nYou chose to buy Samsung Galaxy S10\n");
		printf("Features:1. 5.5 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 6GB RAM, 128GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.36000");
		printf("\nHow many Samsung Galaxy S10 do you want to buy?\n");
		scanf("%d",&stv);
		a[0]=3;
		quantity[0]=stv;
		price=cost[0]*quantity[0];
		sum+=price;
		}
		if(smm==2)
		{
		printf("\nYou chose to buy Samsung Galaxy On7 Prime\n");
		printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 4GB RAM, 32GB ROM\n4. 3500 mAh bettery\n5. Price:Rs.15000");
		printf("\nHow many Samsung Galaxy On7 Prime do you want to buy?\n");
		scanf("%d",&stv);
		a[0]=3;
		quantity[0]=stv;
		price=cost[1]*quantity[0];
		sum+=price;
		}
		if(smm==3)
		{
		printf("\nYou chose to buy Samsung Galaxy J8\n");
		printf("Features:1. 5.7 inches screen\n2. 13MP rear camera and 13MP front camera\n3. 16GB RAM, 64GB ROM\n4. 3900 mAh bettery\n5. Price:Rs.25000");
		printf("\nHow many Samsung Galaxy On7 Prime do you want to buy?\n");
		scanf("%d",&stv);
		a[0]=3;
		quantity[0]=stv;
		price=cost[2]*quantity[0];
		sum+=price;
		}
	    if(smm!=1&&smm!=2&&smm!=3)
		printf("Choice Invalid");
		}
		
		if(q==2)
		{
		printf("\nOPPO");
		printf("Please choose the OPPO model you would like to buy:\n1.OPPO A5\n2.OPPO F9\n3.OPPO Find X\n\nEnter the number corresponding to your choice: ");
		scanf("%d",&smm);
		cost[0]=15000;
		cost[1]=25000;
		cost[2]=60000;
		if(smm==1)
		{
		printf("\nYou chose to buy OPPO A5\n");
		printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 8MP front camera\n3. 5GB RAM, 64GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.15000");
		printf("\nHow many OPPO A5 do you want to buy?: \n");
		scanf("%d",&stv);
		a[2]=2;
		quantity[2]=stv;
		price=cost[0]*quantity[2];
		sum+=price;
		}
		if(smm==2)
		{
		printf("\nYou chose to buy OPPO F9\n");
		printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 7MP front camera\n3. 4GB RAM, 64GB ROM\n4. 4800 mAh bettery\n5. Price:Rs.25000");
		printf("\nHow many OPPO F9 do you want to buy?: \n");
		scanf("%d",&stv);
		a[2]=2;
		quantity[2]=stv;
		price=cost[1]*quantity[2];
		sum+=price;
		}
		if(smm==3)
		{
		printf("\nYou chose to buy OPPO Find X\n");
		printf("Features:1. 6.2 inches screen\n2. 18MP rear camera and 13MP front camera\n3. 16GB RAM, 128GB ROM\n4. 4900 mAh bettery\n5. Price:Rs.60000");
		printf("\nHow many OPPO Find X do you want to buy?: \n");
		scanf("%d",&stv);
		a[2]=2;
		quantity[2]=stv;
		price=cost[2]*quantity[2];
		sum+=price;
		}
		}
		if(smm!=1&&smm!=2&&smm!=3)
		printf("Choice Invalid");
		}
	printf("\nYou bought %d VIVO Mobiles\n",quantity[1]);
		for(w=0;w<4;w++)
		{
			if(a[w]==3)
			{
			
			printf("You bought %d number of SAMSUNG Phones.\n",quantity[w]);
	}
		
			
		else if(a[w]==2)
		{
			
		printf("You bought %d number of OPPO phones\n",quantity[w]);
		}
			
	}
			 printf("Your Cost in Cart is %d\n",sum);
			 
	sum=0;		 
    break;
    
	
	case 'c': //OPPO phones
        
    printf("\nYou chose to buy OPPO mobile phones\n");
	printf("Please choose the OPPO model you would like to buy:\n1.OPPO A5\n2.OPPO F9\n3.OPPO Find X\n\nEnter the number corresponding to your choice: ");
	scanf("%d",&smm);
	cost[0]=15000;
	cost[1]=25000;
	cost[2]=60000;
	if(smm==1)
	{
	printf("\nYou chose to buy OPPO A5\n");
	printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 8MP front camera\n3. 5GB RAM, 64GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.15000");
	printf("\nHow many OPPO A5 do you want to buy?: \n");
	scanf("%d",&stv);
	quantity[2]=stv;
	price=cost[0]*quantity[2];
	sum+=price;
	}
	if(smm==2)
	{
	printf("\nYou chose to buy OPPO F9\n");
	printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 7MP front camera\n3. 4GB RAM, 64GB ROM\n4. 4800 mAh bettery\n5. Price:Rs.25000");
	printf("\nHow many OPPO F9 do you want to buy?:  \n");
	scanf("%d",&stv);
	quantity[2]=stv;
	price=cost[1]*quantity[2];
	sum+=price;
	}
	if(smm==3)
	{
	printf("\nYou chose to buy OPPO Find X\n");
	printf("Features:1. 6.2 inches screen\n2. 18MP rear camera and 13MP front camera\n3. 16GB RAM, 128GB ROM\n4. 4900 mAh bettery\n5. Price:Rs.60000");
	printf("\nHow many OPPO Find X do you want to buy?: \n");
	scanf("%d",&stv);
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;
	}
	if(smm!=1&&smm!=2&&smm!=3)
	printf("Choice Invalid");
	printf("\nDo you want to buy mobile of any other brand? If yes, Enter 1 else Enter 2 \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy SAMSUNG.\nEnter 2 to buy VIVO: \n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("SAMSUNG\n");
	printf("Please choose the Samsung model you would like to buy:\n1.Samsung Galaxy S10\n2.Samsung Galaxy On7 Prime\n3.Samsung Galaxy J8.\n\nEnter the number corresponding to your choice: ");
	scanf("%d",&smm);
	cost[0]=36000;
	cost[1]=15000;
	cost[2]=25000;
	if(smm==1)
	{
	printf("\nYou chose to buy Samsung Galaxy S10\n");
	printf("Features:1. 5.5 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 6GB RAM, 128GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.36000");
	printf("\nHow many Samsung Galaxy S10 do you want to buy?: \n");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	}
	if(smm==2)
	{
	printf("\nYou chose to buy Samsung Galaxy On7 Prime\n");
	printf("Features:1. 5.2 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 4GB RAM, 32GB ROM\n4. 3500 mAh bettery\n5. Price:Rs.15000");
	printf("\nHow many Samsung Galaxy On7 Prime do you want to buy?: \n");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[1]*quantity[0];
	sum+=price;
	}
	if(smm==3)
	{
	printf("\nYou chose to buy Samsung Galaxy J8\n");
	printf("Features:1. 5.7 inches screen\n2. 13MP rear camera and 13MP front camera\n3. 16GB RAM, 64GB ROM\n4. 3900 mAh bettery\n5. Price:Rs.25000");
	printf("\nHow many Samsung Galaxy On7 Prime do you want to buy?: \n");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[2]*quantity[0];
	sum+=price;
	}
	if(smm!=1&&smm!=2&&smm!=3)
	printf("Choice Invalid");
	}
	if(q==2)
	{
	printf("\nVIVO");
	printf("Please choose the VIVO model you would like to buy:\n1.VIVO V9\n2.VIVO V11\n3.VIVO Y83\n\nEnter the number corresponding to your choice: ");
	scanf("%d",&smm);
	cost[0]=20000;
	cost[1]=27000;
	cost[2]=25000;
	if(smm==1)
	{
	printf("\nYou chose to buy VIVO V9\n");
	printf("Features:1. 5.5 inches screen\n2. 13MP rear camera and 5MP front camera\n3. 5GB RAM, 64GB ROM\n4. 4000 mAh bettery\n5. Price:Rs.20000");
	printf("\nHow many VIVO V9 do you want to buy?: \n");
	scanf("%d",&stv);
	a[1]=2;
	quantity[1]=stv;
	price=cost[0]*quantity[1];
	sum+=price;
	}
	if(smm==2)
	{
	printf("\nYou chose to buy VIVO V11\n");
	printf("Features:1. 5.7 inches screen\n2. 13MP rear camera and 7MP front camera\n3. 4GB RAM, 64GB ROM\n4. 4500 mAh bettery\n5. Price:Rs.27000");
	printf("\nHow many VIVO V11 do you want to buy?: \n");
	scanf("%d",&stv);
	a[1]=2;
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	}
	if(smm==3)
	{
	printf("\nYou chose to buy VIVO Y83\n");
	printf("Features:1. 6.1 inches screen\n2. 13MP rear camera and 9MP front camera\n3. 16GB RAM, 64GB ROM\n4. 4100 mAh bettery\n5. Price:Rs.25000");
	printf("\nHow many VIVO Y83 do you want to buy?: \n");
	scanf("%d",&stv);
	a[1]=2;
	quantity[1]=stv;
	price=cost[2]*quantity[1];
	sum+=price;
	}
	if(smm!=1&&smm!=2&&smm!=3)
	printf("Choice Invalid");
	}
	}
	printf("\nYou bought %d OPPO Mobiles\n",quantity[2]);
	for(w=0;w<4;w++)
	{
	if(a[w]==3)
	{
	printf("You bought %d number of SAMSUNG Phones.\n",quantity[w]);
	}
		
	else if(a[w]==2)
	{
	printf("You bought %d number of VIVO phones\n",quantity[w]);
	}
	}
	printf("Your Cost in Cart is %d\n",sum);
    break;
    
	default:
    printf("Your choice is Invalid");
    sum=0;
 
} //Switch for choosing mobile brand ends here
		
		
}//Selection for mobile phone as electronic ends 
		
	
	
	if(ec==3)
	{
	printf("HOME APPLIANCES:\n\nWhat are you searching for?:\n\na.Air Conditioner\nb.Washing Machine\nc.Fridge\n\nEnter the variable corresponding to the brand of your choice: ");
	fflush(stdin);	
	scanf("%s",&hac);
	switch(hac)
{
	case 'a'://Air Conditioner
	printf("\n\nYou chose to buy Air Conditioner.\n\nBrands available:\n1.Voltas\n2.Hitachii\n3.Toshiba\nPlease enter the number corresponding to your choice");
	scanf("%d",&bac);
	cost[0]=40000;
	cost[1]=50000;
    cost[2]=55000;
    
    if(bac==1) //Voltas
	{
	printf("You chose to buy Voltas AC\n\nFeatures:\n1.Capacity: 1.2 tonne\n2. 4 star Inverter AC\n3.Price: Rs.40000");
	printf("\nHow many Voltas Air Conditioners would  you like to buy?: \n");
	scanf("%d",&stv);
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	printf("\nDo you want to buy AC of any other brand too? If yes, Enter 1 else Enter 2 \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy Hitachii.\nEnter 2 to buy Toshiba.\n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("Hitachii\n\nFeatures:\n1.Capacity: 1.5 tonne\n2. 4 star Inverter AC\n3.Price: Rs.50000");
	printf("\nHow many Hitachii Air Conditioners do you want to buy?\n");
	scanf("%d",&stv);
	a[1]=1;
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	}
	if(q==2)
	{
	printf("Toshiba\n\nFeatures:\n1.Capacity: 1.8 tonne\n2. 4 star Inverter AC\n3.Price: Rs.55000");
	printf("\nHow many Toshiba Air Conditioners do you want to buy?\n");
	scanf("%d",&stv);
	a[2]=2;
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;
	}
	}
	printf("\nYou bought %d Voltas Air Conditioners\n",quantity[0]);
	for(w=1;w<4;w++)
	{
	if(a[w]==1)
	{
	printf("You bought %d number of Hitachii Air Conditioners.\n",quantity[w]);
	}
	else if(a[w]==2)
	{
	printf("You bought %d number of Toshiba Air Conditioners.\n",quantity[w]);
	}
		
	}
	printf("Your Cost in Cart is %d\n",sum);
     	
			
		
	}//if condition for voltas ends here
	
	
	if(bac==2) //Hitachii
	{
	printf("You chose to buy Hitachii AC\n\nFeatures:\n1.Capacity: 1.5 tonne\n2. 4 star Inverter AC\n3.Price: Rs.50000");
	printf("\nHow many Hitachii Air Conditioners would  you like to buy?: \n");
	scanf("%d",&stv);
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	printf("\nDo you want to buy AC of any other brand too? If yes, Enter 1 else enter any other number:  \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy Voltas.\nEnter 2 to buy Toshiba.: \n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("Voltas\n\nFeatures:\n1.Capacity: 1.2 tonne\n2. 4 star Inverter AC\n3.Price: Rs.40000");
	printf("\nHow many Voltas Air Conditioners do you want to buy?: \n");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	}
	if(q==2)
	{
	printf("Toshiba\n\nFeatures:\n1.Capacity: 1.8 tonne\n2. 4 star Inverter AC\n3.Price: Rs.55000");
	printf("\nHow many Toshiba Air Conditioners do you want to buy?: \n");
	scanf("%d",&stv);
	a[2]=2;
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;
	}
	}
	printf("\nYou bought %d Hitachii Air Conditioners\n",quantity[1]);
	for(w=0;w<4;w++)
	{
	if(a[w]==3)
	{
	printf("You bought %d number of Voltas Air Conditioners.\n",quantity[w]);
	}
	else if(a[w]==2)
	{
	printf("You bought %d number of Toshiba Air Conditioners.\n",quantity[w]);
	}
	}
	printf("Your Cost in Cart is %d\n",sum);
    }//if condition for hitachii ends here
	
	if(bac==3) //Toshiba
	{
	printf("You chose to buy Toshiba AC\n\nFeatures:\n1.Capacity: 1.8 tonne\n2. 4 star Inverter AC\n3.Price: Rs.55000");
	printf("\nHow many Toshiba Air Conditioners would  you like to buy?\n");
	scanf("%d",&stv);
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;
	printf("\nDo you want to buy AC of any other brand too? If yes, Enter 1 else Enter 2 \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy Voltas.\nEnter 2 to buy Hitachii.\n\n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("Voltas\n\nFeatures:\n1.Capacity: 1.2 tonne\n2. 4 star Inverter AC\n3.Price: Rs.40000");
	printf("\nHow many Voltas Air Conditioners do you want to buy?\n");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	}
	if(q==2)
	{
	printf("Hitachii\n\nFeatures:\n1.Capacity: 1.5 tonne\n2. 4 star Inverter AC\n3.Price: Rs.50000");
	printf("\nHow many Hitachii Air Conditioners do you want to buy?\n");
	scanf("%d",&stv);
	a[1]=1;
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	}
	}
	printf("\nYou bought %d Toshiba Air Conditioners\n",quantity[2]);
	for(w=0;w<4;w++)
	{
	if(a[w]==3)
	{
	printf("You bought %d number of Voltas Air Conditioners.\n",quantity[w]);
	}
	if(a[w]==1)
	{
	printf("You bought %d number of Hitachii Air Conditioners.\n",quantity[w]);
	}
	}
	printf("Your Cost in Cart is %d\n",sum);
	}
	sum=0;
	break;
	
	
	
	
	case 'b': //Washing Machine 
	printf("You chose to buy Washing Machine");
	printf("\nBrands available:\n1.Haier\n2.Whirlpool\n3.Bosch\nPlease enter the number corresponding to your choice: ");
	scanf("%d",&bmc);
	cost[0]=30000;
	cost[1]=45000;
    cost[2]=50000;
    if(bmc==1) //Haier
    {
    printf("\n\nYou chose to buy Haier washing machine\n\nFeatures: 1.Capacity:6.5 kg Front loading\n2.Smart Rinse\n3.Price: Rs.30000");
	printf("\nHow many Haier washing machines would you like to buy?:  \n");
	scanf("%d",&stv);
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	printf("\nDo you want to buy washing machines of any other brand too? If yes, Enter 1 else press any other number :  \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy Whirlpool.\nEnter 2 to buy Bosch. :  \n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("\n\nWhirlpool\n\nFeatures:\n1.Capacity:7.0 kg Top loading\n2.Smart Rinse \n3.Price: Rs.45000");
	printf("\nHow many Whirlpool washing machines do you want to buy?: \n");
	scanf("%d",&stv);
	a[1]=1;
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	}
	if(q==2)
	{
	printf("\n\nBosch\n\nFeatures:\n1.Capacity:7.5 kg Front loading\n2.Smart Rinse+Complete Dry wash AC\n3.Price: Rs.50000");
	printf("\nHow many Bosch Washing Machines do you want to buy?: \n");
	scanf("%d",&stv);
	a[2]=2;
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;	
	}
	printf("\nYou bought %d Haier Washing Machines\n",quantity[0]);
	for(w=1;w<4;w++)
	{
	if(a[w]==1)
	{
	printf("\nYou bought %d number of Whirlpool washing machines.\n",quantity[w]);
	}
	if(a[w]==2)
	{
	printf("You bought %d number of Bosch washing machines.\n",quantity[w]);
	}
			
	}
	
	}
	printf("Your Cost in Cart is %d\n",sum);
		
}
    if(bmc==2) //Whirlpool
    {
    printf("You chose to buy Whirlpool washing machine\n\nFeatures:\n1.Capacity:7.0 kg Top loading\n2.Smart Rinse\n3.Price: Rs.45000");
	printf("\nHow many Whirlpool washing machines would you like to buy?: \n");
	scanf("%d",&stv);
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	printf("\nDo you want to buy washing machines of any other brand too? If yes, Enter 1 else enter any other number : \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy Haier.\nEnter 2 to buy Bosch. : \n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("\n\nHaier\nFeatures:Capacity:6.5 kg Front loading\n2.Smart Rinse AC\n3.Price: Rs.30000");
	printf("\nHow many Haier washing machines do you want to buy?: \n");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	}
	if(q==2)
	{
	printf("\n\nBosch\n\n\nFeatures: 1.Capacity:7.5 kg Front loading\n2.Smart Rinse+Complete Dry wash AC\n3.Price: Rs.50000");
	printf("\nHow many Bosch Washing Machines do you want to buy?: \n");
	scanf("%d",&stv);
	a[2]=2;
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;	
	}
	printf("\nYou bought %d Whirlpool Washing Machines\n",quantity[1]);
	for(w=0;w<4;w++)
	{
	if(a[w]==3)
	{
	printf("\nYou bought %d number of Haier washing machines.\n",quantity[w]);
	}
	if(a[w]==2)
	{
	printf("\nYou bought %d number of Bosch washing machines.\n",quantity[w]);
	}
	}
	
	}
	printf("\nYour Cost in Cart is %d\n",sum);
	}
	if(bmc==3) //Bosch
	{
	printf("You chose to buy Bosch washing machine\n\nFeatures: 1.Capacity:7.5 kg Front loading\n2.Smart Rinse+Complete Dry wash AC\n3.Price: Rs.50000");
	printf("\nHow many Bosch washing machines would you like to buy?: \n");
	scanf("%d",&stv);
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;
	printf("\nDo you want to buy washing machines of any other brand too? If yes, Enter 1 else Enter 2 \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy Whirlpool.\nEnter 2 to buy Haier. :  \n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("Whirlpool");
	printf("\nHow many Whirlpool washing machines do you want to buy?\nFeatures:\n1.Capacity:7.0 kg Top loading\n2.Smart Rinse \n3.Price: Rs.45000");
	scanf("%d",&stv);
	a[1]=1;
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	}
	if(q==2)
	{
	printf("\nYou chose to buy Haier washing machine\n\n\nFeatures: 1.Capacity:6.5 kg Front loading\n2.Smart Rinse AC\n3.Price: Rs.30000");
	printf("\nHow many Haier washing machines would you like to buy?: ");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	}
	printf("\nYou bought %d Bosch Washing Machines\n",quantity[2]);
	for(w=0;w<4;w++)
	{
	if(a[w]==1)
	{
	printf("\nYou bought %d number of Whirlpool washing machines.\n",quantity[w]);
	}
	if(a[w]==3)
	{
	printf("\nYou bought %d number of Bosch washing machines.\n",quantity[w]);
	}
			
	}
	
		
	}
	printf("\nYour Cost in Cart is %d\n",sum);
	}
	if(bmc!=1&&bmc!=2&&bmc!=3)
	{
	printf("\nInvalid Choice\n");
    }
    sum=0;
	break;
	
	
	
	case 'c': //Fridge
	printf("You chose to buy Fridge\n\n");
	printf("Brands available:\n1.LG\n2.Godrej\n3.Samsung\n\nPlease enter the number corresponding to your choice: ");
	scanf("%d",&bmc);
	cost[0]=25000;
	cost[1]=35000;
    cost[2]=45000;
    if(bmc==1)
    {
    printf("\n\nYou chose to buy LG Fridge\n\nFeatures:\n1.Capacity:180 L\n2.Direct Cool\n3.Price: Rs.25000");
	printf("\nHow many LG Fridge would you like to buy?: \n");
	scanf("%d",&stv);
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	printf("\nDo you want to buy fridge of any other brand too? If yes, Enter 1 else enter any other key: \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy Godrej.\nEnter 2 to buy Samsung. :  ");
	scanf("%d",&q);
	if(q==1)
	{
	printf("\n\nGodrej\nFeatures: 1.Capacity:280 L\n2.Multi fridge door\n3.Price: Rs.35000");
	printf("\nHow many Godrej fridge do you want to buy?: ");
	scanf("%d",&stv);
	a[1]=1;
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	}
	if(q==2)
	{
	printf("\n\nSamsung\nFeatures: 1.Capacity: 570 L\n2.Frost free+Multi-fridge door\n3.Price: Rs.45000");
	printf("\nHow many Samsung do you want to buy?: \n");
	scanf("%d",&stv);
	a[2]=2;
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;	
	}
	printf("\nYou bought %d LG Fridge\n",quantity[0]);
	for(w=1;w<4;w++)
	{
	if(a[w]==1)
	{
	printf("You bought %d number of Godrej fridge.\n",quantity[w]);
	}
	if(a[w]==2)
	{
	printf("You bought %d number of Samsung fridge.\n",quantity[w]);
	}
	}
	
	}
	printf("Your Cost in Cart is %d\n",sum);
    }
    if(bmc==2)
    {
    printf("\n\nYou chose to buy Godrej\nFeatures: 1.Capacity:280 L\n2.Multi-fridge door\n3.Price: Rs.35000");
	printf("\nHow many Godrej fridge would you like to buy?: \n");
	scanf("%d",&stv);
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	printf("\nDo you want to buy fridge of any other brand too? If yes, Enter 1 else enter any other key: \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Enter 1 to buy LG.\nEnter 2 to buy Samsung.: \n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("\n\nLG\nFeatures: 1.Capacity:180 L\n2.Direct Cool\n3.Price: Rs.25000");
	printf("\nHow many LG fridge do you want to buy?: ");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	}
	if(q==2)
	{
	printf("\n\nSamsung\nFeatures:\n1.Capacity: 570 L\n2.Frost free+Multi-fridge door\n3.Price: Rs.45000");
	printf("\nHow many Samsung do you want to buy?: ");
	scanf("%d",&stv);
	a[2]=2;
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;	
	}
	printf("\nYou bought %d Godrej fridge\n",quantity[1]);
	for(w=0;w<4;w++)
	{
	if(a[w]==3)
	{
	printf("\nYou bought %d number of LG fridge.\n",quantity[w]);
	}
		
    if(a[w]==2)
	{
	printf("\nYou bought %d number of Samsung.\n",quantity[w]);
	}
			
	}
	}
	printf("\nYour Cost in Cart is %d\n",sum);
	}
	
	if(bmc==3)
	{
	printf("\n\nYou chose to buy Samsung fridge\nFeatures: 1.Capacity: 570 L\n2.Frost free-Multi-fridge door\n3.Price: Rs.45000");
	printf("\nHow many Samsung fridge would you like to buy?: \n");
	scanf("%d",&stv);
	quantity[2]=stv;
	price=cost[2]*quantity[2];
	sum+=price;
	printf("\nDo you want to buy fridge of any other brand too? If yes, Enter 1 else Enter 2 \n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("\n\nEnter 1 to buy LG.\nEnter 2 to buy Godrej.\n");
	scanf("%d",&q);
	if(q==1)
	{
	printf("\nLG");
	printf("\nHow many LG fridge do you want to buy?\nn\n\nFeatures: 1.Capacity:180 L\n2.Direct Cool\n3.Price: Rs.25000");
	scanf("%d",&stv);
	a[0]=3;
	quantity[0]=stv;
	price=cost[0]*quantity[0];
	sum+=price;
	}
	if(q==2)
	{
	printf("\n\nYou chose to buy Godrej fridge\n\nFeatures: 1.Capacity:280 L\n2.Multi-fridge door\n3.Price: Rs.35000");
	printf("\nHow many Godrej fridge would you like to buy?: \n");
	scanf("%d",&stv);
	a[1]=1;
	quantity[1]=stv;
	price=cost[1]*quantity[1];
	sum+=price;
	}
	printf("\nYou bought %d Samsung fridge\n",quantity[2]);
	for(w=0;w<4;w++)
	{
	if(a[w]==1)
	{
	printf("\nYou bought %d number of Godrej fridge.\n",quantity[w]);
	}
		
	if(a[w]==3)
	{
	printf("\nYou bought %d number of LG fridge.\n",quantity[w]);
	}
			
	}
	
	}
	printf("\nYour Cost in Cart is %d\n",sum);
		
	}
	
	if(bmc!=1&&bmc!=2&&bmc!=3)
	{
	printf("\nInvalid Choice\n");
    }
	sum=0;
	break;
	default: 
	printf("\nChoice Invalid\n");
	}//Switch case for choosing home appliance ends here
		
	} 
	else if (ec!=1&& ec!=2&& ec!=3)
	{
	printf("\nExit from Electronics\n"); //if ends for choosing fridge	
    }
	break;
	






case 4:            // cosmetics  
	
	 printf("\nWelcome.You've chosen to buy cosmetics.\n ");
	 printf("\na.Make up\nb.Skin Care\nc.Hair care");
	 printf("\n\nEnter your choice: \n");
	 fflush(stdin);
	 scanf("%s",&ch);
	 switch(ch)
	 {
	 	case'a':
			printf("You've chosen Makeup!\nWhat would you like to buy?\n\n1.Eyeliner\n2.Lipstick\n3.Foundation\n");
			printf("Enter your choice according to the corresponding number: \n");
			scanf("%d",&mc);
			switch(mc)
			{
				case 1://EYELINER
					printf("You've chosen Eyeliners.\nBrands availabale:\n1.Maybelline New York\n2.Lakme\n3.M.A.C\nEnter your choice accoring to the corresponding number: \n");
					scanf("%d",&en);
					cost[0]=230;
					cost[1]=350;
					cost[2]=110;
					
					if(en==1)  //MAYBELLINE
					{
		                 printf("\nYou chose to buy Maybelline New York Eyeliner");
		                 printf("\nHow many Maybelline New York Eyeliners do you want to buy?: \n");
		                 scanf("%d",&mnen);
		                 quantity[0]=mnen;
		                 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy eyeliners of any other brand? Press 1 if Yes, else any other key: \n");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for M.A.C.\n2.Enter 2 for Lakme: \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nM.A.C Eyeliners");
		                  		printf("\nHow many M.A.C eyeliners would you like to buy?: \n");
		                  		scanf("%d",&mn);
		                  		a[2]=1;
		                  		quantity[2]=mn;
		                  		price=cost[2]*mn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nLAKME Eyeliners");
		                  	printf("\nHow many LAKME eyeliners would you like to buy?: \n");
		                  	scanf("%d",&ln);
		                  	a[1]=2;
		                  	quantity[1]=ln;
		                  	price=cost[1]*ln;
		                  	sum+=price;
						   }
		                  	
					   }
					   else
					   printf("Thank you for shopping!");
					   printf("\nYou bought %d Maybelline Eyeliners\n",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of M.A.C Eyeliners \n",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of LAKME Eyeliners \n ",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(en==2)
		               { 
		                  printf("\nYou chose to buy Lakme Eyeliner\n");
		                  printf("\nHow many Lakme eyeliners do you want to buy?: \n");
		                  scanf("%d",&mnen);
		                  quantity[1]=mnen;
		                  price=cost[1]*quantity[1];
		                  sum+=price;
		                  printf("Do you want to buy eyeliners of any other brand? If yes, enter 1 else enter any other key:  \n");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Maybelline New York.\n2.Enter 2 for M.A.C: \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nMaybelline New York Eyeliners");
		                  		printf("\nHow many Maybelline New York eyeliners would you like to buy?: \n");
		                  		scanf("%d",&mn);
		                  		a[0]=1;
		                  		quantity[0]=mn;
		                  		price=cost[0]*mn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nM.A.C Eyeliners");
		                  		printf("\nHow many M.A.C eyeliners would you like to buy?: \n");
		                  		scanf("%d",&ln);
		                  		a[2]=2;
		                  		quantity[2]=ln;
		                  		price=cost[2]*ln;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("Thank you for shopping!");
					   printf("You bought %d Lakme Eyeliners",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Maybelline New York Eyeliners \n ",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of M.A.C Eyeliners \n ",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		                  
		               }
		               if(en==3)
		               {
		                  printf("\nYou chose to buy M.A.C Eyeliner\n");
		                  printf("\nHow many M.A.C eyeliners do you want to buy?: \n");
		                  scanf("%d",&mnen);
		                  quantity[2]=mnen;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("Do you want to buy eyeliners of any other brand?\nIf yes, enter 1. Else, enter any other key. : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Maybelline New York.\n2.Enter 2 for Lakme \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nMaybelline New York Eyeliners");
		                  		printf("\nHow many Maybelline New York eyeliners would you like to buy?: \n");
		                  		scanf("%d",&mn);
		                  		a[0]=1;
		                  		quantity[0]=mn;
		                  		price=cost[0]*mn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\n Lakme Eyeliners");
		                  		printf("\nHow many Lakme eyeliners would you like to buy?: \n");
		                  		scanf("%d",&ln);
		                  		a[1]=1;
		                  		quantity[1]=ln;
		                  		price=cost[1]*ln;
		                  		sum+=price;
						   }
						   
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d M.A.C Eyeliners",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Maybelline New York Eyeliners \n ",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Lakme Eyeliners \n",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);	
				}
				else if(en!=1&&en!=2&&en!=3)
				printf("Invalid Choice");
sum=0;
	break;

case 2:    // Lipstick
		            printf("You've chosen Lipsticks.\nBrands availabale:\n\n1.Maybelline New York\n2.M.A.C\n3.Lakme\nEnter your choice according to the corresponding number: ");
					scanf("%d",&lp);
					cost[0]=230;
					cost[1]=350;
					cost[2]=110;
					if(lp==1)
					{
		                 printf("\nYou chose to buy Maybelline New York Lipstick");
		                 printf("\nHow many Maybelline New York Lipstick do you want to buy?: \n");
		                 scanf("%d",&lpm);
		                
		                 quantity[0]=lpm;
		                 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy lipsticks of any other brand?: If yes, enter 1 else enter any other key: ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for M.A.C.\nEnter 2 for Lakme: \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nM.A.C lipsticks");
		                  		printf("\nHow many M.A.C lipsticks would you like to buy?: \n");
		                  		scanf("%d",&lpma);
		                  		a[2]=1;
		                  		quantity[2]=lpma;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nLAKME Lipstick");
		                  		printf("\nHow many LAKME lipstick would you like to buy?: \n");
		                  		scanf("%d",&lpla);
		                  		a[1]=2;
		                  		quantity[1]=lpla;
		                  		price=cost[1]*quantity[1];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Maybelline Lipsticks",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of M.A.C Lipsticks",quantity[w]);
					   	
						if(a[w]==2)
					   	printf("\nYou bought %d number of LAKME Lipsticks",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(lp==2)
		               { 
		                  printf("\nYou chose to buy M.A.C Lipsticks\n");
		                  printf("\nHow many M.A.C lipsticks do you want to buy?: \n");
		                  scanf("%d",&lpma);
		                 
		                  quantity[2]=lpma;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("Do you want to buy lipsticks of any other brand? If yes, enter 1 esle enter any other key:  ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Maybelline New York.\nEnter 2 for Lakme.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nMaybelline New York Lipsticks");
		                  		printf("\nHow many Maybelline New York lipsticks would you like to buy?: \n");
		                  		scanf("%d",&lpm);
		                  		a[0]=1;
		                  		quantity[0]=lpm;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nLAKME Lipsticks");
		                  		printf("\nHow many LAKME lipsticks would you like to buy?: \n");
		                  		scanf("%d",&lpla);
		                  		a[1]=2;
		                  		quantity[1]=lpla;
		                  		price=cost[1]*quantity[1];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d M.A.C lipsticks",quantity[2]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Maybelline New York Lipsticks \n ",quantity[w]);
					   	if(a[w]==2)
					   	printf("\nYou bought %d number of LAKME Lipsticks \n ",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		            
		               }
		               if(lp==3)
		               {
		                  printf("\nYou chose to buy Lakme Lipsticks\n");
		                  printf("\nHow many Lakme Lipsticks do you want to buy?: \n");
		                  scanf("%d",&lpla);
		               
		                  quantity[1]=lpla;
		                  price=cost[1]*quantity[1];
		                  sum+=price;
		                  printf("\nDo you want to buy Lipsticks of any other brand?: ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Maybelline New York.\nEnter 2 for M.A.C : \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nMaybelline New York Lipsticks");
		                  		printf("\nHow many Maybelline New York Lipsticks would you like to buy? : \n");
		                  		scanf("%d",&lpm);
		                  		a[0]=1;
		                  		quantity[0]=lpm;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nM.A.C Lipsticks");
		                  		printf("\nHow many M.A.C Lipsticks would you like to buy?: \n");
		                  		scanf("%d",&lpma);
		                  		a[2]=2;
		                  		quantity[2]=lpma;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d LAKME Lipsticks",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Maybelline New York Lipsticks",quantity[w]);
					   	if(a[w]==2)
					   	printf("\nYou bought %d number of M.A.C Lipsticks",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		               }
		               if(lp!=1&& lp!=2 && lp!=3)
		               printf("\nChoice Invalid\n");
		               sum=0;
		               break;
		               
		            case 3:            //Foundation
		            printf("You've chosen Foundation.\nBrands availabale:\n\n1.Maybelline New York\n2.M.A.C\n3.Lakme\nEnter your choice according to the corresponding number : ");
					scanf("%d",&f);
					cost[0]=230;
					cost[1]=350;
					cost[2]=110;
					if(f==1)
					{
		                 printf("\nYou chose to buy Maybelline New York Foundation \n ");
		                 printf("\nHow many Maybelline New York Foundation do you want to buy?: \n");
		                 scanf("%d",&fm);
		                 
		                 quantity[0]=fm;
		                 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy foundations of any other brand?: Enter 1 if yes, else any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for M.A.C.\nEnter 2 for Lakme: \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nM.A.C foundation");
		                  		printf("\nHow many M.A.C foundation would you like to buy?: \n");
		                  		scanf("%d",&fn);
		                  		a[2]=1;
		                  		quantity[2]=fn;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nLAKME Foundation");
		                  		printf("\nHow many LAKME foundation would you like to buy?: \n");
		                  		scanf("%d",&fl);
		                  		a[1]=2;
		                  		quantity[1]=fl;
		                  		price=cost[1]*quantity[1];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Maybelline Foundation",quantity[0]);
					   for(w=1;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of M.A.C Foundation \n ",quantity[w]);
					   else if(a[w]==2)
					   printf("\nYou bought %d number of LAKME Foundation \n",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(f==2)
		               { 
		                  printf("\nYou chose to buy M.A.C Foundation\n");
		                  printf("\nHow many M.A.C foundation do you want to buy?: \n");
		                  scanf("%d",&fn);
		                  
		                  quantity[2]=fn;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("Do you want to buy foundations of any other brand? if Yes, Enter 1 else enter any other key: ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Maybelline New York.\nEnter 2 for Lakme: \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nMaybelline New York Foundations");
		                  		printf("\nHow many Maybelline New York Foundations would you like to buy?: \n");
		                  		scanf("%d",&fm);
		                  		a[0]=1;
		                  		quantity[0]=fm;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nLAKME Foundations");
		                  		printf("\nHow many LAKME Foundations would you like to buy?: \n");
		                  		scanf("%d",&fl);
		                  		a[1]=2;
		                  		quantity[1]=fl;
		                  		price=cost[1]*quantity[1];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d M.A.C foundations",quantity[2]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Maybelline New York Foundations",quantity[w]);
					 	else if(a[w]==2)
					  	printf("\nYou bought %d number of LAKME Foundations",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		           
		               }
		               if(f==3)
		               {
		                  printf("\nYou chose to buy Lakme Foundations\n");
		                  printf("\nHow many do you want to buy?: \n");
		                  scanf("%d",&fl);
		                  
		                  quantity[1]=fl;
		                  price=cost[1]*quantity[1];
		                  sum+=price;
		                  printf("Do you want to buy foundations of any other brand?: Enter 1 if yes, else any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Maybelline New York.\nEnter 2 for M.A.C\n : ");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nMaybelline New York Foundation");
		                  		printf("\nHow many Maybelline New York Foundation would you like to buy?: \n");
		                  		scanf("%d",&fm);
		                  		a[0]=1;
		                  		quantity[0]=fm;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nM.A.C Foundations");
		                  		printf("\nHow many M.A.C Foundations would you like to buy?: \n");
		                  		scanf("%d",&fn);
		                  		a[2]=2;
		                  		quantity[2]=fn;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d LAKME Foundations",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\n You got %d number of Maybelline New York Foundations \n",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\n You bought %d number of M.A.C Foundations \n",quantity[w]);
					   	
					   }
					   printf("Your cost in the cart is %d\n",sum);
		              
					  
		               }
		               if (f!=1&&f!=2&&f!=3)
		               {
		                printf("\nYour choice is Invalid\n\n");
					   }
		               sum=0;
		               
		               break;
		               
		           }
		               break;     // case a ends
		             					
	 
     
	 
	 
	 
	 	 case 'b':                         //Skin Care
	 	printf("You've chosen Skin Care");
	 	printf("What would you like to buy?\n1.Moisturizer\n2.Face Wash\n3.Sunscreen.\n Enter your choice according to the corresponding number: \n");
	 	scanf("%d",&p);
	 	switch(p)
	 	{
	 	 case 1:                   // Moisturizer
		 printf("You've chosen Moistuizer.\nBrands availabale:\n\n1.Vaseline\n2.Dove\n3.Nivea\nEnter your choice according to the corresponding number.\n");
           scanf("%d",&moz);
		 cost[0]=250;
		 cost[1]=400;
		 cost[2]=300;
		 if(moz==1)
		 {
		 printf("\nYou chose to buy Vaseline Moisturizer");
		 printf("\nHow many Vaseline Moisturizers would you like to buy?: \n");
		 scanf("%d",&vn);
		 
		 quantity[0]=vn;
		 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy moisturizers of any other brand?: If yes, enter 1 else enter any other key: ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Dove.\nEnter 2 for Nivea. : \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nDove Moisturizers");
		                  		printf("\nHow many Dove Moisturizers would you like to buy?\n");
		                  		scanf("%d",&dn);
		                  		a[1]=1;
		                  		quantity[1]=dn;
		                  		price=cost[1]*dn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nNivea Moisturizers");
		                  		printf("\nHow many Nivea Moisturizers would you like to buy?\n");
		                  		scanf("%d",&nn);
		                  		a[2]=2;
		                  		quantity[2]=nn;
		                  		price=cost[2]*nn;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Vaseline Moisturizers",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Dove Moisturizers \n ",quantity[w]);
					 	else if(a[w]==2)
					  	printf(" \n You bought %d number of Nivea Moisturizers",quantity[w]);
					   	
					   }
					   printf("Your cost in the cart is %d\n",sum);
		              
		               }
		               if(moz==2)
		               { 
		                  printf("\nYou chose to buy Dove Moisturizer\n");
		                  printf("\nHow many Dove Moisturizers would you like to buy?\n");
		                  scanf("%d",&dn);
		                  quantity[1]=dn;
		                  price=cost[1]*quantity[1];
		                  sum+=price;
		                  printf("Do you want to buy moisturizers of any other brand? If yes, enter 1, else enter any other key :");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Vaseline.\n2.Enter 2 for Nivea.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nVaseline Moisturizers");
		                  		printf("\nHow many Vaseline Moisturizers would you like to buy?\n");
		                  		scanf("%d",&vn);
		                  		a[0]=1;
		                  		quantity[0]=vn;
		                  		price=cost[0]*vn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nNivea Moisturizers");
		                  		printf("\nHow many Nivea Moisturizers would you like to buy?\n");
		                  		scanf("%d",&nn);
		                  		a[2]=2;
		                  		quantity[2]=nn;
		                  		price=cost[2]*nn;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Dove Moisturizers",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Vaseline Moisturizers",quantity[w]);
					  	else if(a[w]==2)
					   	printf("\nYou bought %d number of Nivea Moisturizers",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(moz==3)
		               {
		                  printf("\nYou chose to buy Nivea Moisturizers\n");
		                  printf("\nHow many Nivea Moisturizers do you want to buy?\n");
		                  scanf("%d",&nn);
		                 
		                  quantity[2]=nn;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("\nDo you want to buy eyeliners of any other brand?");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Vaseline.\n2.Enter 2 for Dove\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nVaseline Moisturizers");
		                  		printf("\nHow many Vaseline Moisturizers would you like to buy?\n");
		                  		scanf("%d",&vn);
		                  		a[0]=1;
		                  		quantity[0]=vn;
		                  		price=cost[0]*vn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nDove Moisturizers");
		                  		printf("\nHow many Dove Moisturizers would you like to buy?\n");
		                  		scanf("%d",&dn);
		                  		a[1]=2;
		                  		quantity[1]=dn;
		                  		price=cost[1]*dn;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Nivea Moisturizers",quantity[2]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Vaseline Moisturizers.",quantity[w]);
					  	else if(a[w]==2)
					   	printf("\nYou bought %d number of Dove Moisturizers",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		            sum=0;
	}
	            if(moz!=1&&moz!=2&&moz!=3)
	            printf("Choice Invalid");
	                break;   
					     // case 1 ends.
	case 2:      // Facewash
	printf("You've chosen Face wash.\nBrands availabale:\n\n1.Garnier\n2.Himalaya\n3.Clean and Clear\nEnter your choice according to the corresponding number : \n");
           scanf("%d",&fc);
		 cost[0]=250;
		 cost[1]=400;
		 cost[2]=300;
		 if(fc==1)
		 {
		 printf("\nYou chose to buy Garnier Face Wash");
		 printf("\nHow many would you like to buy?\n");
		 scanf("%d",&gn);
		 quantity[0]=gn;
		 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy face washes of any other brand? If yes, enter 1 else enter any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Himalaya.\nEnter 2 for Clean and Clear.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nHimalaya");
		                  		printf("\nHow many would you like to buy?\n");
		                  		scanf("%d",&hn);
		                  		a[1]=1;
		                  		quantity[1]=hn;
		                  		price=cost[1]*quantity[1];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nClean and Clear");
		                  		printf("\nHow many would you like to buy?\n");
		                  		scanf("%d",&ccn);
		                  		a[2]=2;
		                  		quantity[2]=ccn;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("Thank you for shopping!");
					   printf("You bought %d Garnier Face Wash",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("You got %d number of Himalaya Face Wash",quantity[w]);
					  	else if(a[w]==2)
					   	printf("You bought %d number of Clean and Clear Face wash",quantity[w]);
					   	
					   }
					   printf("Your cost in the cart is %d\n",sum);
		              
		               }
		               if(fc==2)
		               { 
		                  printf("\nYou chose to buy Himalaya\n");
		                  printf("\nHow many would you like to buy?: \n");
		                  scanf("%d",&hn);
		                 
		                  quantity[1]=hn;
		                  price=cost[1]*quantity[1];
		                  sum+=price;
		                  printf("Do you want to buy moisturizers of any other brand? If yes, enter 1 else enter any other key :");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Garnier.\nEnter 2 for Clean and Clear.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nGariner Face Wash");
		                  		printf("\nHow many would you like to buy?: \n");
		                  		scanf("%d",&gn);
		                  		a[0]=1;
		                  		quantity[0]=gn;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nClean and Clear");
		                  		printf("\nHow many would you like to buy?: \n");
		                  		scanf("%d",&ccn);
		                  		a[2]=2;
		                  		quantity[2]=ccn;
		                  		price=cost[2]*ccn;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("Thank you for shopping!");
					   printf("You bought %d Himalaya Face Wash",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("You got %d number of Garnier Face Wash",quantity[w]);
					   	else if(a[w]==2)
					   	printf("You bought %d number of Clean and Clear",quantity[w]);
					   	
					   }
					   printf("Your cost in the cart is %d\n",sum);
		             
		               }
		               if(fc==3)
		               {
		                  printf("\nYou chose to buy Clean and Clear Face Wash\n");
		                  printf("\nHow many do you want to buy?: \n");
		                  scanf("%d",&ccn);
		                  quantity[2]=ccn;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("Do you want to buy face washes of any other brand? If yes, enter 1 else enter any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Garnier.\nEnter 2 for Himalaya\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nGarnier Face Wash");
		                  		printf("\nHow many would you like to buy?: \n");
		                  		scanf("%d",&gn);
		                  		a[0]=1;
		                  		quantity[0]=gn;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nHimalaya Face Wash");
		                  		printf("\nHow many would you like to buy?: \n");
		                  		scanf("%d",&hn);
		                  		a[1]=2;
		                  		quantity[1]=hn;
		                  		price=cost[1]*quantity[1];	
								sum+=price;
						   }
		                  	
					   }
					   else
					   printf("Thank you for shopping!");
					   printf("You bought %d Clean and Clear face wash",quantity[2]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("You got %d number of Garnier face wash.\n ",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\n You bought %d number of Himalaya",quantity[w]);
					   	
					   }
				
					   printf("Your cost in the cart is %d\n",sum);
				}
				      sum=0;
		              break;
		              case 3:   //Sunscreen
		              printf("You've chosen Sunscreen.\nBrands availabale:\n.Lotus\n 2.Himalaya\n 3.Lakme\n Enter your choice according to the corresponding number: \n");
           scanf("%d",&ss);
		 cost[0]=150;
		 cost[1]=130;
		 cost[2]=360;
		 if(ss==1)
		 {
		 printf("\nYou chose to buy Lotus Sunscreen");
		 printf("\nHow many would you like to buy?: \n");
		 scanf("%d",&sl);
		 
		 quantity[0]=sl;
		 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy sunscreen of any other brand? If yes, enter 1 else enter any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Himalaya.\nEnter 2 for Lakme.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nHimalaya");
		                  		printf("\nHow many would you like to buy?\n");
		                  		scanf("%d",&sh);
		                  		a[1]=1;
		                  		quantity[1]=sh;
		                  		price=cost[1]*quantity[1];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nLakme Sun Screen");
		                  		printf("\nHow many would you like to buy?\n");
		                  		scanf("%d",&ccn);
		                  		a[2]=2;
		                  		quantity[2]=sla;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Lotus Sunscreen",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Himalaya Sunscreen \n ",quantity[w]);
					   	else if(a[w]==2)
					   	printf(" \nYou bought %d number of Lakme Sunscreen",quantity[w]);
					   	
					   }
					   printf("Your cost in the cart is %d\n",sum);
		              
		               }
		               if(ss==2)
		               { 
		                  printf("\nYou chose to buy Himalaya\n");
		                  printf("\nHow many would you like to buy?\n");
		                  scanf("%d",&sh);
		                  quantity[1]=sh;
		                  price=cost[1]*quantity[1];
		                  sum+=price;
		                  printf("\nDo you want to buy sunscreens of any other brand?");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Lotus.\n2.Enter 2 for Lakme.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nLotus Sunscreen");
		                  		printf("\nHow many would you like to buy?\n");
		                  		scanf("%d",&sl);
		                  		a[0]=1;
		                  		quantity[0]=sl;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nLakme Sunscreen");
		                  		printf("\nHow many would you like to buy?\n");
		                  		scanf("%d",&sla);
		                  		a[2]=2;
		                  		quantity[2]=sla;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Himalaya Sunscreen",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\n You got %d number of Lotus Sunscreen \n",quantity[w]);
					   	else if(a[w]==2)
					   	printf(" \n You bought %d number of Lakme Sunscreen",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
					  
		               }
		               if(ss==3)
		               {
		                  printf("\nYou chose to buy Lakme Sunscreen\n");
		                  printf("\nHow many do you want to buy?\n");
		                  scanf("%d",&sla);
		                  
		                  quantity[2]=sla;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("Do you want to buy sunscreen of any other brand? If yes, enter 1 else enter any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Lotus.\nEnter 2 for Himalaya\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	
		                  		printf("\nLotus Sunscreen");
		                  		printf("\nHow many would you like to buy?: \n");
		                  		scanf("%d",&sl);
		                  		a[0]=1;
		                  		quantity[0]=sl;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nHimalaya Sunscreen");
		                  		printf("\nHow many would you like to buy?: \n");
		                  		scanf("%d",&sh);
		                  		a[1]=2;
		                  		quantity[1]=sh;
		                  		price=cost[1]*quantity[1];		                  		
							sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Lakme Sunscreen",quantity[2]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Lotus.",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Himalaya",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		              }
		              sum=0;
	 break;
	
			 case 'c':                          //Hair Care
	 	printf("You've chosen Hair Care");
	 	printf("What would you like to buy?\n1.Shampoo\n2.Conditioner\n3.Serum\nEnter your choice according to the corresponding number: \n");
	 	scanf("%d",&t);
	 	switch(t)
	 	{
	 	 case 1:           //Shampoo
		 printf("You've chosen Shampoo.\nBrands availabale:\n\n1.TRESemme\n2.Dove\n3.Sunsilk\nEnter your choice accoring to the corresponding number: \n");
           scanf("%d",&sham);
		 cost[0]=275;
		 cost[1]=235;
		 cost[2]=330;
		 if(sham==1)
		 {
		 printf("\nYou chose to buy TRESemme Shampoo");
		 printf("\nHow many bottles of TRESemme Shampoo would you like to buy?: \n");
		 scanf("%d",&trn);
		
		 quantity[0]=trn;
		 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy shampoos of any other brand?: ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Dove.\nEnter 2 for Sunsilk. : \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nDove Shampoos");
		                  		printf("\nHow many Dove Shampoos would you like to buy?: \n");
		                  		scanf("%d",&dovn);
		                  		a[1]=1;
		                  		quantity[1]=dovn;
		                  		price=cost[1]*dovn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nSunsilk Shampoos");
		                  		printf("\nHow many Sunsilk would you like to buy?: \n");
		                  		scanf("%d",&sn);
		                  		a[2]=2;
		                  		quantity[2]=sn;
		                  		price=cost[2]*sn;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d shampoo",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Dove Shampoo",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Sunsilk Shampoo",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(sham==2)
		               { 
		                  printf("\nYou chose to buy Dove Shampoo\n");
		                  printf("\nHow many Dove Shampoos would you like to buy?: \n");
		                  scanf("%d",&dovn);
		                 
		                  quantity[1]=dovn;
		                  price=cost[1]*quantity[1];
		                  sum+=price;
		                  printf("Do you want to buy shampoos of any other brand?: ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for TRESemme.\nEnter 2 for Sunsilk.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nTRESemme");
		                  		printf("\nHow many TRESemme shampoos would you like to buy?: \n");
		                  		scanf("%d",&tn);
		                  		a[0]=1;
		                  		quantity[0]=tn;
		                  		price=cost[0]*tn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nSunsilk Shampoo");
		                  		printf("\nHow many Sunsilk shampoo would you like to buy?: \n");
		                  		scanf("%d",&sn);
		                  		a[1]=2;
		                  		quantity[1]=sn;
		                  		price=cost[1]*sn;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Dove Shampoo",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of TRESemme shampoo",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Sunsilk Shampoo",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(sham==3)
		               {
		                  printf("\nYou chose to buy Sunsilk Shampooo\n");
		                  printf("\nHow many Sunsilk shampoos do you want to buy?\n");
		                  scanf("%d",&sn);
		                  
		                  quantity[2]=sn;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("\nDo you want to buy eyeliners of any other brand?");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for TRESemme.\n2.Enter 2 for Dove\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nTRESemme Shampoo");
		                  		printf("\nHow many TRESemme Shampoo would you like to buy?\n");
		                  		scanf("%d",&tn);
		                  		a[0]=1;
		                  		quantity[0]=tn;
		                  		price=cost[0]*tn;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nDove Shampoo");
		                  		printf("\nHow many Dove Shampoos would you like to buy?\n");
		                  		scanf("%d",&sn);
		                  		a[1]=2;
		                  		quantity[1]=dovn;
		                  		price=cost[1]*dovn;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Dove Shampoos",quantity[2]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of TREsemme Shampoo.",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Dove shampoo",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		         
	}
	sum=0;
	break;
	case 2:                //Conditioner
		printf("You've chosen Conditioners.\nBrands availabale:\n\n1.TRESemme\n2.Dove\n3.Sunsilk\nEnter your choice accoring to the corresponding number: \n");
           scanf("%d",&con);
		 cost[0]=175;
		 cost[1]=160;
		 cost[2]=110;
		 if(con==1)
		 {
		 printf("\nYou chose to buy TRESemme Conditioner");
		 printf("\nHow many TRESemme Conditioners would you like to buy?\n");
		 scanf("%d",&trc);
		
		 quantity[0]=trc;
		 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy conditioners of any other brand? If yes, enter 1 else enter any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Dove.\nEnter 2 for Sunsilk.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nDove Conditionerss");
		                  		printf("\nHow many Dove Condtioners would you like to buy?\n");
		                  		scanf("%d",&dc);
		                  		a[1]=1;
		                  		quantity[1]=dc;
		                  		price=cost[1]*dc;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nSunsilk Conditioners");
		                  		printf("\nHow many Sunsilk Conditioners would you like to buy?\n");
		                  		scanf("%d",&sc);
		                  		a[2]=2;
		                  		quantity[2]=sc;
		                  		price=cost[2]*sc;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d conditioners",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Dove Condtioners",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Sunsilk Conditioners",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(con==2)
		               { 
		                  printf("\nYou chose to buy Dove Condtioners \n");
		                  printf("\nHow many Dove Conditoners would you like to buy?\n");
		                  scanf("%d",&dc);
		                 
		                  quantity[1]=dc;
		                  price=cost[1]*quantity[1];
		                  sum+=price;
		                  printf("Do you want to buy conditioners of any other brand? If yes, enter 1 else enter any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for TRESemme.\nEnter 2 for Sunsilk : \n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nTRESemme");
		                  		printf("\nHow many TRESemme conditioners would you like to buy? : \n");
		                  		scanf("%d",&trc);
		                  		a[0]=1;
		                  		quantity[0]=trc;
		                  		price=cost[0]*trc;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nSunsilk Shampoo");
		                  		printf("\nHow many Sunsilk Conditioners would you like to buy? : \n");
		                  		scanf("%d",&sc);
		                  		a[2]=2;
		                  		quantity[2]=sc;
		                  		price=cost[2]*sc;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Dove Conditioners",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of TRESemme conditioners",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Sunsilk conditioners",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		                }
		               if(con==3)
		               {
		                  printf("\nYou chose to buy Sunsilk Conditioners\n");
		                  printf("\nHow many Sunsilk conditioners do you want to buy?\n");
		                  scanf("%d",&sc);
		                  
		                  quantity[2]=sc;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("\nDo you want to buy conditioners of any other brand?");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for TRESemme.\n2.Enter 2 for Dove\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nTRESemme Conditioner");
		                  		printf("\nHow many TRESemme Conditioners would you like to buy?\n");
		                  		scanf("%d",&trc);
		                  		a[0]=1;
		                  		quantity[0]=trc;
		                  		price=cost[0]*trc;
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nDove Conditioners");
		                  		printf("\nHow many Dove Conditioners would you like to buy?\n");
		                  		scanf("%d",&dc);
		                  		a[1]=2;
		                  		quantity[1]=dc;
		                  		price=cost[1]*dc;
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Sunsilk Conditioners",quantity[2]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of TREsemme Conditioners.",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Dove Conditioners",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		             
}   
    sum=0;
	break;
	case 3:           // Serum
	printf("You've chosen Serum.\nBrands availabale:\n\n1.TRESemme\n2.Dove\n3.Sunsilk\nEnter your choice according to the corresponding number: \n");
           scanf("%d",&se);
		 cost[0]=175;
		 cost[1]=100;
		 cost[2]=120;
		 if(se==1)
		 {
		 printf("\nYou chose to buy TRESemme Serum");
		 printf("\nHow many TRESemme Serum would you like to buy? : \n");
		 scanf("%d",&set);
		
		 quantity[0]=set;
		 price=cost[0]*quantity[0];
		                 sum+=price;
		                 printf("Do you want to buy serum of any other brand? If yes, enter 1 else enter any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for Dove.\nEnter 2 for Sunsilk.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nDove Serum");
		                  		printf("\nHow many Dove serum would you like to buy? : \n");
		                  		scanf("%d",&sed);
		                  		a[1]=1;
		                  		quantity[1]=sed;
		                  		price=cost[1]*quantity[1];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nSunsilk serum");
		                  		printf("\nHow many Sunsilk serum would you like to buy? : \n");
		                  		scanf("%d",&ses);
		                  		a[2]=2;
		                  		quantity[2]=ses;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d TRESemme Serum",quantity[0]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of Dove Serum",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Sunsilk Serum",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(se==2)
		               { 
		                  printf("\nYou chose to buy Dove serum \n");
		                  printf("\nHow many Dove Serum would you like to buy?\n");
		                  scanf("%d",&sed);
		                  quantity[1]=sed;
		                  price=cost[1]*quantity[0];
		                  sum+=price;
		                  printf("\nDo you want to buy serum of any other brand?");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for TRESemme.\nEnter 2 for Sunsilk.\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nTRESemme");
		                  		printf("\nHow many TRESemme serum would you like to buy?: \n");
		                  		scanf("%d",&set);
		                  		a[0]=1;
		                  		quantity[0]=set;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nSunsilk Serum");
		                  		printf("\nHow many Sunsilk serum would you like to buy? : \n");
		                  		scanf("%d",&ses);
		                  		a[2]=2;
		                  		quantity[2]=ses;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Dove serum",quantity[1]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of TRESemme serum",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Sunsilk serum",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
		              
		               }
		               if(se==3)
		               {
		                  printf("\nYou chose to buy Sunsilk Serum\n");
		                  printf("\nHow many Sunsilk serum do you want to buy?\n");
		                  scanf("%d",&ses);
		                  quantity[2]=ses;
		                  price=cost[2]*quantity[2];
		                  sum+=price;
		                  printf("Do you want to buy serum of any other brand? If yes, enter 1 else enter any other key : ");
		                  scanf("%d",&m);
		                  if(m==1)
		                  {
		                  	printf("\nEnter 1 for TRESemme.\nEnter 2 for Dove\n");
		                  	scanf("%d",&q);
		                  	if(q==1)
		                  	{
		                  		printf("\nTRESemme Serum");
		                  		printf("\nHow many TRESemme serum would you like to buy?\n");
		                  		scanf("%d",&set);
		                  		a[0]=1;
		                  		quantity[0]=set;
		                  		price=cost[0]*quantity[0];
		                  		sum+=price;
		                  		
						   }
						   if(q==2)
						   {
						   	printf("\nDove Serum");
		                  		printf("\nHow many Dove Serum would you like to buy?: \n");
		                  		scanf("%d",&sed);
		                  		a[2]=2;
		                  		quantity[2]=sed;
		                  		price=cost[2]*quantity[2];
		                  		sum+=price;
						   }
		                  	
					   }
					   else
					   printf("\nThank you for shopping!");
					   printf("\nYou bought %d Sunsilk Serum",quantity[2]);
					   for(w=0;w<3;w++)
					   {
					   	if(a[w]==1)
					   	printf("\nYou got %d number of TREsemme serum.",quantity[w]);
					   	else if(a[w]==2)
					   	printf("\nYou bought %d number of Dove serum",quantity[w]);
					   	
					   }
					   printf("\nYour cost in the cart is %d\n",sum);
					   
			         sum=0;
		              break;
		              
		          }
		      }
		  }
		  break;
		  default: 
		  printf ("\n\nEnter a Valid choice\n\n");
	}
		
printf("Do you wish to return to the main menu? Press 1 for yes and any other key to Exit : ");
scanf("%d",&dlp);	
}while(dlp==1);

printf("\n\n\n\t\t\t Thank You for shopping with RAINbow! We hope to serve you again!");


}//main temp


