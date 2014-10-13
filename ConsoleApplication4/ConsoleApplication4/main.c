
#include <stdio.h>
#include <string.h>


/*sta8eres*/

#define WHITE_SPACE 0
#define NON_WHITE_SPACE 1

int main()
{
    
    FILE*input_file;
    FILE*output;            
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
  
   
    int u=0;
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
	int ll=0;
	int h=0;
	int hits=0;
	int x=0;
	int d=0;

    char a[8];
	char b[8];
	char c[8];
	char m[8];
	char charaktiras;
   now_char=WHITE_SPACE;
    output = fopen("exodos.txt","w");
	printf("dose to onoma tou arxeiou: ");   // giana ani3eis to onoma arxiou p s dia o xristis, to arxio na ine sto idio directory
     scanf( "%s" ,name);  
    input_file = fopen(name,"r");  
    while((charaktiras = fgetc(input_file))!=EOF)
    {
                       
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
                        
                                if(ttt!=1)
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
						 
                         
                       if(epan!=0)
                       {
                                  
                         
                         fprintf(output,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
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
						
                         epanaliyivrogxou++;
                           
                        for(s=1; s<epan; s++)
                        {
                               fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");  
						
                         epanaliyivrogxou++;
                         }   
                          fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken");            
                     epan=0;
                    }
                    else
                    {
                         fprintf(output,"\n  exi san inner loop to branch");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
                      } 
                        fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken");     
                         }
                         
                         } 
                         
                         
                         else
                         
                          {
                             if(ttt==1)
                             {
                                                         
                             if(epan!=0)
                       {
                                  
                         
                         fprintf(output,"\n  exi san inner loop to branch :");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
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

                         epanaliyivrogxou++;
                           
                        for(s=1; s<epan; s++)
                        {
                               fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");   
                         epanaliyivrogxou++;
                         }   
                          fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken");            
                     epan=0;
                    }
                    else
                    {
                         fprintf(output,"\n  exi san inner loop to branch");
                        for(s=0;  s<8; s++)
                      {
                         fprintf(output,"%c",b[s]); 
                      } 
                        fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken");     
                         }
                         ttt=0;
                         kkk=1;
                         }
                         }
                       inner=1; 
                     
                                
                                 }
                                 
                                 
                                 
                                 
                                 
                    if(epanaliyi==8)
                    {
                    
                    
                    /*printf("\n epanaliyi");*/
                    
                  /*  if (d==0)
                    {
                             epanaliyivrogxou=1;                  
                    printf("\n to branch :");
                    for(s=0;  s<8; s++)
                      {
                         printf("%c",b[s]); 
                      }
                         printf("\n");
                         printf("epanaliyivrogxou ");
                         printf("   provleyi");
                         printf("     drasi");
                         printf("     nea katastasi");
                         printf("\n %d",epanaliyivrogxou);
                         printf("                 Taken");
                         printf("           Taken");
                         printf("           Taken");
                         epanaliyivrogxou++;
                    }
                    else{
                
                        printf("\n %d",epanaliyivrogxou);
                         printf("                 Taken");
                       printf("             Taken");
                       printf("             Taken");
                       epanaliyivrogxou++;
                       } */
                    
                    d=1;
                    ff=1;
                    epan++;
                    if(inner==1)  
                     {
                            epanaliyivrogxou=1;                  
                    fprintf(output,"\n to branch :");
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
                         fprintf(output,"           Taken");
                         fprintf(output,"           Taken");      
                         epan=0;
                         ttt=1;;
                         
                         }
                    }
                    
                    
                    else 
                    
                         if (in!=8 && epanaliyi!=8)
                    {
                       
                       /*if(w==2)
                       {
                       printf("\n %d",epanaliyivrogxou);
                         printf("                 Taken");
                       printf("           notTaken");
                       printf("           notTaken");
                       }*/
                       if(w!=0 && ff!=1)
                       {
                        
                        fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                       fprintf(output,"           notTaken");
                       fprintf(output,"           notTaken");
                       }
                       if(w==0 && ff==1 && inner==0)
                       {
                              /* printf("\n");                    
                      printf("to branchh me dieuthinsi :");
                     /* for(s=0;  s<8; s++)
                      {
                         printf("%c",b[s]); 
                      }
                         printf("\n");
                         epanaliyivrogxou=1;
                         printf("epanaliyivrogxou ");
                         printf("   provleyi");
                         printf("     drasi");
                         printf("     nea katastasi");
                         printf("\n %d",epanaliyivrogxou);
                         printf("                 Taken");
                         printf("           notTaken");
                         printf("           notTaken");  
                         */
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
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");   
                         epanaliyivrogxou++;    
                         } 
                          fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken"); 
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
						  
                       
                           inner=0; 
                           
                           } 
                           
                           
                       if(w!=0 && ff==1)
                       {
                           fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                       fprintf(output,"           notTaken");
                       fprintf(output,"           notTaken");
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
						
                         epanaliyivrogxou++;
                        for(s=1; s<epan; s++)
                        {
                              fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              Taken");
                         fprintf(output,"              Taken");
						 
                         epanaliyivrogxou++;    
                         } 
                          fprintf(output,"\n %d",epanaliyivrogxou);
                         fprintf(output,"                 Taken");
                         fprintf(output,"              NotTaken");
                         fprintf(output,"              NotTaken");   
						 
                       
                         yy=1;     
                              
                       }
                       
                       
                       
                       
                       if(w==0 &&ff!=1&&yy==0)
                       { 
                               
                         if(kkk!=1)
                         {    
                        if(xx!=1)
                        {
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
                  
                   epitixes=0;
                    }  
                    }                            
                    }
					
   }  
   
  
    fprintf(output,"\n");   
      fprintf(output,"branches:");
      fprintf(output,"%d",branches);
      
      /* fprintf(output_file,"Numper of words counter is %d\n",Co);*/
       
       /*kleise arxeia*/
       fclose(input_file);
       fclose(output);
       

  	system("PAUSE");
 } 








