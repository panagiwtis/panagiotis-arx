
#include <stdio.h>
#include <string.h>



/*sta8eres*/

#define WHITE_SPACE 0
#define NON_WHITE_SPACE 1
void pred1bit(FILE *,FILE *,FILE *);
void correlative(FILE *,FILE *,FILE *);
void pred2bit(FILE *,FILE *,FILE *);
void yehpat(FILE *,FILE *,FILE *,FILE *);
void array(int);


int arrayy[32][3]={{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},
{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},
{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},
{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},
{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0},{3,0,0}};
int index[5]={0,0,0,0,0};


int main()
{
    
    FILE*input_file;
    FILE*output1;          
    FILE*output2; 
	FILE*output4;
    FILE*output3; 
    FILE*output5;
    FILE*output6;
    
    
    char  name[35];
    int epilogi=0;
    output2=fopen("correlativeoutput.txt","w");
    output1 = fopen("exodos1bit.txt","w");
    output3=fopen("apotelesmata.txt","w");
	output4=fopen("exodos2bit.txt","w");
	output5=fopen("yehpatexit.txt","w");
	output6=fopen("yehpatt.txt","w");
	printf("dose to onoma tou arxeiou: ");   // giana ani3eis to onoma arxiou p s dia o xristis, to arxio na ine sto idio directory
     scanf( "%s" ,name); 
     input_file = fopen(name,"r");  
     
     printf("\n  pliktrologa 1 gia ton 1bit, 2 gia ton correlative ,3 kai gia ta tria,4 gia 2 bit,5 gia yeh patt:");
     scanf("%d",&epilogi);
    
     
     if(epilogi==1)
     {
    pred1bit(input_file,output1,output3);
    
    fclose(input_file);
     
    fclose(output1);
     fclose(output2);
         fclose(output3);
         
     
    
   
}
    else
    if(epilogi==2)
    {
    correlative(input_file,output2,output3);
 
       
       fclose(output1);
        fclose(output2);
         fclose(output3);
       fclose(input_file);
       }
     else 
     if(epilogi==3)
     {
                   pred1bit(input_file,output1,output3);
    
    fclose(input_file);
     
    fclose(output1);
    
        input_file = fopen(name,"r");
        correlative(input_file,output2,output3);
 
       
       fclose(output2);
         
       fclose(input_file);
	   input_file=fopen(name,"r");
	   pred2bit(input_file,output4,output3);
	   
         fclose(output3);
		 fclose(output4);
       fclose(input_file);

       }
	 else
		if(epilogi==4)
		{
			pred2bit(input_file,output4,output3);
			 fclose(output1);
        fclose(output2);
         fclose(output3);
		 fclose(output4);
       fclose(input_file);
		}
		else
		if(epilogi==5)
		{
             yehpat(input_file,output5,output3,output6);
             fclose(output1);     
             fclose(output2);
             fclose(output3);    
             fclose(output4);
             fclose(output5);
             fclose(output6);
             fclose(input_file);  
             }     
  	system("PAUSE");
 } 
 
 
 
 
