using System;

public class AlphabetTriangle {
	
     public static void Main(string[] args) {  
		    int i, j, p, q;
		    char c = 'A';
        
        for(i=1; i<=6; i++) {
        	for(j=5; j>=i; j--) {     
         		Console.Write(" ");
			    }
			
        	for(p=1; p<=i; p++) {      
         		Console.Write(c++);
			    }
        	c--;   
			
			    for(q=1; q<i; q++) {  
         		Console.Write(--c);
			    }
          
			    Console.Write("\n");      
        	c = 'A';      
       }      
	  } 
}  
