#include<stdio.h>
#include<cs50.h>
#include<math.h>

string ari(string *s)

{ word=0,characters=0,sen=0,r;
  float index;
 while(s[i]!="\0")
  { if(isalnum(s[i])!=0)
 	characters++;
    if(s[i]==" ")
    	word++;
    if(s[i]=='.' || s[i]=='?' || s[i]=='!')
  	sen++;
  }
  index=(4.71*(characters/word))+(0.5*(word/sen))-21.43;
  r=ceil(index);
  switch(r)
 {case 1:
  	return "Kindergarten";
        break;
  case 2:
	return "First/Second Grade";
	break;
  case 3:
	return "Third Grade";
        break;
  case 4:
	return "Fourth Grade";
	break;
  case 5:
	return "Fifth Grade";
	break;
  case 6:
	return "Sixth Grade";
	break;
  case 7:
	return "Seventh Grade";
	break;
  case 8:
	return "Eighth Grade";
	break;
  case 9:
	return "Ninth Grade";
	break;
  case 10:
	return "Tenth Grade";
	break;
  case 11:
	return "Eleventh Grade";
	break;
  case 12:
	return "Twelfth grade";
	break;
  case 13:
	return "College student";
	break;
  case 14:
	return "Professor";
	break;
 }
}
 
    