void correlative(FILE * input,FILE * output_c,FILE * out2)
{
int charakthras;
    int branches= 1;
    int before_char,now_char;
    
    int i=0;
	int z=0;
    int  pred1outerT=0;
    int  pred2outerNT=0;
    int  pred1innerT=0;
    int totalhits=0;
    int totalepanaliyis=0;
    int    pred2innerNT;
    int  reality1=0;
    int reality2=0;

	int j=0;
	int xx=0;
    int l=0;
    int ttt=0;
    int k=0;
    int kkk=0;
    int epan=0;
    int y=0;
    int in=0;
    
    int inner=0;
    int epanaliyi=0;
    
    int g=0;
    int t=0;
  
   
    int enable=0;
    int r=0;
    int yy=0;
    int w=0;
    int fffff=0;
    int ff=0;
    
    
    int s=0;
    int f=0;
   
    
	int innerloops=0;
	
	
	
 // to arxio ani3e
    

	int reality=0;
	int provleyi=1;
	int nowstate=0;

	int epanaliyivrogxou=0;
	int epitixes=0;
	int line=0;
	int ll=0;
	int h=0;
	int hits=0;
	int pred1T=1;
	int pred2NT=1;
	int x=0;
	int d=0;
	int deuteroinner=1;
	int u=0;

    char a[8];
	char b[8];
	char c[8];
	char m[8];
	char charaktiras;
   now_char=WHITE_SPACE;
   
    while((charaktiras = fgetc(input))!=EOF)
    {
                  line++;     
         if (charaktiras !='\n' && now_char==WHITE_SPACE)
		   {
			   a[i]=charaktiras;
	        i++;
	       
	       }
         
         if(charaktiras== '\n')
	     	{
             now_char= NON_WHITE_SPACE;
             i=0;
             y=0;
             
             }

		 if (now_char == NON_WHITE_SPACE && charaktiras!='\n')
         { 
           if(k==0)
           {
            b[i]=charaktiras;
            
		   i++;
		 
           }
           else 
           {
             c[y]=charaktiras;
             y++;
           
             }   
           
	         if(i==8)
		       {
			     for(l=0; l<8; l++)    /*sigkrisi ton dio dieuthinsewn*/
			     {
				   if (a[l]==b[l])
				   {
					  z++;
				   }
			      } 
           	  
		         if(z==8)
               
				   {    
                        
                         
                       if(g==8){
                          if (t==0&&u!=5&&r==0){      
                         epanaliyivrogxou++;}
                                
                         
                       epitixes++;
					 
                      epanaliyivrogxou++;
                      x++;
                      r++;
                      w=2;
                       
                      
                       
                      
                     
                         }        
                         
                 
                      else
                      {
                     
                      
                      provleyi=1; 
                      
                         epitixes++;
                          
                         if(t>0){
                          epanaliyivrogxou++;
                          u=5;
                          } 
                          x++;
                          f=1; 
                           w=1; 
                            g=8;
                          t=0;
                         }
                         
                       z=0;
                      }  /*klisimo tou if z==8*/
                    
                      
                    else
                    { 
                                               
                      if(z!=8 )
                        {
                           k=1; 
                         
                         branches++; 
                          
                          } 
                          
                          
                             }
                             } 
                              
              else 
              {  if(y==8)
                { 
                         
                   for(s=0; s<8; s++)
                   {
                        if(a[s]==c[s])
                        {in++;
                        }           
                        }
                    for(s=0; s<8; s++)
                    {
                        if(b[s]==c[s])
                        {
                          
                          epanaliyi++;
                          } 
                          }                    
                    if(in==8)
                    {    
                        
                            
                   
                         
       
                           if(inner==1)
						{ 
                                    epan=epan-1;
                                    
                          fprintf(output_c,"\n inner loop");
                          
                        
                     deuteroinner++;
                     
                     
                    
                     fprintf(output_c,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output_c,"%c",a[s]); 
                      }
                         fprintf(output_c,"\n");
                       fprintf(output_c,"%d",deuteroinner);
                          fprintf(output_c,"\nprovleyi                Taken");  
                            fprintf(output_c,"\nreality1            Taken ");
                       fprintf(output_c,"\n pred1outerT                 Taken");
                         fprintf(output_c,"\n pred2outerNT                Taken");
                       
                         fprintf(output_c,"\n\n epitixies %d",deuteroinner);
                          fprintf(output_c,"/ %d",deuteroinner);
                          totalhits=totalhits+1;
                          totalepanaliyis=totalepanaliyis+1;
                          
                            
                                   fprintf(output_c,"\n");  
                              pred1outerT=1;
                             pred2outerNT=1; 
                             provleyi=1;
                             reality1=1;
                     
                        
                         epitixes++;
                          fprintf(output_c,"\n"); 
						            
                                    
                                     fprintf(output_c,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output_c,"%c",b[s]); 
                      }
                      
                        
                         epanaliyivrogxou=1;
                         if(reality1==1)
                         {
                              fprintf(output_c,"\n %d",epanaliyivrogxou);   
                              fprintf(output_c,"\nprovleyi        NoTTaken");        
                            fprintf(output_c,"\nreality2            Taken ");             
                           fprintf(output_c,"\npred1innerT         Taken ");
                         fprintf(output_c,"\npre2innerT         Taken ");
                        
                         pred1innerT=1;
                         pred2innerNT=1;
                         provleyi=0;
                         reality2=1;
                         }
                         
                         reality1=1;
                                        
                         
                        
						 epanaliyivrogxou++;
						
                        
                           
                        for(s=1; s<epan; s++)
                        {
                              if(reality2==1)
                              {
                              if(pred1innerT==1&&pred2innerNT==1)
                           {
                           
                           fprintf(output_c,"\n %d",epanaliyivrogxou);
                            fprintf(output_c,"\n provleyi            Taken");
                             fprintf(output_c,"\nreality2            Taken ");
                         fprintf(output_c,"\npred1innerT         Taken ");
                         fprintf(output_c,"\npred2innerT         Taken ");
                           hits++;
                            epitixes++;
                         
                         pred1innerT=1;
                         pred2innerNT=1;
                         }
                         
						
                         epanaliyivrogxou++;
                         }  
                         } 
                          fprintf(output_c,"\n %d",epanaliyivrogxou);
                              fprintf(output_c,"\n provleyi            Taken");
                           fprintf(output_c,"\nreality2            NotTaken ");
                         fprintf(output_c,"\npred1innerT         NotTaken ");
                          fprintf(output_c,"\npred2innerT         Taken ");
                          fprintf(output_c,"\n\n epitixies: %d",hits);
                          fprintf(output_c,"/ %d",epanaliyivrogxou);
                          totalhits=totalhits+hits;
                          totalepanaliyis=totalepanaliyis+epanaliyivrogxou;
                          hits=0;
                         
                                   fprintf(output_c,"\n");   
                                   pred1innerT=0;
                                   pred2innerNT=1;
                                    }       
                         if(inner==0)
                         {
                            
                             
                             fprintf(output_c,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output_c,"%c",a[s]); 
                      }
                         fprintf(output_c,"\n");
                     epanaliyivrogxou=1;
                          
                          fprintf(output_c,"\n %d",epanaliyivrogxou);
                          fprintf(output_c,"\nprovleyi                Taken");
                            fprintf(output_c,"\nreality1            Taken ");  
                         fprintf(output_c,"\n predouter1T                 Taken");
                         fprintf(output_c,"\n pred2outerNT                Taken");
                        hits++;
                        fprintf(output_c,"\n\n epitixies: %d",hits);
                          fprintf(output_c,"/ %d",epanaliyivrogxou);
                          totalhits=totalhits+hits;
                          totalepanaliyis=totalepanaliyis+epanaliyivrogxou;
                          hits=0;
                      
                         
                                   fprintf(output_c,"\n");  
                              pred1outerT=1;
                             pred2outerNT=1; 
                             provleyi=1;
                             reality1=1;
                             epitixes++;
                            
                       fprintf(output_c,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output_c,"%c",b[s]); 
                      }
                      
                        
                         
                        fprintf(output_c,"\n %d",epanaliyivrogxou);
                        fprintf(output_c,"\nprovleyi                Taken"); 
                            fprintf(output_c,"\nreality2           Taken "); 
                        fprintf(output_c,"\n pred1innerT                 Taken");
                         fprintf(output_c,"\n pred2innerNT                Taken");
                         hits++;
                        
                          epitixes++;
						 epanaliyivrogxou++;
						
                        
                           
                        for(s=1; s<epan; s++)
                        {
                               fprintf(output_c,"\n %d",epanaliyivrogxou);
                               fprintf(output_c,"\nprovleyi                Taken"); 
                         fprintf(output_c,"\nreality2                 Taken"); 
                        fprintf(output_c,"\n pred1innerT                 Taken");
                         fprintf(output_c,"\n pred2innerNT                Taken");
                         hits++;
                         
                         epitixes++;
						
                         epanaliyivrogxou++;
                         }   
                         fprintf(output_c,"\n %d",epanaliyivrogxou);
                          fprintf(output_c,"\nprovleyi                Taken");  
                         fprintf(output_c,"\nreality2                 NotTaken"); 
                         
                          fprintf(output_c,"\n pred1innerT                 NotTaken");
                         fprintf(output_c,"\n pred2innerNT                Taken");
                       
                         fprintf(output_c,"\n\n epitixies:  %d",hits);
                          fprintf(output_c,"/ %d",epanaliyivrogxou);
                          totalhits=totalhits+hits;
                          totalepanaliyis=totalepanaliyis+epanaliyivrogxou;
                          hits=0;
                        
                         pred1innerT=1;
                         pred2innerNT=1;
                         reality2=0;
                                   fprintf(output_c,"\n");   
                                    
                             }
                    
                     epan=0;
                   
                       inner=1; 
                     
                                
                                 }
                                 
                                 
                                 
                                 
                                 
                    if(epanaliyi==8)
                    {
                    
                    
                   
                    
                 
                    ff=1;
                    epan++;
                    enable=1;
                         
                         
                    }
          
                    else
                         if (in!=8 && epanaliyi!=8)
                    {
                       
                   
                       if(w!=0 && ff!=1)
                       {
                        
                       
                       }
                       if(w==0 && ff==1 && inner==0)
                       {
                              
                         
                         epitixes++;
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              
                         epitixes++; 
                         epanaliyivrogxou++;    
                         } 
                          
                         xx=1;
                         }
                         
                        if(w==0 &&ff==1&&inner==1)
                        {     
                              
                              fprintf(output_c,"\n"); 
                               fprintf(output_c,"\n");                     
                      fprintf(output_c,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output_c,"%c",a[s]); 
                      }
                                 deuteroinner++;
                           fprintf(output_c,"\n %d", deuteroinner);
                            fprintf(output_c,"\n provleyi                Taken");
                            fprintf(output_c,"\n reality1            NotTaken "); 
                           fprintf(output_c,"\n predouter1T                 Taken");
                         fprintf(output_c,"\n pred2outerNT                NotTaken");
                         fprintf(output_c,"\n\n epitixies %d",deuteroinner-1);
                          fprintf(output_c,"/ %d",deuteroinner);
                        
                            
                           fprintf(output_c,"\n"); 
		    
						  
                         u=1;
                           inner=0; 
                            deuteroinner=0;
                           
                           } 
                           
                           
                       if(w!=0 && ff==1)
                       {
                           
                      
                         epitixes++;
						
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              
                         epitixes++;
                         
						 
                         epanaliyivrogxou++;    
                         } 
                          
                       
                         yy=1;     
                              
                       }
                       
                       
                       
                       
                       if(w==0 &&ff!=1&&yy==0)
                       { 
                               
                         if(kkk!=1)
                         {    
                        if(xx!=1)
                        {
                                 if(u==0){
                        
                          }
                          else{
                               u=0;
                               }
                       
                         }  
                         else
                         { 
                             xx=0;
                             }
                             }
                      else
                      {
                          
                       
                        kkk=0;
                        } 
                        }    
                             
                             
                             
                         if(w==0 &&ff!=1&&yy!=0)
                       {
                        
                         yy=0; 
                         }  
                        /*printf("\n diaforetikes dieuthinseis"); */ 
                        w=0;   
                          
                       for(s=0; s<8; s++)
                       {
                          a[s]=b[s];
                          b[s]=c[s];      
                    }
                     ff=0;
                     epan=0;
                   d=0;
                   branches++;
                    }
                    in=0;
                   epanaliyi=0;  
                  
                   
                    }  
                    }                            
                    }
					
   }  
   
  
    fprintf(output_c,"\n");   
      fprintf(output_c,"branches:");
      fprintf(output_c,"%d",branches);
      
      fprintf(output_c,"\n sinolikes epitixes");
      fprintf(output_c,"\n %d",epitixes);
      fprintf(output_c,"/ %d",line/9);
      fprintf(out2,"\n to correlative exi ta exis apotelesmata:");
      fprintf(out2,"\nbranhes : %d\n",branches);
      fprintf(out2,"\n sinolikes epitixies:");
      fprintf(out2,"\n %d  / %d \n",epitixes,line/9);
      fprintf(out2,"\n sinolikes epitixies sta innerloops: %d",totalhits);
      fprintf(out2,"/ %d",totalepanaliyis);
      
      fprintf(output_c,"\n sinolikes epitixies sta innerloops: %d",totalhits);
      fprintf(output_c,"/ %d",totalepanaliyis);
      

}


