//dependencias 
import java.util.Scanner;

class Is { 

	/*Funcao destinada para saber quando a palvra FIM for escrita*/
	public static boolean theEnd (String End)
	{	
		int n = End.length();
		boolean isTheEnd = false; 

		if (      n >= 3 &&
				End.charAt(0) == 'F' &&
				End.charAt(1) == 'I' && 
				End.charAt(2) == 'M'  )
		{ isTheEnd = true; }

		return isTheEnd;
	}


	public static boolean Is_vogal ( String arg )
	{	
		boolean resp = false;
		int size_ = arg.length();		

		if ( size_ <= 0 )
		{
			return resp;
		}

		for (int i = 0; i < size_; i++) {

			char c = Character.toLowerCase(arg.charAt(i));

			if (c == 'a' || c == 'e' ||
					c == 'i' || c == 'o' ||
					c == 'u') 
			{
				resp = true;
				break;
			}
		}

		return resp;

	}


	public static boolean Is_constant ( String arg )
	{	
		boolean resp = false;
		int size_ = arg.length();		

		if ( size_ <= 0 )
		{
			return resp;
		}

		for (int i = 0; i < size_; i++) {

			char c = Character.toLowerCase(arg.charAt(i));

			if ( (c >= 'a' && c <= 'z') &&
				 c != 'a' && c != 'e' &&
				 c != 'i' && c != 'o' &&
				 c != 'u') 
			{
				resp = true;
				break;
			}
		}

		return resp;

	}


	public static boolean Is_number ( String arg  ) 
	{
		if (arg == null )
		{ return false;	}

		try {
			Integer.parseInt(arg);
			return true;
		}
		
		 catch (NumberFormatException e) {
			return false;
		}

		
	}

	
	public static boolean Is_natural ( String arg  ) 
	{
		if (arg == null )
		{ return false;	}

		try {
			Double.parseDouble(arg);
			return true;
		}
		
		 catch (NumberFormatException e) {
			return false;
		}

		
	}




	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		while (sc.hasNextLine())
		{
			String str = sc.nextLine();
			
		            if ( str.length() == 3 &&
                 str.charAt(0) == 'F' &&
                 str.charAt(1) == 'I' &&
                 str.charAt(2) == 'M' )
			{
				break; 
			}

			boolean X1 = Is_natural(str);
			boolean X2 = Is_constant(str);
			boolean X3 = Is_number(str);
			boolean X4 = Is_natural(str);
			
			System.out.println((X1 ? "SIM" : "NAO") + " " +
						   (X2 ? "SIM" : "NAO") + " " +
						   (X3 ? "SIM" : "NAO") + " " +
						   (X4 ? "SIM" : "NAO"));

		}		

		sc.close();
	}
}
