# my_printf

Recode the printf function from the C library.
Mandatory : All printf formatting flags except : - Float or double types management
	    	       		  	       	 - %n flag management

Needed to add two flags : -%b : print unsigned numbers in a binary base.
       	      	  	  -%S : print a character string (like %s). However, non-printable characters (ASCII
			  value stricly smaller than 32 or greater or equal than 127) are represented by a backslash to be followed
			  by the character’s value in octal base.