void pred1bit(FILE * inputt,FILE * output, FILE * out1)
{
     int charakthras;
    int branches= 1;
    int before_char,now_char;
    
    int i=0;
	int z=0;

	int j;
	int xx=0;
    int l;
    int ttt=0;
    int k=0;
    int kkk=0;
    int epan=0;
    int y=0;
    int in=0;
    
    int inner=0;
    int epanaliyi=0;
    
    int g=0;
    int t=0;
  
   
    int enable=0;
    int r=0;
    int yy=0;
    int w=0;
    int fffff=0;
    int ff=0;
    
    
    int s;
    int f=0;
   
    
	int innerloops=0;
	float posostoepitixias;
	
	char  name[35];
 // to arxio ani3e
    

	int reality;
	int provleyi;
	int nowstate;

	int epanaliyivrogxou=0;
	int epitixes=0;
	int line=0;
	int ll=0;
	int h=0;
	int hits=0;
	int x=0;
	int d=0;
	int deuteroinner=1;
	int u=0;

    char a[8];
	char b[8];
	char c[8];
	char m[8];
	char charaktiras;
   now_char=WHITE_SPACE;
    
    while((charaktiras = fgetc(inputt))!=EOF)
    {
                  line++;     
         if (charaktiras !='\n' && now_char==WHITE_SPACE)
		   {
			   a[i]=charaktiras;
	        i++;
	       
	       }
         
         if(charaktiras== '\n')
	     	{
             now_char= NON_WHITE_SPACE;
             i=0;
             y=0;
             
             }

		 if (now_char == NON_WHITE_SPACE && charaktiras!='\n')
         { 
           if(k==0)
           {
            b[i]=charaktiras;
            
		   i++;
		 
           }
           else 
           {
             c[y]=charaktiras;
             y++;
           
             }   
           
	         if(i==8)
		       {
			     for(l=0; l<8; l++)    /*sigkrisi ton dio dieuthinsewn*/
			     {
				   if (a[l]==b[l])
				   {
					  z++;
				   }
			      } 
           	  
		         if(z==8)
               
				   {    
                        
                         
                       if(g==8){
                          if (t==0&&u!=5&&r==0){      
                         epanaliyivrogxou++;}
                                
                         fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                       fprintf(output,"           Taken");
                       fprintf(output,"           Taken");
                       epitixes++;
					 
                      epanaliyivrogxou++;
                      x++;
                      r++;
                      w=2;
                       
                      
                       
                      
                     
                         }        
                         
                 
                      else
                      {
                     
                      
                      provleyi=1; 
                      fprintf(output,"\n");                    
                      fprintf(output,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",a[s]); 
                      }
                         fprintf(output,"\n");
                         epanaliyivrogxou++;
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                         fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"           Taken");
                         fprintf(output,"           Taken");
                         epanaliyivrogxou++;
                         epitixes++;
                          
                         if(t>0){
                          epanaliyivrogxou++;
                          u=5;
                          } 
                          x++;
                          f=1; 
                           w=1; 
                            g=8;
                          t=0;
                         }
                         
                       z=0;
                      }  /*klisimo tou if z==8*/
                    
                      
                    else
                    { 
                                               
                      if(z!=8 )
                        {
                           k=1; 
                         
                         branches++; 
                          
                          } 
                          
                          
                             }
                             } 
                              
              else 
              {  if(y==8)
                { 
                         
                   for(s=0; s<8; s++)
                   {
                        if(a[s]==c[s])
                        {in++;
                        }           
                        }
                    for(s=0; s<8; s++)
                    {
                        if(b[s]==c[s])
                        {
                          
                          epanaliyi++;
                          } 
                          }                    
                    if(in==8)
                    {    
                        
                            
                   
                         
       
                           if(inner==1)
						{
                                    epan=epan-1;
                                    
                          fprintf(output,"\n inner loop");
                          
                        
                     deuteroinner++;
                     
                     
                    
                     fprintf(output,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",a[s]); 
                      }
                         fprintf(output,"\n");
                       
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                         fprintf(output,"\n %d",deuteroinner);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken"); 
                         epitixes++;
                          fprintf(output,"\n"); 
						            
                                    
                                     fprintf(output,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
                      }
                      
                         fprintf(output,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                         
                        fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 NotTaken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");  
						 epanaliyivrogxou++;
						
                        
                           
                        for(s=1; s<epan; s++)
                        {
                               fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");  
                         epitixes++;
						
                         epanaliyivrogxou++;
                         }   
                          fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken");  
                                   fprintf(output,"\n");   
                                    }       
                         if(inner==0)
                         {
                                  
                           fprintf(output,"\n inner loop");
                     epanaliyivrogxou=1;
                     
                     
                    
                     fprintf(output,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",a[s]); 
                      }
                         fprintf(output,"\n");
                       
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                         fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken"); 
                         epitixes++;
                          fprintf(output,"\n"); 
						            
                         fprintf(output,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
                      }
                      
                         fprintf(output,"\n");
                         if(provleyi==0)
                         {
                                        }
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                        
						
                        
                           
                        for(s=0; s<epan; s++)
                        {
                               fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");  
                         epitixes++;
						
                         epanaliyivrogxou++;
                         }   
                          fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken");      
                          fprintf(output,"\n");      
                          epanaliyivrogxou=1; 
                         }
                    
                    
                     epan=0;
                   
                       inner=1; 
                     
                                
                                 }
                                 
                                 
                                 
                                 
                                 
                    if(epanaliyi==8)
                    {
                    
                    
                   
                    
                 
                    ff=1;
                    epan++;
                    enable=1;
                         
                         
                    }
          
                    else
                         if (in!=8 && epanaliyi!=8)
                    {
                       
                   
                       if(w!=0 && ff!=1)
                       {
                        
                        fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                       fprintf(output,"           notTaken");
                       fprintf(output,"           notTaken");
                        fprintf(output,"\n"); 
                       }
                       if(w==0 && ff==1 && inner==0)
                       {
                              
                         fprintf(output,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
                      }
                         fprintf(output,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                         fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");  
                         epitixes++;
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");  
                         epitixes++; 
                         epanaliyivrogxou++;    
                         } 
                          fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken"); 
                          fprintf(output,"\n"); 
                         xx=1;
                         }
                         
                        if(w==0 &&ff==1&&inner==1)
                        {     
                              
                              fprintf(output,"\n");                    
                      fprintf(output,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",a[s]); 
                      }
                                epanaliyivrogxou++;
                           fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"           notTaken");
                         fprintf(output,"           notTaken");   
                           fprintf(output,"\n"); 
		    
						  
                         u=1;
                           inner=0; 
                           
                           } 
                           
                           
                       if(w!=0 && ff==1)
                       {
                           fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                       fprintf(output,"           notTaken");
                       fprintf(output,"           notTaken");
                        fprintf(output,"\n"); 
                        fprintf(output,"\n to branchh me dieuthinsi :");
						
                       
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
                      }
                         fprintf(output,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                         fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");  
                         epitixes++;
						
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");
                         epitixes++;
                         
						 
                         epanaliyivrogxou++;    
                         } 
                          fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken");   
						  fprintf(output,"\n"); 
                       
                         yy=1;     
                              
                       }
                       
                       
                       
                       
                       if(w==0 &&ff!=1&&yy==0)
                       { 
                               
                         if(kkk!=1)
                         {    
                        if(xx!=1)
                        {
                                 if(u==0){
                        fprintf(output,"\n");                    
                      fprintf(output,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",a[s]); 
                      }
                         fprintf(output,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                         fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"           notTaken");
                         fprintf(output,"           notTaken");   
                          fprintf(output,"\n"); 
                          }
                          else{
                               u=0;
                               }
                       
                         }  
                         else
                         { 
                             xx=0;
                             }
                             }
                      else
                      {
                          fprintf(output,"\n");                    
                      fprintf(output,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
                      }
                         fprintf(output,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output,"epanaliyivrogxou ");
                         fprintf(output,"   provleyi");
                         fprintf(output,"     drasi");
                         fprintf(output,"     nea katastasi");
                         fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"           notTaken");
                         fprintf(output,"           notTaken");    
						  fprintf(output,"\n"); 
                       
                        kkk=0;
                        } 
                        }    
                             
                             
                             
                         if(w==0 &&ff!=1&&yy!=0)
                       {
                        
                         yy=0; 
                         }  
                        /*printf("\n diaforetikes dieuthinseis"); */ 
                        w=0;   
                          
                       for(s=0; s<8; s++)
                       {
                          a[s]=b[s];
                          b[s]=c[s];      
                    }
                     ff=0;
                     epan=0;
                   d=0;
                   branches++;
                    }
                    in=0;
                   epanaliyi=0;  
                  
                   
                    }  
                    }                            
                    }
					
   }  
   
  
    fprintf(output,"\n");   
      fprintf(output,"branches:");
      fprintf(output,"%d",branches);
      
      fprintf(output,"\n sinolikes epitixes");
      fprintf(output,"\n %d",epitixes);
      fprintf(output,"/ %d",line/9);
      
      fprintf(out1,"\n to 1bit exei ta exis apotelesmata:");
      fprintf(out1,"\nbranhes : %d\n",branches);
      fprintf(out1,"\n sinolikes epitixies:");
      fprintf(out1,"\n %d  / %d \n",epitixes,line/9);
      }


	  void pred2bit(FILE * inputtt,FILE *outputt, FILE * out3)
	  {
		  int branches= 1;
    int before_char,now_char;
    
    int i=0;
	int z=0;

	int j;
	int xx=0;
    int l;
    int ttt=0;
    int k=0;
    int kkk=0;
    int epan=0;
    int y=0;
    int in=0;
    
    int inner=0;
    int epanaliyi=0;
    
    int g=0;
    int t=0;
  
   
    int enable=0;
    int r=0;
    int yy=0;
    int w=0;
    int fffff=0;
    int ff=0;
    
    
    int s;
    int f=0;
   
    
	int innerloops=0;
	float posostoepitixias;
	
	char  name[35];
 // to arxio ani3e
    

	int reality;
	int provleyi;
	int nowstate;

	int epanaliyivrogxou=0;
	int epitixes=0;
	int line=0;
	int ll=0;
	int h=0;
	int hits=0;
	int x=0;
	int d=0;
	int deuteroinner=1;
	int u=0;

    char a[8];
	char b[8];
	char c[8];
	char m[8];
	char charaktiras;
   now_char=WHITE_SPACE;
    
 
    while((charaktiras = fgetc(inputtt))!=EOF)
    {
                  line++;     
         if (charaktiras !='\n' && now_char==WHITE_SPACE)
		   {
			   a[i]=charaktiras;
	        i++;
	       
	       }
         
         if(charaktiras== '\n')
	     	{
             now_char= NON_WHITE_SPACE;
             i=0;
             y=0;
             
             }

		 if (now_char == NON_WHITE_SPACE && charaktiras!='\n')
         { 
           if(k==0)
           {
            b[i]=charaktiras;
            
		   i++;
		 
           }
           else 
           {
             c[y]=charaktiras;
             y++;
           
             }   
           
	         if(i==8)
		       {
			     for(l=0; l<8; l++)    /*sigkrisi ton dio dieuthinsewn*/
			     {
				   if (a[l]==b[l])
				   {
					  z++;
				   }
			      } 
           	  
		         if(z==8)
               
				   {    
                        
                         
                       if(g==8){
                          if (t==0&&u!=5&&r==0){      
                         epanaliyivrogxou++;}
                                
                         fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                       fprintf(outputt,"           Taken");
                       fprintf(outputt,"           Taken");
                       epitixes++;
					 
                      epanaliyivrogxou++;
                      x++;
                      r++;
                      w=2;
                       
                      
                       
                      
                     
                         }        
                         
                 
                      else
                      {
                     
                      
                      provleyi=1; 
                      fprintf(outputt,"\n");                    
                      fprintf(outputt,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",a[s]); 
                      }
                         fprintf(outputt,"\n");
                         epanaliyivrogxou++;
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                         fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"           Taken");
                         fprintf(outputt,"           Taken");
                         epanaliyivrogxou++;
                         epitixes++;
                          
                         if(t>0){
                          epanaliyivrogxou++;
                          u=5;
                          } 
                          x++;
                          f=1; 
                           w=1; 
                            g=8;
                          t=0;
                         }
                         
                       z=0;
                      }  /*klisimo tou if z==8*/
                    
                      
                    else
                    { 
                                               
                      if(z!=8 )
                        {
                           k=1; 
                         
                         branches++; 
                          
                          } 
                          
                          
                             }
                             } 
                              
              else 
              {  if(y==8)
                { 
                         
                   for(s=0; s<8; s++)
                   {
                        if(a[s]==c[s])
                        {in++;
                        }           
                        }
                    for(s=0; s<8; s++)
                    {
                        if(b[s]==c[s])
                        {
                          
                          epanaliyi++;
                          } 
                          }                    
                    if(in==8)
                    {    
                        
                            
                   
                         
       
                           if(inner==1)
						{
                                    epan=epan-1;
                                    
                          fprintf(outputt,"\n inner loop");
                          
                        
                     deuteroinner++;
                     
                     
                    
                     fprintf(outputt,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",a[s]); 
                      }
                         fprintf(outputt,"\n");
                       
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                         fprintf(outputt,"\n %d",deuteroinner);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken"); 
                         epitixes++;
                          fprintf(outputt,"\n"); 
						            
                                    
                                     fprintf(outputt,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",b[s]); 
                      }
                      
                         fprintf(outputt,"\n");
                         epanaliyivrogxou=1;
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                         
                        fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 weak Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken");  
						 epanaliyivrogxou++;
						epitixes++;
                        
                           
                        for(s=1; s<epan; s++)
                        {
                               fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken");  
                         epitixes++;
						
                         epanaliyivrogxou++;
                         }   
                          fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"                NOtTaken");
                         fprintf(outputt,"              weak Taken");  
                                   fprintf(outputt,"\n");   
                                    }       
                         if(inner==0)
                         {
                                  
                           fprintf(outputt,"\n inner loop");
                     epanaliyivrogxou=1;
                     
                     
                    
                     fprintf(outputt,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",a[s]); 
                      }
                         fprintf(outputt,"\n");
                       
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                         fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken"); 
                         epitixes++;
                          fprintf(outputt,"\n"); 
						            
                         fprintf(outputt,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",b[s]); 
                      }
                      
                         fprintf(outputt,"\n");
                         if(provleyi==0)
                         {
                                        }
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                        
						
                        
                           
                        for(s=0; s<epan; s++)
                        {
                               fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken");  
                         epitixes++;
						
                         epanaliyivrogxou++;
                         }   
                          fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              NOt Taken");
                         fprintf(outputt,"              weak Taken");      
                          fprintf(outputt,"\n");      
                          epanaliyivrogxou=1; 
                         }
                    
                    
                     epan=0;
                   
                       inner=1; 
                     
                                
                                 }
                                 
                                 
                                 
                                 
                                 
                    if(epanaliyi==8)
                    {
                    
                    
                   
                    
                 
                    ff=1;
                    epan++;
                    enable=1;
                         
                         
                    }
          
                    else
                         if (in!=8 && epanaliyi!=8)
                    {
                       
                   
                       if(w!=0 && ff!=1)
                       {
                        
                        fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                       fprintf(outputt,"           NOT Taken");
                       fprintf(outputt,"           weak Taken");
                        fprintf(outputt,"\n"); 
                       }
                       if(w==0 && ff==1 && inner==0)
                       {
                              
                         fprintf(outputt,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",b[s]); 
                      }
                         fprintf(outputt,"\n");
                         epanaliyivrogxou=1;
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                         fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken");  
                         epitixes++;
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken");  
                         epitixes++; 
                         epanaliyivrogxou++;    
                         } 
                          fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              NOT Taken");
                         fprintf(outputt,"              weak Taken"); 
                          fprintf(outputt,"\n"); 
                         xx=1;
                         }
                         
                        if(w==0 &&ff==1&&inner==1)
                        {     
                              
                              fprintf(outputt,"\n");                    
                      fprintf(outputt,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",a[s]); 
                      }
                                deuteroinner++;
                           fprintf(outputt,"\n %d",deuteroinner);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"           NOT Taken");
                         fprintf(outputt,"           weak Taken");   
                           fprintf(outputt,"\n"); 
		    
						  
                         u=1;
                           inner=0; 
                           
                           } 
                           
                           
                       if(w!=0 && ff==1)
                       {
                           fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                       fprintf(outputt,"           NOT Taken");
                       fprintf(outputt,"           weak Taken");
                        fprintf(outputt,"\n"); 
                        fprintf(outputt,"\n to branchh me dieuthinsi :");
						
                       
                      for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",b[s]); 
                      }
                         fprintf(outputt,"\n");
                         epanaliyivrogxou=1;
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                         fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken");  
                         epitixes++;
						
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              Taken");
                         fprintf(outputt,"              Taken");
                         epitixes++;
                         
						 
                         epanaliyivrogxou++;    
                         } 
                          fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              NOT Taken");
                         fprintf(outputt,"              weak Taken");   
						  fprintf(outputt,"\n"); 
                       
                         yy=1;     
                              
                       }
                       
                       
                       
                       
                       if(w==0 &&ff!=1&&yy==0)
                       { 
                               
                         if(kkk!=1)
                         {    
                        if(xx!=1)
                        {
                                 if(u==0){
                        fprintf(outputt,"\n");                    
                      fprintf(outputt,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",a[s]); 
                      }
                         fprintf(outputt,"\n");
                         epanaliyivrogxou=1;
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                         fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"           NOT Taken");
                         fprintf(outputt,"           weak Taken");   
                          fprintf(outputt,"\n"); 
                          }
                          else{
                               u=0;
                               }
                       
                         }  
                         else
                         { 
                             xx=0;
                             }
                             }
                      else
                      {
                          fprintf(outputt,"\n");                    
                      fprintf(outputt,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(outputt,"%c",b[s]); 
                      }
                         fprintf(outputt,"\n");
                         epanaliyivrogxou=1;
                         fprintf(outputt,"epanaliyivrogxou ");
                         fprintf(outputt,"   provleyi");
                         fprintf(outputt,"     drasi");
                         fprintf(outputt,"     nea katastasi");
                         fprintf(outputt,"\n %d",epanaliyivrogxou);
                         fprintf(outputt,"                 Taken");
                         fprintf(outputt,"              NOT Taken");
                         fprintf(outputt,"              weak Taken");    
						  fprintf(outputt,"\n"); 
                       
                        kkk=0;
                        } 
                        }    
                             
                             
                             
                         if(w==0 &&ff!=1&&yy!=0)
                       {
                        
                         yy=0; 
                         }  
                        /*printf("\n diaforetikes dieuthinseis"); */ 
                        w=0;   
                          
                       for(s=0; s<8; s++)
                       {
                          a[s]=b[s];
                          b[s]=c[s];      
                    }
                     ff=0;
                     epan=0;
                   d=0;
                   branches++;
                    }
                    in=0;
                   epanaliyi=0;  
                  
                   
                    }  
                    }                            
                    }
					
   }  
   
  
    fprintf(outputt,"\n");   
      fprintf(outputt,"branches:");
      fprintf(outputt,"%d",branches);
      
      fprintf(outputt,"\n sinolikes epitixes");
      fprintf(outputt,"\n %d",epitixes);
      fprintf(outputt,"/ %d",line/9);
      
	  fprintf(out3,"\n\nto pred 2bit exi apotelesmata:");
      fprintf(out3,"\n branches : %d",branches);
      fprintf(out3,"\n sinolikes epitixies:");
      fprintf(out3,"\n %d  / %d \n",epitixes,line/9);
	  }
	  
	  
	  
	  
	  
	  
	  
	  
	  

