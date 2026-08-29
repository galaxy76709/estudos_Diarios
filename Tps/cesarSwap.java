/*
		lembrar de testar!
*/

import java.util.Scanner;
import java.util.Random;

/*
   Para compilar >> java Cesar_Inter.java < pub.in > resultado.out
   Para ver diff >> diff resultado.out pub.out 
 */

class cesarSwap 
{
	/*
	   Funcao destinada para troca de palavras 
	   aleatorias na string
	 */
	public static String swapWord ( String str, char a, char b, char aSw, char BSw )
	{
		int  size_   = str.length();
		int  i	     = 0;  
		char []Arg   = new char [size_];

		while ( i < size_ )
		{
			Arg[i] = str.charAt(i);

			if     ( Arg [i] == a )
			{
				Arg [i] = aSw; 
			}

			if    ( Arg [i] == b )
			{
				Arg [i] = BSw;
			}

			i = i + 1; 
		}  

		return new String (Arg);
	}

	public static void main (String [ ] args )
	{
		Scanner sc = new Scanner (System.in);

		Random gerador = new Random (); 
		gerador.setSeed(4);

		while (sc.hasNextLine()) 
		{
			String a = sc.nextLine();

			if ( a.equals("FIM") )
			{ break; }

			if ( a.length() == 0 )
			{ continue; }

			int index1 = gerador.nextInt(a.length());
			int index2 = gerador.nextInt(a.length());
			int index3 = gerador.nextInt(a.length());
			int index4 = gerador.nextInt(a.length());

			char firstW   = a.charAt(index1);
			char secondW  = a.charAt(index2);
			char thirdthW = a.charAt(index3);
			char fourthW  = a.charAt(index4);

			String result = swapWord(a, firstW, secondW, 
										thirdthW, fourthW); 
			System.out.println(result);
		}

		sc.close();
	}
}
 