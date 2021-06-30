#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<ctype.h>

string ari(string s)
{ float word=0,characters=0,sen=0;
  int r,i=0;
  float readindex;
  
  while(s[i]!='\0')
  { if(isalnum(s[i]))
 	characters++;
    else if(s[i]==' ')
    	word++;
    else if(s[i]=='.' || s[i]=='?' || s[i]=='!')
  	sen++;
    else
	 continue;
    i++;
  }
  readindex=4.71*(characters/word)+0.5*(word/sen)-21.43;
  r=ceil(readindex);
  switch(r)
 {case 1:
  	return "Kindergarten";
        
  case 2:
	return "First/Second Grade";
	
  case 3:
	return "Third Grade";
        
  case 4:
	return "Fourth Grade";
	
  case 5:
	return "Fifth Grade";
	
  case 6:
	return "Sixth Grade";
	
  case 7:
	return "Seventh Grade";
	
  case 8:
	return "Eighth Grade";
	
  case 9:
	return "Ninth Grade";
	
  case 10:
	return "Tenth Grade";
	break;
  case 11:
	return "Eleventh Grade";
	break;
  case 12:
	return "Twelfth Grade";
	
  case 13:
	return "College student";
	
  case 14:
	return "Professor";
	
 }
}
 
    