void yehpat(FILE * inputt1,FILE * output4, FILE * out4,FILE * output5)
{
     int charakthras;
    int branches= 1;
    int before_char,now_char;
    
    int i=0;
	int z=0;

	int j;
	int xx=0;
    int l;
    int rrrr=0;
    int ttt=0;
    int k=0;
    int kkk=0;
    int epan=0;
    int y=0;
    int in=0;
    
    int inner=0;
    int epanaliyi=0;
    
    int g=0;
    int t=0;
  
   
    int enable=0;
    int provleyyi=0;
    int r=0;
    int yy=0;
    int w=0;
    int fffff=0;
    int ff=0;
    
    
    int s;
    int f=0;
   
    
	int innerloops=0;
	float posostoepitixias;
	
	char  name[35];
 // to arxio ani3e
    

	int reality;
	int provleyi;
	int nowstate;

	int epanaliyivrogxou=0;
	int epitixes=0;
	int line=0;
	int ll=0;
	int h=0;
	int misses=0;
	int hits=0;
	int x=0;
	int d=0;
	int deuteroinner=1;
	int u=0;

    char a[8];
	char b[8];
	char c[8];



	char m[8];
	char charaktiras;
   now_char=WHITE_SPACE;
    
    while((charaktiras = fgetc(inputt1))!=EOF)
    {
                  line++;     
         if (charaktiras !='\n' && now_char==WHITE_SPACE)
		   {
			   a[i]=charaktiras;
	        i++;
	       
	       }
         
         if(charaktiras== '\n')
	     	{
             now_char= NON_WHITE_SPACE;
             i=0;
             y=0;
             
             }

		 if (now_char == NON_WHITE_SPACE && charaktiras!='\n')
         { 
           if(k==0)
           {
            b[i]=charaktiras;
            
		   i++;
		 
           }
           else 
           {
             c[y]=charaktiras;
             y++;
           
             }   
           
	         if(i==8)
		       {
			     for(l=0; l<8; l++)    /*sigkrisi ton dio dieuthinsewn*/
			     {
				   if (a[l]==b[l])
				   {
					  z++;
				   }
			      } 
           	  
		         if(z==8)
               
				   {    
                        
                         
                       if(g==8){
                          if (t==0&&u!=5&&r==0){      
                         epanaliyivrogxou++;}
                                
                         fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                       fprintf(output4,"           Taken");
                       fprintf(output4,"           Taken");
                       provleyyi=1;
                       array(provleyyi);
                     
                       epitixes++;
					 
                      epanaliyivrogxou++;
                      x++;
                      r++;
                      w=2;
                       
                      
                       
                      
                     
                         }        
                         
                 
                      else
                      {
                     
                      
                      provleyi=1; 
                      fprintf(output4,"\n");                    
                      fprintf(output4,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",a[s]); 
                      }
                         fprintf(output4,"\n");
                         epanaliyivrogxou++;
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                         fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"           Taken");
                         fprintf(output4,"           Taken");
                         provleyyi=1;
                          array(provleyyi);
                    
                         epanaliyivrogxou++;
                         epitixes++;
                          
                         if(t>0){
                          epanaliyivrogxou++;
                          u=5;
                          } 
                          x++;
                          f=1; 
                           w=1; 
                            g=8;
                          t=0;
                         }
                         
                       z=0;
                      }  /*klisimo tou if z==8*/
                    
                      
                    else
                    { 
                                               
                      if(z!=8 )
                        {
                           k=1; 
                         
                         branches++; 
                          
                          } 
                          
                          
                             }
                             } 
                              
              else 
              {  if(y==8)
                { 
                         
                   for(s=0; s<8; s++)
                   {
                        if(a[s]==c[s])
                        {in++;
                        }           
                        }
                    for(s=0; s<8; s++)
                    {
                        if(b[s]==c[s])
                        {
                          
                          epanaliyi++;
                          } 
                          }                    
                    if(in==8)
                    {    
                        
                            
                   
                         
       
                           if(inner==1)
						{
                                    epan=epan-1;
                                    
                          fprintf(output4,"\n inner loop");
                          
                        
                     deuteroinner++;
                     
                     
                    
                     fprintf(output4,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",a[s]); 
                      }
                         fprintf(output4,"\n");
                       
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                         fprintf(output4,"\n %d",deuteroinner);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken"); 
                          provleyyi=1;
                         array(provleyyi);
                      
                         epitixes++;
                          fprintf(output4,"\n"); 
						            
                                    
                                     fprintf(output4,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",b[s]); 
                      }
                      
                         fprintf(output4,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                         
                        fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 NotTaken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken");  
                          provleyyi=1;
                         array(provleyyi);
                    
						 epanaliyivrogxou++;
						
                        
                           
                        for(s=1; s<epan; s++)
                        {
                               fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken");  
                          provleyyi=1;
                          array(provleyyi);
                      
                         epitixes++;
						
                         epanaliyivrogxou++;
                         }   
                          fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              NotTaken");
                         fprintf(output4,"              NotTaken");  
                           misses++;
                          provleyyi=0;
                         array(provleyyi);
                     
                                   fprintf(output4,"\n");   
                                    }       
                         if(inner==0)
                         {
                                  
                           fprintf(output4,"\n inner loop");
                     epanaliyivrogxou=1;
                     
                     
                    
                     fprintf(output4,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",a[s]); 
                      }
                         fprintf(output4,"\n");
                       
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                         fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken"); 
                          provleyyi=1;
                          array(provleyyi);
                     
                         epitixes++;
                          fprintf(output4,"\n"); 
						            
                         fprintf(output4,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",b[s]); 
                      }
                      
                         fprintf(output4,"\n");
                         if(provleyi==0)
                         {
                                        }
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                        
						
                        
                           
                        for(s=0; s<epan; s++)
                        {
                               fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken");  
                          provleyyi=1;
                          array(provleyyi);
                  
                         epitixes++;
						
                         epanaliyivrogxou++;
                         }   
                          fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              NotTaken");
                         fprintf(output4,"              NotTaken");   
                           misses++;  
                          provleyyi=0;
                         array(provleyyi);
                           fprintf(output4,"\n");      
                          epanaliyivrogxou=1; 
                         }
                    
                    
                     epan=0;
                   
                       inner=1; 
                     
                                
                                 }
                                 
                                 
                                 
                                 
                                 
                    if(epanaliyi==8)
                    {
                    
                    
                   
                    
                 
                    ff=1;
                    epan++;
                    enable=1;
                         
                         
                    }
          
                    else
                         if (in!=8 && epanaliyi!=8)
                    {
                       
                   
                       if(w!=0 && ff!=1)
                       {
                        
                        fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                       fprintf(output4,"           notTaken");
                       fprintf(output4,"           notTaken");
                         misses++;
                        provleyyi=0;
                          array(provleyyi);
                     
                        fprintf(output4,"\n"); 
                       }
                       if(w==0 && ff==1 && inner==0)
                       {
                              
                         fprintf(output4,"\n to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",b[s]); 
                      }
                         fprintf(output4,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                         fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken");  
                          provleyyi=1;
                         array(provleyyi);
                    
                         epitixes++;
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken");  
                          provleyyi=1;
                          array(provleyyi);
                      
                         epitixes++; 
                         epanaliyivrogxou++;    
                         } 
                          fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              NotTaken");
                         fprintf(output4,"              NotTaken");
                           misses++; 
                          provleyyi=0;
                         array(provleyyi);
                    
                          fprintf(output4,"\n"); 
                         xx=1;
                         }
                         
                        if(w==0 &&ff==1&&inner==1)
                        {     
                              
                              fprintf(output4,"\n");                    
                      fprintf(output4,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",a[s]); 
                      }
                                epanaliyivrogxou++;
                           fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"           notTaken");
                         fprintf(output4,"           notTaken");   
                           misses++;
                          provleyyi=0;
                          array(provleyyi);
                      
                           fprintf(output4,"\n"); 
		    
						  
                         u=1;
                           inner=0; 
                           
                           } 
                           
                           
                       if(w!=0 && ff==1)
                       {
                           fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                       fprintf(output4,"           notTaken");
                       fprintf(output4,"           notTaken");
                         misses++;
                        provleyyi=0;
                          array(provleyyi);
                      
                        fprintf(output4,"\n"); 
                        fprintf(output4,"\n to branchh me dieuthinsi :");
						
                       
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",b[s]); 
                      }
                         fprintf(output4,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                         fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken");  
                          provleyyi=1;
                         array(provleyyi);
                   
                         epitixes++;
						
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              Taken");
                         fprintf(output4,"              Taken");
                          provleyyi=1;
                         array(provleyyi);
                   
                         epitixes++;
                         
						 
                         epanaliyivrogxou++;    
                         } 
                          fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"              NotTaken");
                         fprintf(output4,"              NotTaken");   
                           misses++;
                          provleyyi=0;
                         array(provleyyi);
                 
						  fprintf(output4,"\n"); 
                       
                         yy=1;     
                              
                       }
                       
                       
                       
                       
                       if(w==0 &&ff!=1&&yy==0)
                       { 
                               
                         if(kkk!=1)
                         {    
                        if(xx!=1)
                        {
                                 if(u==0){
                        fprintf(output4,"\n");                    
                      fprintf(output4,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",a[s]); 
                      }
                         fprintf(output4,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                         fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"           notTaken");
                         fprintf(output4,"           notTaken");   
                           misses++;
                          provleyyi=0;
                          array(provleyyi);
                    
                          fprintf(output4,"\n"); 
                          }
                          else{
                               u=0;
                               }
                       
                         }  
                         else
                         { 
                             xx=0;
                             }
                             }
                      else
                      {
                          fprintf(output4,"\n");                    
                      fprintf(output4,"to branchh me dieuthinsi :");
                      for(s=0;  s<8; s++)
                      {
                         fprintf(output4,"%c",b[s]); 
                      }
                         fprintf(output4,"\n");
                         epanaliyivrogxou=1;
                         fprintf(output4,"epanaliyivrogxou ");
                         fprintf(output4,"   provleyi");
                         fprintf(output4,"     drasi");
                         fprintf(output4,"     nea katastasi");
                         fprintf(output4,"\n %d",epanaliyivrogxou);
                         fprintf(output4,"                 Taken");
                         fprintf(output4,"           notTaken");
                         fprintf(output4,"           notTaken");  
                         misses++;
                          provleyyi=0;
                          array(provleyyi);
                      
						  fprintf(output4,"\n"); 
                       
                        kkk=0;
                        } 
                        }    
                             
                             
                             
                         if(w==0 &&ff!=1&&yy!=0)
                       {
                        
                         yy=0; 
                         }  
                        /*printf("\n diaforetikes dieuthinseis"); */ 
                        w=0;   
                          
                       for(s=0; s<8; s++)
                       {
                          a[s]=b[s];
                          b[s]=c[s];      
                    }
                     ff=0;
                     epan=0;
                   d=0;
                   branches++;
                    }
                    in=0;
                   epanaliyi=0;  
                  
                   
                    }  
                    }                            
                    }
					
   }  
   
  
    fprintf(output4,"\n");   
      fprintf(output4,"branches:");
      fprintf(output4,"%d",branches);
      
      fprintf(output4,"\n sinolikes epitixes");
      fprintf(output4,"\n %d",epitixes);
      fprintf(output4,"/ %d",line/9);
      
     
      fprintf(output5,"  |CS|HIT|MISS\n",s);
      for(s=0; s<32; s++)
      {
               fprintf(output5,"%d",s);
              
               for(rrrr=0; rrrr<3; rrrr++)
               {
                    fprintf(output5," |%d",arrayy[s][rrrr]);
                    
                    }
              fprintf(output5,"\n");             
      }
      

 fprintf(output5,"\n  yeh patt exei ta exis apotelesmata:");
      fprintf(output5,"\nbranhes : %d\n",branches);
      fprintf(output5,"\n sinolikes epitixies:");
      fprintf(output5,"\n %d  / %d \n",epitixes,line/9);
      
      fprintf(output5,"\n sinolikes apotixies:");
      fprintf(output5,"\n %d  / %d \n",misses,line/9);
}

