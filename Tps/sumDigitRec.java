//dependencias 
import java.util.Scanner;

public class sumDigitRec
{
    /*
       funcao para verirficar quando a palavra FIM for escrita
     */
    public static boolean theEnd ( String str )
    {
        if ( str == null )
        {
            return false;
        }

        int size = str.length();

        if ( size >= 3 &&
             str.charAt(0) == 'F' &&
             str.charAt(1) == 'I' &&
             str.charAt(2) == 'M' )
        {
            return true;
        }

        return false;
    }

    /*
       funcao prevista para a soma total de valores de um vetor
     */
    public static int sumVetorRec ( int[] vect, int index, int size )
    {
        if ( index >= size )
        {
            return 0;
        }

        return vect[index] + sumVetorRec(vect, index + 1, size);
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int size = 0;
        int[] vect = new int[100];

        while ( size < 100 && sc.hasNextLine() )
        {
            String str = sc.nextLine();

            if ( theEnd(str) )
            {
                break;
            }

            vect[size] = Integer.parseInt(str);
            size = size + 1;
        }

        int sum = sumVetorRec(vect, 0, size);

        System.out.println(sum);

        sc.close();
    }
}