void array(int prov)
{
     
     
          int s=0; 
          if(index[0]==0&&index[1]==0 &&index[2]==0 &&index[3]==0 &&index[4]==0)
          {
                  if(prov==1)
                  {             
                  arrayy[0][1]=arrayy[0][1]+1;
                  if(arrayy[0][0]==0||arrayy[0][0]==1||arrayy[0][0]==2)
                      {
                         arrayy[0][0]=arrayy[0][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[0][2]=arrayy[0][2]+1;  
                       if(arrayy[0][0]==3||arrayy[0][0]==1||arrayy[0][0]==2)
                      {
                         arrayy[0][0]=arrayy[0][0]-1;
                         }      
                  
                  }
                  }
          else
          if(index[0]==0&&index[1]==0 &&index[2]==0 &&index[3]==0 &&index[4]==1)
          {
                if(prov==1)
                  {             
                  arrayy[1][1]=arrayy[1][1]+1;
                  if(arrayy[1][0]==0||arrayy[1][0]==1||arrayy[1][0]==2)
                      {
                         arrayy[1][0]=arrayy[1][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[1][2]=arrayy[1][2]+1;  
                      if(arrayy[1][0]==3||arrayy[1][0]==1||arrayy[1][0]==2)
                      {
                         arrayy[1][0]=arrayy[1][0]-1;
                         }      
                  
                  }
                  }
                  
          else
          if(index[0]==0&&index[1]==0 &&index[2]==0 &&index[3]==1 &&index[4]==0)
          {
                                    
                if(prov==1)
                  {             
                  arrayy[2][1]=arrayy[2][1]+1;
                  if(arrayy[2][0]==0||arrayy[2][0]==1||arrayy[2][0]==2)
                      {
                         arrayy[2][0]=arrayy[2][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[2][2]=arrayy[2][2]+1;   
                      if(arrayy[2][0]==0||arrayy[2][0]==1||arrayy[2][0]==2)
                      {
                         arrayy[2][0]=arrayy[2][0]-1;
                         }     
                  
                  }
                  }
                  
          else
          if(index[0]==0&&index[1]==0 &&index[2]==0 &&index[3]==1 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[3][1]=arrayy[3][1]+1;
                  if(arrayy[3][0]==0||arrayy[3][0]==1||arrayy[3][0]==2)
                      {
                         arrayy[3][0]=arrayy[3][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[3][2]=arrayy[3][2]+1;
                      if(arrayy[3][0]==3||arrayy[3][0]==1||arrayy[3][0]==2)
                      {
                         arrayy[3][0]=arrayy[3][0]-1;
                         }        
                  
                  }
                  }
           else
          if(index[0]==0&&index[1]==0 &&index[2]==1 &&index[3]==0 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[4][1]=arrayy[4][1]+1;
                  if(arrayy[4][0]==0||arrayy[4][0]==1||arrayy[4][0]==2)
                      {
                         arrayy[4][0]=arrayy[4][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[4][2]=arrayy[4][2]+1;  
                      if(arrayy[4][0]==3||arrayy[4][0]==1||arrayy[4][0]==2)
                      {
                         arrayy[4][0]=arrayy[4][0]-1;
                         }      
                  
                  }
                  }
                  
          else
          if(index[0]==0&&index[1]==0 &&index[2]==1 &&index[3]==0 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[5][1]=arrayy[5][1]+1;
                  if(arrayy[5][0]==0||arrayy[5][0]==1||arrayy[5][0]==2)
                      {
                         arrayy[5][0]=arrayy[5][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[5][2]=arrayy[5][2]+1;
                      if(arrayy[5][0]==3||arrayy[5][0]==1||arrayy[5][0]==2)
                      {
                         arrayy[5][0]=arrayy[5][0]-1;
                         }        
                  
                  }
                  }
                  
          else
          if(index[0]==0&&index[1]==0 &&index[2]==1 &&index[3]==1 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[6][1]=arrayy[6][1]+1;
                  if(arrayy[6][0]==0||arrayy[6][0]==1||arrayy[6][0]==2)
                      {
                         arrayy[6][0]=arrayy[6][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[6][2]=arrayy[6][2]+1;     
                  if(arrayy[6][0]==3||arrayy[6][0]==1||arrayy[6][0]==2)
                      {
                         arrayy[6][0]=arrayy[6][0]-1;
                         }   
                  }
                  }
                  
                  
                  
           else
          if(index[0]==0&&index[1]==0 &&index[2]==1 &&index[3]==1 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[7][1]=arrayy[7][1]+1;
                  if(arrayy[7][0]==0||arrayy[7][0]==1||arrayy[7][0]==2)
                      {
                         arrayy[7][0]=arrayy[7][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[7][2]=arrayy[7][2]+1;
                      if(arrayy[7][0]==3||arrayy[7][0]==1||arrayy[7][0]==2)
                      {
                         arrayy[7][0]=arrayy[7][0]-1; 
                         }        
                  
                  }
                  }     
                    
                  
          else
          if(index[0]==0&&index[1]==1 &&index[2]==0 &&index[3]==0 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[8][1]=arrayy[8][1]+1;
                  if(arrayy[8][0]==0||arrayy[8][0]==1||arrayy[8][0]==2)
                      {
                         arrayy[8][0]=arrayy[8][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[8][2]=arrayy[8][2]+1; 
                      if(arrayy[8][0]==3||arrayy[8][0]==1||arrayy[8][0]==2)
                      {
                         arrayy[8][0]=arrayy[8][0]-1;
                         }       
                  
                  }
                  }
               
          else
          if(index[0]==0&&index[1]==1 &&index[2]==0 &&index[3]==0 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[9][1]=arrayy[9][1]+1;
                  if(arrayy[9][0]==0||arrayy[9][0]==1||arrayy[9][0]==2)
                      {
                         arrayy[9][0]=arrayy[9][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[9][2]=arrayy[9][2]+1;
                      if(arrayy[9][0]==3||arrayy[9][0]==1||arrayy[9][0]==2)
                      {
                         arrayy[9][0]=arrayy[9][0]-1;
                         }        
                  
                  }
                  }        
                  
           
         
         else
          if(index[0]==0&&index[1]==1 &&index[2]==0 &&index[3]==1 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[10][1]=arrayy[10][1]+1;
                  if(arrayy[10][0]==0||arrayy[10][0]==1||arrayy[10][0]==2)
                      {
                         arrayy[10][0]=arrayy[10][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[10][2]=arrayy[10][2]+1;    
                      if(arrayy[10][0]==3||arrayy[10][0]==1||arrayy[10][0]==2)
                      {
                         arrayy[10][0]=arrayy[10][0]-1;
                         }    
                  
                  }
                  }       
                  
                  
                  
         else
          if(index[0]==0&&index[1]==1 &&index[2]==0 &&index[3]==1 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[11][1]=arrayy[11][1]+1;
                  if(arrayy[11][0]==0||arrayy[11][0]==1||arrayy[11][0]==2)
                      {
                         arrayy[11][0]=arrayy[11][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[11][2]=arrayy[11][2]+1;   
                      if(arrayy[11][0]==3||arrayy[11][0]==1||arrayy[11][0]==2)
                      {
                         arrayy[11][0]=arrayy[11][0]-1;
                         }     
                  
                  }
                  }
                  
                  
                  
                  
        else
          if(index[0]==0&&index[1]==1 &&index[2]==1 &&index[3]==0 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[12][1]=arrayy[12][1]+1;
                  if(arrayy[12][0]==0||arrayy[12][0]==1||arrayy[12][0]==2)
                      {
                         arrayy[12][0]=arrayy[12][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[12][2]=arrayy[12][2]+1;
                      if(arrayy[12][0]==3||arrayy[12][0]==1||arrayy[12][0]==2)
                      {
                         arrayy[12][0]=arrayy[12][0]-1;
                         }        
                  
                  }
                  }  
                  
                  
                  
                  
                  
                  
        else
          if(index[0]==0&&index[1]==1 &&index[2]==1 &&index[3]==0 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[13][1]=arrayy[13][1]+1;
                  if(arrayy[13][0]==0||arrayy[13][0]==1||arrayy[13][0]==2)
                      {
                         arrayy[13][0]=arrayy[13][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[13][2]=arrayy[13][2]+1;  
                      if(arrayy[13][0]==3||arrayy[13][0]==1||arrayy[13][0]==2)
                      {
                         arrayy[13][0]=arrayy[13][0]-1;
                         }      
                  
                  }
                  }
         
         
         else
          if(index[0]==0&&index[1]==1 &&index[2]==1 &&index[3]==1 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[14][1]=arrayy[14][1]+1;
                   if(arrayy[14][0]==0||arrayy[14][0]==1||arrayy[14][0]==2)
                      {
                         arrayy[14][0]=arrayy[14][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[14][2]=arrayy[14][2]+1; 
                      if(arrayy[14][0]==3||arrayy[14][0]==2||arrayy[14][0]==1)
                      {
                         arrayy[14][0]=arrayy[14][0]-1;
                         }       
                  
                  }
                  }     
                  
                  
                  
                  
                  
        else
          if(index[0]==0&&index[1]==1 &&index[2]==1 &&index[3]==1 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[15][1]=arrayy[15][1]+1;
                   if(arrayy[15][0]==0||arrayy[15][0]==1||arrayy[15][0]==2)
                      {
                         arrayy[15][0]=arrayy[15][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[15][2]=arrayy[15][2]+1;
                       if(arrayy[15][0]==3||arrayy[15][0]==1||arrayy[15][0]==2)
                      {
                         arrayy[15][0]=arrayy[15][0]-1;
                         }        
                  
                  }
                  }    
                  
                  
                  
        
        else
          if(index[0]==1 &&index[1]==0 &&index[2]==0 &&index[3]==0 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[16][1]=arrayy[16][1]+1;
                   if(arrayy[16][0]==0||arrayy[16][0]==1||arrayy[16][0]==2)
                      {
                         arrayy[16][0]=arrayy[16][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[16][2]=arrayy[16][2]+1; 
                       if(arrayy[16][0]==3||arrayy[16][0]==2||arrayy[16][0]==1)
                      {
                         arrayy[16][0]=arrayy[16][0]-1;
                         }       
                  
                  }
                  }
                  
                  
                  
        
        else
          if(index[0]==1&&index[1]==0 &&index[2]==0 &&index[3]==0 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[17][1]=arrayy[17][1]+1;
                  if(arrayy[17][0]==0||arrayy[17][0]==1||arrayy[17][0]==2)
                      {
                         arrayy[17][0]=arrayy[17][0]+1;
                         }      
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[17][2]=arrayy[17][2]+1;     
                      if(arrayy[17][0]==3||arrayy[17][0]==2||arrayy[17][0]==1)
                      {
                         arrayy[17][0]=arrayy[17][0]-1;
                         }                                                     
                  }
                  }
                  
                  
        
        else
          if(index[0]==1&&index[1]==0 &&index[2]==0 &&index[3]==1 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[18][1]=arrayy[18][1]+1;
                  if(arrayy[18][0]==0||arrayy[18][0]==1||arrayy[18][0]==2)
                      {
                         arrayy[18][0]=arrayy[18][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[18][2]=arrayy[18][2]+1; 
                      if(arrayy[18][0]==3||arrayy[18][0]==1||arrayy[18][0]==2)
                      {
                         arrayy[18][0]=arrayy[18][0]-1;
                         }       
                  
                  }
                  }
                  
                  
                  
                  
                  
     else
          if(index[0]==1&&index[1]==0 &&index[2]==0 &&index[3]==1 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[19][1]=arrayy[19][1]+1;
                  if(arrayy[19][0]==3||arrayy[19][0]==1||arrayy[19][0]==2)
                      {
                         arrayy[19][0]=arrayy[19][0]-1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[19][2]=arrayy[19][2]+1; 
                      if(arrayy[19][0]==3||arrayy[19][0]==1||arrayy[19][0]==2)
                      {
                         arrayy[19][0]=arrayy[19][0]-1;
                         }       
                  
                  }
                  }
                  
                  
                  
                  
     else
          if(index[0]==1&&index[1]==0 &&index[2]==1 &&index[3]==0 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[20][1]=arrayy[20][1]+1;
                  if(arrayy[20][0]==0||arrayy[20][0]==1||arrayy[20][0]==2)
                      {
                         arrayy[20][0]=arrayy[20][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[20][2]=arrayy[20][2]+1;    
                      if(arrayy[20][0]==3||arrayy[20][0]==1||arrayy[20][0]==2)
                      {
                         arrayy[20][0]=arrayy[20][0]-1;
                         }    
                  
                  }
                  }
                  
                  
                  
     else
          if(index[0]==1&&index[1]==0 &&index[2]==1 &&index[3]==0 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[21][1]=arrayy[21][1]+1;
                  if(arrayy[21][0]==0||arrayy[21][0]==1||arrayy[21][0]==2)
                      {
                         arrayy[21][0]=arrayy[21][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[21][2]=arrayy[21][2]+1;  
                       if(arrayy[21][0]==3||arrayy[21][0]==1||arrayy[21][0]==2)
                      {
                         arrayy[21][0]=arrayy[21][0]-1;
                         }      
                  
                  }
                  }
                  
                  
                  
                  
       else
          if(index[0]==1&&index[1]==0 &&index[2]==1 &&index[3]==1 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[22][1]=arrayy[22][1]+1;
                   if(arrayy[22][0]==0||arrayy[22][0]==1||arrayy[22][0]==2)
                      {
                         arrayy[22][0]=arrayy[22][0]+1;
                         }   
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[22][2]=arrayy[22][2]+1;
                       if(arrayy[22][0]==3||arrayy[22][0]==1||arrayy[22][0]==2)
                      {
                         arrayy[22][0]=arrayy[22][0]-1;
                         }     
                  
                  }
                  }
                  
                  
                  
                  
                  
        else
          if(index[0]==1&&index[1]==0 &&index[2]==1 &&index[3]==1 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[23][1]=arrayy[23][1]+1;
                   if(arrayy[23][0]==0||arrayy[23][0]==1||arrayy[23][0]==2)
                      {
                         arrayy[23][0]=arrayy[23][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[23][2]=arrayy[23][2]+1;    
                      if(arrayy[23][0]==3||arrayy[23][0]==1||arrayy[23][0]==2)
                      {
                         arrayy[23][0]=arrayy[23][0]-1;
                         } 
                  
                  }
                  }
                  
                  
                  
                  
                  
                  
            else
          if(index[0]==1&&index[1]==1 &&index[2]==0 &&index[3]==0 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[24][1]=arrayy[24][1]+1;
                  if(arrayy[24][0]==0||arrayy[24][0]==1||arrayy[24][0]==2)
                      {
                         arrayy[24][0]=arrayy[24][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[24][2]=arrayy[24][2]+1;  
                       if(arrayy[24][0]==3||arrayy[24][0]==1||arrayy[24][0]==2)
                      {
                         arrayy[24][0]=arrayy[24][0]-1;
                         }   
                  
                  }
                  }
                  
                  
                  
                  
                  
               else
          if(index[0]==1&&index[1]==1 &&index[2]==0 &&index[3]==0 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[25][1]=arrayy[25][1]+1;
                   if(arrayy[25][0]==0||arrayy[25][0]==1||arrayy[25][0]==2)
                      {
                         arrayy[25][0]=arrayy[25][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[25][2]=arrayy[25][2]+1;  
                         if(arrayy[25][0]==3||arrayy[25][0]==1||arrayy[25][0]==2)
                      {
                         arrayy[25][0]=arrayy[25][0]-1;
                         }
                  
                  }
                  }
                  
                  
                  
                  
                  
             else
          if(index[0]==1&&index[1]==1 &&index[2]==0 &&index[3]==1 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[26][1]=arrayy[26][1]+1;
                  if(arrayy[26][0]==0||arrayy[26][0]==1||arrayy[26][0]==2)
                      {
                         arrayy[26][0]=arrayy[26][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[26][2]=arrayy[26][2]+1;
                      if(arrayy[26][0]==3||arrayy[26][0]==1||arrayy[26][0]==2)
                      {
                         arrayy[26][0]=arrayy[26][0]-1;
                         }
                  
                  }
                  }
                  
                  
                  
                  
                  
                  
               else
          if(index[0]==1&&index[1]==1 &&index[2]==0 &&index[3]==1 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[27][1]=arrayy[27][1]+1;
                  if(arrayy[27][0]==0||arrayy[27][0]==1||arrayy[27][0]==2)
                      {
                         arrayy[27][0]=arrayy[27][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[27][2]=arrayy[27][2]+1; 
                      if(arrayy[27][0]==3||arrayy[27][0]==1||arrayy[27][0]==2)
                      {
                         arrayy[27][0]=arrayy[27][0]-1;
                         }    
                  
                  }
                  }
                  
                  
                  
        
             else
          if(index[0]==1&&index[1]==1 &&index[2]==1 &&index[3]==0 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[28][1]=arrayy[28][1]+1;
                  if(arrayy[28][0]==0||arrayy[28][0]==1||arrayy[28][0]==2)
                      {
                         arrayy[28][0]=arrayy[28][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[28][2]=arrayy[28][2]+1;  
                      if(arrayy[28][0]==3||arrayy[28][0]==1||arrayy[28][0]==2)
                      {
                         arrayy[28][0]=arrayy[28][0]-1;
                         }   
                  
                  }
                  }
                  
                  
                  
                  
                  
                  
               else
          if(index[0]==1&&index[1]==1 &&index[2]==1 &&index[3]==0 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[29][1]=arrayy[29][1]+1;
                  if(arrayy[29][0]==0||arrayy[29][0]==1||arrayy[29][0]==2)
                      {
                         arrayy[29][0]=arrayy[29][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[29][2]=arrayy[29][2]+1;  
                      if(arrayy[29][0]==3||arrayy[29][0]==1||arrayy[29][0]==2)
                      {
                         arrayy[29][0]=arrayy[29][0]-1;
                         }   
                  
                  }
                  }
                  
                  
                  
                  
                  
               else
          if(index[0]==1&&index[1]==1 &&index[2]==1 &&index[3]==1 &&index[4]==0)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[30][1]=arrayy[30][1]+1;
                  if(arrayy[30][0]==0||arrayy[30][0]==1||arrayy[30][0]==2)
                      {
                         arrayy[30][0]=arrayy[30][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[30][2]=arrayy[30][2]+1;    
                        if(arrayy[30][0]==3||arrayy[30][0]==1||arrayy[30][0]==2)
                      {
                         arrayy[30][0]=arrayy[30][0]-1;
                         } 
                  
                  }
                  }
                  
                  
                  
                  
               else
          if(index[0]==1&&index[1]==1 &&index[2]==1 &&index[3]==1 &&index[4]==1)
          {
                                    
                  if(prov==1)
                  {             
                  arrayy[31][1]=arrayy[31][1]+1;
                    if(arrayy[31][0]==0||arrayy[31][0]==1||arrayy[31][0]==2)
                      {
                         arrayy[31][0]=arrayy[31][0]+1;
                         }
                  }
                  else
                  if(prov==0)
                  {
                      arrayy[31][2]=arrayy[31][2]+1;   
                        if(arrayy[31][0]==3||arrayy[31][0]==1||arrayy[31][0]==2)
                      {
                         arrayy[31][0]=arrayy[31][0]-1;
                         }  
                  
                  }
                  }
                  
             for(s=0; s<4; s++)
             {
                   index[s]=index[s+1];
                   
                   }
                   index[4]=prov;
                   
                   }           
                  
                  
                  
                  
      
             
            
                         
                  
                  
                  
                  
