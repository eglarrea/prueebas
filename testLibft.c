/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testLibft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elarrea- <elarrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:16:13 by elarrea-          #+#    #+#             */
/*   Updated: 2025/04/29 11:05:26 by elarrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "libft/libft.h"
/*#include "./Libft/ft_isalpha.c"*/

/*verificar si un caructer es una letra del alfabeto */
void test_is_alpah();
/*verificar si un caructer es un dígito numérico (0-9)*/
void test_is_digit();
/*verificar si un caructer es alfanum es una letra  o un numero */
void test_isalnum();
/*Devuelve un valor distinto de cero si el carácter está 
    dentro del rango ASCII (0 a 127)*/
void test_is_ascii();

/*Verifica si un carácter es imprimible. Esto incluye todos 
los caracteres visibles, como letras, números, símbolos y espacios,
pero excluye los caracteres de control como \n (salto de línea) y \t*/
void test_is_print();
/*calcula la longitud de una cadena*/
void test_strlen();
/*establece un valor en un bloque de memoria*/
void test_memset();
/*establecer a cero ('\0') un bloque de memoria.*/
void test_bezero();
/*copia un bloque de memoria de una ubicación a otra*/
void test_memcpy();
/*copia un bloque de memoria desde un origen (src) hacia un destino (dest), 
 incluso si las áreas de memoria se solapan*/
void test_memmove();
/*copia una cadena de manera segura, asegurando que el destino siempre esté terminado en \0*/
void test_strcpy();
/*C que concatena (une) una cadena a otra de manera segura, asegurando que el 
destino esté terminado en \0 y evitando desbordamientos de búfer*/
void test_stlcat();
void test_to_upper();
void test_to_lower();
/*busca un carácter específico dentro de una cadena y devuelve un puntero 
a la primera aparición de ese carácter*/
void test_strchr();
/*busca la última aparición de un carácter en una cadena y 
devuelve un puntero a esa posición*/
void test_strrchr();
/*compara dos cadenas hasta un número específico de caracteres*/
void test_strncmp();
/*busca un byte específico dentro de un bloque de memoria*/
void test_memchr();
/*compara dos bloques de memoria byte a byte
0 -> Si ambos bloques son idénticos en los primeros num bytes.
Valor negativo -> Si ptr1 es menor que ptr2 en la comparación.
Valor positivo -> Si ptr1 es mayor que ptr2 en la comparación.
*/
void test_memcmp();
/*busca una subcadena dentro de una cadena pero limita la búsqueda*/
void test_strnstr();
/*convierte una cadena de caracteres en un número entero*/
void test_atoi();
/*eserva memoria dinámica y, además, inicializa los bytes a 0*/
void test_calloc();
/*uplica una cadena, reservando memoria dinámica para la nueva copia*/
void test_strdup();
/*La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que
empezar la substring.
len: La longitud máxima de la substring */
void test_substr();
/*crear una nueva cadena combinando dos existentes*/
void test_strjoin();
/*Elimina todos los caracteres de la string ’set’
desde el principio y desde el final*/
void test_strtrim();
/*un array de strings
resultante de separar la string ’s’ en substrings
utilizando*/
void test_split();
/*convertir string a numero*/
void test_itoa();
/*Aplica la función ’f’ a cada carácter de la cadena
’s’, pasando su índice como primer argumento y el
propio carácter como segundo argumento. nuevo string*/
void test_strmapi();
/*Aplica la función ’f’ a cada carácter de la cadena
’s’, pasando su índice como primer argumento y el
propio carácter como segundo argumento. modifica el existente*/
void test_striteri();
/*0 -> stdin (entrada estándar): Se usa para leer datos del usuario o de un archivo de entrada.
1 -> stdout (salida estándar): Se usa para imprimir datos en la consola.
2 -> stderr (salida de errores estándar): Se usa para imprimir mensajes de error*/
void test_putchar();
void test_putstr();
void test_putendl();
void test_putnbr();

void test_bonus_lstnew();
void test_bonus_lstadd_front();
void test_bonus_lstsize();
void test_bonus_lstlast();
void test_bonus_lstdelone();
void test_bonus_lstclear();
void test_bonus_ft_lstiter();
void test_bonus_ft_lstmap();

void	trueValues(int valorOrig, int valorFt);
void	sameReturn(int valorOrig, int valorFt);
void	mensajeError(int valor);


int	main(void)
{
	test_is_alpah();
	test_is_digit();
	test_isalnum();
	test_is_ascii();
	test_is_print();
	test_strlen();
	test_memset();
	test_bezero();
	test_to_upper();
	test_to_lower();
	test_memcpy();
	test_memmove();
	test_strcpy();
	test_stlcat();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();

	test_calloc();
	test_strdup();

	test_substr();
	test_strjoin();
	test_strtrim();
    test_split();
    test_itoa();

    test_strmapi();
    test_striteri();
    test_putchar();
    test_putstr();
    test_putendl();
    test_putnbr();

    test_bonus_lstnew();
    test_bonus_lstadd_front();
    test_bonus_lstsize();
    test_bonus_lstlast();
    test_bonus_lstdelone();
    test_bonus_lstclear();
    test_bonus_ft_lstiter();
    test_bonus_ft_lstmap();
	return (0);
}

void test_is_alpah()
{
	printf("--------------\n");
	printf("- FT_ISALPHA -\n");
	printf("--------------\n");

	printf("1. Test caracter a: ");
	trueValues(isalpha('a'), ft_isalpha('a'));
	printf("2. Test caracter z: ");
	trueValues(isalpha('z'), ft_isalpha('z'));
	printf("3. Test caracter A: ");
	trueValues(isalpha('A'), ft_isalpha('A'));
	printf("4. Test caracter Z: ");
	trueValues(isalpha('Z'), ft_isalpha('Z'));
	printf("5. Test caracter 9: ");
	sameReturn(isalpha('9'), ft_isalpha('9'));
}

void test_is_digit()
{
	printf("--------------\n");
	printf("- FT_ISDIGIT -\n");
	printf("--------------\n");
	printf("1. Test caracter 1: ");
	trueValues(isdigit('1'), ft_isdigit('1'));
	printf("2. Test caracter 0: ");
	trueValues(isdigit('0'), ft_isdigit('0'));
	printf("3. Test caracter 9: ");
	trueValues(isdigit('9'), ft_isdigit('9'));
	printf("4. Test caracter Z: ");
	sameReturn(isdigit('Z'), ft_isdigit('Z'));
}

void test_isalnum()
{
	printf("--------------\n");
	printf("- FT_ISALNUM -\n");
	printf("--------------\n");
	printf("1. Test caracter 1: ");
	trueValues(isalnum('1'), ft_isalnum('1'));
	printf("2. Test caracter 0: ");
	trueValues(isalnum('0'), ft_isalnum('0'));
	printf("3. Test caracter 9: ");
	trueValues(isalnum('9'), ft_isalnum('9'));
	printf("4. Test caracter Z: ");
	trueValues(isalnum('Z'), ft_isalnum('Z'));
	printf("5. Test caracter /: ");
	sameReturn(isalnum('/'), ft_isalnum('/'));
}

void test_is_ascii()
{
	printf("--------------\n");
	printf("- FT_ISASCII -\n");
	printf("--------------\n");
	printf("1. Test caracter A: ");
	trueValues(isascii('A'), ft_isascii('A'));
	printf("2. Test caracter z: ");
	trueValues(isascii('z'), ft_isascii('z'));
	printf("3. Test caracter 0: ");
	trueValues(isascii('0'), ft_isascii('0'));
	printf("4. Test caracter @: ");
	trueValues(isascii('@'), ft_isascii('@'));
	printf("5. Test caracter 1: ");
	trueValues(isascii('1'), ft_isalnum('1'));

	printf("6. Test valor 127: ");
	trueValues(isascii(127), ft_isascii(127));

	printf("7. Test valor 128: ");
	sameReturn(isascii(128), ft_isascii(128));

	printf("8. Test valor \\n: ");
	sameReturn(isascii('\n'), ft_isascii('\n'));

	printf("9. Test valor \\t: ");
	sameReturn(isascii('\t'), ft_isascii('\t'));

}

void test_is_print()
{
	printf("--------------\n");
	printf("- FT_ISPRINT -\n");
	printf("--------------\n");
	printf("1. Test caracter A: ");
	trueValues(isprint('A'), ft_isprint('A'));
	printf("2. Test caracter z: ");
	trueValues(isprint('z'), ft_isprint('z'));
	printf("3. Test caracter 0: ");
	trueValues(isprint('0'), ft_isprint('0'));
	printf("4. Test caracter @: ");
	trueValues(isprint('@'), ft_isprint('@'));
	printf("5. Test caracter 1: ");
	trueValues(isprint('1'), ft_isprint('1'));

	printf("6. Test valor 127: ");
	sameReturn(isprint(127), ft_isprint(127));

	printf("7. Test valor 128: ");
	sameReturn(isprint(128), ft_isprint(128));

	printf("8. Test valor \\n: ");
	sameReturn(isprint('\n'), ft_isprint('\n'));

	printf("9. Test valor \\t: ");
	sameReturn(isprint('\t'), ft_isprint('\t'));
}

void test_strlen()
{
	printf("--------------\n");
	printf("- FT_STRLEN -\n");
	printf("--------------\n");
	char str_with_null[] = "Hola\0mundo";

	printf("1. Test valor Hola: ");
	sameReturn(strlen("Hola"), ft_strlen("Hola"));
	printf("2. Test valor "": ");
	sameReturn(strlen(""), ft_strlen(""));
	printf("3. Test valor Hola mundo: ");
	sameReturn(strlen("!Hola mundo¡"), ft_strlen("!Hola mundo¡"));
	
	printf("4. Test valor @#$_!: ");
	sameReturn(strlen("@#$_!"), ft_strlen("@#$_!"));
	printf("5. Test valor 12345: ");
	sameReturn(strlen("12345"), ft_strlen("12345"));
	printf("6. Test valor A: ");
	sameReturn(strlen("A"), ft_strlen("A"));
	printf("7. Test valor A: ");
	sameReturn(strlen(str_with_null), ft_strlen(str_with_null));
}
void test_memset()
{
	printf("--------------\n");
	printf("- FT_MEMSET -\n");
	printf("--------------\n");
	char buffer[10] = "1111111111";
	char bufferb[10]="1111111111";

    // Caso 1: Llenar con el carácter 'A'
    ft_memset(buffer, 'A', sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0'; // Agregar terminación nula
    printf("Buffer llenado con 'A': %s\n", buffer);
    
	 // Caso 1: Llenar con el carácter 'A'
	 memset(bufferb, 'A', sizeof(bufferb) - 1);
	 bufferb[sizeof(bufferb) - 1] = '\0'; // Agregar terminación nula
	 printf("Buffer llenado con 'A': %s\n", bufferb);
}

void test_bezero()
{

	printf("--------------\n");
	printf("- FT_BZER0 -\n");
	printf("--------------\n");
	char buffer[10];
	char bufferb[10];
	ft_memset(buffer, 'A', sizeof(buffer)-1 );
	memset(bufferb, 'A', sizeof(bufferb)-1 );
	buffer[sizeof(buffer) - 1] = '\0';
	bufferb[sizeof(bufferb) - 1] = '\0';
	printf("Buffer llenado antes con 'A': %s\n", buffer);

	printf("Buffer llenado antes con 'A': %s\n", bufferb);
	ft_bzero(buffer,7); 
	printf("Buffer llenado con '0': %s\n", buffer);

	bzero(bufferb,7); 
	printf("Buffer llenado con '0': %s\n", bufferb);
}

void test_to_upper()
{
	printf("--------------\n");
	printf("- FT_TOUPPER -\n");
	printf("--------------\n");

	printf("1. Test valor o: ");
	sameReturn(toupper('o'), ft_toupper('o'));
	printf("2. Test valor A: ");
	sameReturn(toupper('A'), ft_toupper('A'));
	printf("3. Test valor 1: ");
	sameReturn(toupper('1'), ft_toupper('1'));
	printf("4. Test valor !: ");
	sameReturn(toupper('!'), ft_toupper('!'));
}

void test_to_lower()
{
	printf("--------------\n");
	printf("- FT_LOWER -\n");
	printf("--------------\n");

	printf("1. Test valor o: ");
	sameReturn(tolower('o'), ft_tolower('o'));
	printf("2. Test valor A: ");
	sameReturn(tolower('A'), ft_tolower('A'));
	printf("3. Test valor 1: ");
	sameReturn(tolower('1'), ft_tolower('1'));
	printf("4. Test valor !: ");
	sameReturn(tolower('!'), ft_tolower('!'));
}

void test_memcpy()
{
	printf("--------------\n");
	printf("- FT_MEMCPY -\n");
	printf("--------------\n");

	char origen[] = "Hola mundo";
    char destino[20];
	char destino2[20];

    memcpy(destino, origen, 4);
	ft_memcpy(destino2, origen, 4);
    destino2[4]='\0';
    destino[4]='\0';
    
    printf("Destino Libreria c: %s\n", destino);
	printf("Destino2 Libreria ft: %s\n", destino2);
    
    char origen3[] = "Hola mundo";
    ft_memcpy(origen3 + 2, origen3, 4);
    printf("Destino3 Libreria misma: %s\n", origen3);
}

void test_memmove()
{
	printf("--------------\n");
	printf("- FT_MEMMOVE-\n");
	printf("--------------\n");

	char buffer[20] = "ABCDEFGHIJ"; // Cadena inicial.

    printf("Antes de memmove: %s\n", buffer);

    // Copiamos los primeros 5 caracteres a partir de la posición 2.
    ft_memmove(buffer + 2, buffer, 5);

    printf("Después de memmove: %s\n", buffer);
}

void test_strcpy()
{
	printf("--------------\n");
	printf("- FT_STRCPY-\n");
	printf("--------------\n");
	char src[] = "¡Hola, mundo!";
    char dest[10];

    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Destino: %s\n", dest);
    printf("Longitud de src: %zu\n", len);
}
void test_stlcat()
{
	printf("--------------\n");
	printf("- FT_STRLCAT-\n");
	printf("--------------\n");
	char dest[20] = "Hola, ";
    const char src[] = "mundo!";
    size_t size = sizeof(dest);
    size_t len = ft_strlcat(dest, src, size);
    printf("Caso 1 - Destino: %s | Longitud retornada: %zu\n", dest, len);

	/*dest[20] = "Hola, ";
	len = strlcat(dest, src, size);
    printf("Caso 1 - Destino: %s | Longitud retornada: %zu\n", dest, len);*/
	char dest2[6] = "Hola";
    const char src2[] = " mundo";
    size_t size2 = 3;
    size_t len2 = ft_strlcat(dest2, src2, size2);
    printf("Caso 6 - Destino: %s | Longitud retornada: %zu\n", dest2, len2);

    char dest3[6] = "Hola";
    const char src3[] = " mundo";
    size_t size3 = 7;
    size_t len3 = ft_strlcat(dest3, src3, size3);
    printf("Caso 6 - Destino: %s | Longitud retornada: %zu\n", dest3, len3);
}

void test_strchr()
{
	printf("--------------\n");
	printf("- FT_STRCHR-\n");
	printf("--------------\n");
	const char cadena[] = "¡Hola, mundo!";
    char *resultado = strchr(cadena, '\0');
	char *resultado2 = ft_strchr(cadena, '\0');

    if (resultado)
	{
        printf("OK!! Carácter encontrado: %s - %s\n", resultado , resultado2);
	}
    else
	{
        printf("¡¡Error!! Carácter no encontrado. %s - %s\n", resultado , resultado2);
	}

	char *resultado3 = strchr(cadena, 'X');
	char *resultado4 = ft_strchr(cadena, 'X');
		
    if (resultado3)
        printf("¡¡Error!! Carácter encontrado: %s - %s\n", resultado3 , resultado4);
    else
        printf("OK!! Carácter no encontrado %s - %s\n", resultado3 , resultado4);
}

void test_strrchr()
{
	printf("--------------\n");
	printf("- FT_STRrCHR-\n");
	printf("--------------\n");
	const char cadena[] = "¡Hola, mundo!";
    char s[] = "tripouille";
    char *resultado = ft_strrchr(s, 't');

    if (resultado)
        printf("OK!! Carácter encontrado: %s\n", resultado);
    else
        printf("Error!! Carácter no encontrado.\n");

		char *resultado2 = ft_strrchr(cadena, 'X');
		
    if (resultado2)
        printf("Error!! Carácter encontrado: %s\n", resultado2);
    else
        printf("OK!! Carácter no encontrado.\n");
}

void	test_strncmp()
{
	printf("--------------\n");
	printf("- FT_STRNcmp-\n");
	printf("--------------\n");

    // Caso 1: Cadenas iguales
    printf("Caso 1 (Iguales):\n"); 
	sameReturn(strncmp("Hola", "Hola", 4), ft_strncmp("Hola", "Hola", 4));
    // Caso 2: Cadenas diferentes
    printf("Caso 2 (Diferentes):\n");
	sameReturn(strncmp("Hola", "Holas", 4), ft_strncmp("Hola", "Holas", 4));
    // Caso 3: Cadena 1 menor que Cadena 2
    printf("Caso 3 (Menor): \n"); 
	sameReturn(strncmp("Hola", "Holb", 4), ft_strncmp("Hola", "Holb", 4));
    // Caso 4: Cadena 1 mayor que Cadena 2
    printf("Caso 4 (Mayor): \n"); // Resultado esperado: positivo (ASCII de 'c' > 'b')
	sameReturn(strncmp("Holc", "Holb", 4), ft_strncmp("Holc", "Holb", 4));
    // Caso 5: Comparación parcial
    printf("Caso 5 (Parcial): \n" ); // Resultado esperado: 0, porque los primeros 4 caracteres son iguales
	sameReturn(strncmp("Hola mundo", "Hola", 4), ft_strncmp("Hola mundo", "Hola", 4));
    // Caso 6: Tamaño de comparación igual a 0
    printf("Caso 6 (Tamaño 0): %d\n", strncmp("Hola", "Holb", 0)); // Resultado esperado: 0, no se compara ningún carácter
	sameReturn(strncmp("Hola", "Holb", 0), ft_strncmp("Hola", "Holb", 0));
    // Caso 7: Cadenas vacías
    printf("Caso 7 (Cadenas vacías): \n" ); // Resultado esperado: 0, ambas cadenas están vacías
	sameReturn(strncmp("", "", 4), ft_strncmp("", "", 4));
}

void test_memchr()
{
	printf("--------------\n");
	printf("- FT_MEMCHR-\n");
	printf("--------------\n");

	char buffer[] = "Este es un ejemplo de prueba";
	
    // Caso 1: Buscar un carácter que exista
    char *result = memchr(buffer, 'e', strlen(buffer));
	char *result2 = ft_memchr(buffer, 'e', strlen(buffer));
    
	if (result) {
        printf("OK Caso 1 : Caracter encontrado en la posición %ld\n", result2 - buffer);
    } else {
        printf("Error\n");
    }
	if (result2) {
        printf("OK Caso 1 con ft: Caracter encontrado en la posición %ld\n", result2 - buffer);
    } else {
        printf("Error\n");
    }

    // Caso 2: Buscar un carácter que no exista
    result = memchr(buffer, 'x', strlen(buffer));
	result2 = ft_memchr(buffer, 'x', strlen(buffer));
    if (result) {
        printf("Error!!! Caso 2: Caracter encontrado en la posición %ld\n", result - buffer);
    } else {
        printf("ok Caracter no encontrado\n");
    }
	if (result2) {
        printf("Error!!! Caso 2 con ft: Caracter encontrado en la posición %ld\n", result2 - buffer);
    } else {
        printf("OK Caracter no encontrado \n");
    }

    // Caso 3: Limitar la búsqueda al primer segmento
    result = memchr(buffer, 'e', 5); // Solo busca en los primeros 5 caracteres
	result2 = ft_memchr(buffer, 'e', 5); 
    if (result) {
        printf("OK Caso 3: Caracter encontrado en la posición %ld\n", result - buffer);
    } else {
        printf("Error Caso 3: Caracter no encontrado\n");
    }
	if (result2) {
        printf("OK Caso 3: Caracter encontrado en la posición %ld\n", result - buffer);
    } else {
        printf("Error Caso 3: Caracter no encontrado\n");
    }
}

void	test_memcmp()
{
	printf("--------------\n");
	printf("- FT_MEMCMP-\n");
	printf("--------------\n");
	char str1[] = "Hola, mundo!";
    char str2[] = "Hola, mundo!";
    char str3[] = "Hola, Mundo!"; // Nótese la M mayúscula
    char str4[] = "Hola, universos!";

    printf("Prueba 1: Comparando str1 y str2\n");
    if (memcmp(str1, str2, sizeof(str1)) == 0) {
        printf("OK Resultado: Los dos strings son iguales.\n");
    } else {
        printf("Error Resultado: Los dos strings son diferentes.\n");
    }
	if (ft_memcmp(str1, str2, sizeof(str1)) == 0) {
        printf("OK Resultado: Los dos strings son iguales.\n");
    } else {
        printf("Error Resultado: Los dos strings son diferentes.\n");
    }

    printf("\nPrueba 2: Comparando str1 y str3\n");
    if (memcmp(str1, str3, sizeof(str1)) == 0) {
        printf("Error Resultado: Los dos strings son iguales.\n");
    } else {
        printf("OK Resultado: Los dos strings son diferentes.\n");
    }
	if (ft_memcmp(str1, str3, sizeof(str1)) == 0) {
        printf("Error Resultado: Los dos strings son iguales.\n");
    } else {
        printf("OK Resultado: Los dos strings son diferentes.\n");
    }

    printf("\nPrueba 3: Comparando str1 y str4 (primeros 5 caracteres)\n");
    if (memcmp(str1, str4, 5) == 0) {
        printf("OK Resultado: Los primeros 5 caracteres son iguales.\n");
    } else {
        printf("Error Resultado: Los primeros 5 caracteres son diferentes.\n");
    }
	if (ft_memcmp(str1, str4, 5) == 0) {
        printf("OK Resultado: Los primeros 5 caracteres son iguales.\n");
    } else {
        printf("Error Resultado: Los primeros 5 caracteres son diferentes.\n");
    }
	printf("\nPrueba 4: Comparando str1 y str4 (primeros 5 caracteres)\n");
    if (memcmp("\n", "\n", 1) == 0) {
        printf("OK Resultado: Los primeros 5 caracteres son iguales.\n");
    } else {
        printf("Error Resultado: Los primeros 5 caracteres son diferentes.\n");
    }
	printf("\nPrueba 4: Comparando str1 y str4 (primeros 5 caracteres)\n");
    if (ft_memcmp("\n", "\n", 1) == 0) {
        printf("OK Resultado: Los primeros 5 caracteres son iguales.\n");
    } else {
        printf("Error Resultado: Los primeros 5 caracteres son diferentes.\n");
    }
	
}

void test_strnstr()
{
	printf("--------------\n");
	printf("- FT_STRNSTRN-\n");
	printf("--------------\n");
	const char *big = "Hola, este es un ejemplo de prueba para strnstr.";
    const char *little1 = "ejemplo";
    const char *little2 = "prueba";
    const char *little3 = "no-existe";
    size_t len1 = 25;
    size_t len2 = 50;

    // Prueba 1: Subcadena encontrada dentro del límite
    char *result1 = ft_strnstr(big, little1, len1);
    if (result1)
        printf("Prueba 1 exitosa: '%s' encontrada en '%s'\n", little1, result1);
    else
        printf("Prueba 1 fallida: '%s' no encontrada\n", little1);

    // Prueba 2: Subcadena encontrada en un rango mayor
    char *result2 = ft_strnstr(big, little2, len2);
    if (result2)
        printf("Prueba 2 exitosa: '%s' encontrada en '%s'\n", little2, result2);
    else
        printf("Prueba 2 fallida: '%s' no encontrada\n", little2);

    // Prueba 3: Subcadena no encontrada
    char *result3 = ft_strnstr(big, little3, len2);
    if (result3)
        printf("Prueba 3 fallida: '%s' encontrada en '%s'\n", little3, result3);
    else
        printf("Prueba 3 exitosa: '%s' no encontrada\n", little3);

		char *result4 = ft_strnstr(NULL, NULL, len1);
		if (result4 == NULL)
			printf("Prueba 4exitosa: encontrada en '%s'\n", result4);
		else
			printf("Prueba 4 fallida: ");
}


void test_atoi()
{
	printf("--------------\n");
	printf("- FT_ATOI  -\n");
	printf("--------------\n");
	int i = 0;
	const char *test_cases[] = {
        "+42",
        "   123",
        "-42",
        "   -123",
        "0",
        "+567",
        "   +0000567",
        "abcd123",
        "   42abcd",
        "",
        "    "
    };

    printf("Probando ft_atoi:\n\n");
	while (i < 11)
    {
        printf("Entrada: \"%s\"\n", test_cases[i]);
        printf("Resultado esperado (atoi): %d\n", atoi(test_cases[i]));
        printf("Resultado obtenido (ft_atoi): %d\n", ft_atoi(test_cases[i]));
        printf("------------------------------------------------\n");
		i++;
    }
}

void test_calloc()
{
	printf("--------------\n");
	printf("- FT_CALLOC  -\n");
	printf("--------------\n");
	// Prueba 1: Asignar memoria para una lista de enteros
    int *arr = ft_calloc(5, sizeof(int));
    if (arr == NULL)
    {
        printf("Prueba 1 fallida: No se pudo asignar memoria\n");
        return ;
    }
    printf("Prueba 1 exitosa: Memoria asignada para 5 enteros\n");
    for (size_t i = 0; i < 5; i++)
        printf("arr[%zu] = %d\n", i, arr[i]);
    free(arr);

    // Prueba 2: Asignar memoria para una cadena de caracteres
    char *str = ft_calloc(11, sizeof(char));
    if (str == NULL)
    {
        printf("Prueba 2 fallida: No se pudo asignar memoria\n");
       	return;
    }
    strcpy(str, "Hola mundo");
    printf("Prueba 2 exitosa: Memoria asignada para cadena: '%s'\n", str);
    free(str);

    // Prueba 3: Asignación de memoria con un tamaño inválido
    void *ptr = ft_calloc(0, sizeof(int));
    if (ptr == NULL)
        printf("Prueba 3 exitosa: Manejo correcto de parámetros inválidos\n");
    else
    {
        printf("Prueba 3 fallida: No se debería haber asignado memoria\n");
        free(ptr);
    }
}

void test_strdup()
{
	printf("--------------\n");
	printf("- FT_STRDUP  -\n");
	printf("--------------\n");
	const char *original1 = "Hola, mundo!";
    char *copy1 = ft_strdup(original1);
    if (copy1 == NULL)
    {
        printf("Caso 1 fallido: No se pudo duplicar la cadena.\n");
    }
    else
    {
        printf("Caso 1 exitoso: Original = '%s', Copia = '%s'\n", original1, copy1);
        free(copy1); // Liberar la memoria asignada
    }

    // Caso 2: Cadena vacía
    const char *original2 = "";
    char *copy2 = ft_strdup(original2);
    if (copy2 == NULL)
    {
        printf("Caso 2 fallido: No se pudo duplicar la cadena.\n");
    }
    else
    {
        printf("Caso 2 exitoso: Original = '%s', Copia = '%s'\n", original2, copy2);
        free(copy2); // Liberar la memoria asignada
    }

    // Caso 3: Cadena NULL
   /* const char *original3 = NULL;
    char *copy3 = ft_strdup(original3);
    if (copy3 == NULL)
    {
        printf("Caso 3 exitoso: Manejo correcto de cadena NULL.\n");
    }
    else
    {
        printf("Caso 3 fallido: No se manejó correctamente la cadena NULL.\n");
        free(copy3); 
    }*/
}

void test_substr()
{
	printf("--------------\n");
	printf("- FT_SUBSTR  -\n");
	printf("--------------\n");
	char str[] = "Hola, mundo!";
    
    int start = 7; // Índice de inicio para la subcadena
    int length = 5; // Longitud de la subcadena

    char *sub = ft_substr(str, start, length);
	
	
    printf("Subcadena: %s\n", sub);
	free(sub);
}


void test_strjoin()
{
	printf("--------------\n");
	printf("- FT_STRJOIN  -\n");
	printf("--------------\n");
	// Casos de prueba
    const char *s1 = "Hola";
    const char *s2 = " Mundo";
    const char *s3 = "";

    // Combinar dos cadenas normales
    char *result1 = ft_strjoin(s1, s2);
    if (result1)
    {
        printf("Resultado (\"Hola\" + \" Mundo\"): \"%s\"\n", result1);
        free(result1); // Liberar memoria
    }
    else
        printf("Error al combinar cadenas.\n");

    // Uno de los parámetros es NULL
    char *result2 = ft_strjoin(s1, s3);
    if (result2)
    {
        printf("Resultado (\"Hola\" + NULL): \"%s\"\n", result2);
        free(result2); // Liberar memoria
    }
    else
        printf("Error: uno de los parámetros es NULL.\n");

    // Ambos parámetros son NULL
    char *result3 = ft_strjoin(s3, s3);
    if (result3)
    {
        printf("Resultado (NULL + NULL): \"%s\"\n", result3);
        free(result3); // Liberar memoria
    }
    else
        printf("Error: ambos parámetros son NULL.\n");
}

void test_strtrim()
{
	printf("--------------\n");
	printf("- FT_STRTRIM -\n");
	printf("--------------\n");
	char const *test_str;
    char const *set;
    char *result;

	set=NULL;
	test_str=
	result = ft_strtrim("  Hola mundo  ", " ");
    printf("Resultado prueba 0: '%s'\n", result);
    free(result);
    // Prueba 1: cadena y conjunto comunes
    test_str = "  Hola mundo  ";
    set = " ";
    result = ft_strtrim(test_str, set);
    printf("Resultado prueba 1: '%s'\n", result);
    free(result);

    // Prueba 2: cadena sin caracteres para recortar
    test_str = "Hola";
    set = " ";
    result = ft_strtrim(test_str, set);
    printf("Resultado prueba 2: '%s'\n", result);
    free(result);

    // Prueba 3: caracteres intermedios no afectados
    test_str = "**Hola**mundo**";
    set = "*";
    result = ft_strtrim(test_str, set);
    printf("Resultado prueba 3: '%s'\n", result);
    free(result);

    // Prueba 4: cadena vacía
    test_str = "";
    set = " ";
    result = ft_strtrim(test_str, set);
    printf("Resultado prueba 4: '%s'\n", result);
    free(result);
}

void test_split()
{
    printf("--------------\n");
	printf("- FT_SPLIT -\n");
	printf("--------------\n");

    char **result;
    char *str = "Hola,mundo,esto,es,C";
    char separator = ',';
    size_t cont;

    result = ft_split(str, separator);

    if (result)
    {
        cont = 0;
        while (result[cont] != NULL)
        {
            printf("Palabra %ld: %s\n", cont + 1, result[cont]);
            free(result[cont]);
            cont ++;
        }
        

        free(result);     
    }
    
    str = "Hola,mundo,esto,es,C,";
    separator = ',';

    result = ft_split(str, separator);

    if (result)
    {
        cont = 0;
        while (result[cont] != NULL)
        {
            printf("Palabra %ld: %s\n", cont + 1, result[cont]);
            free(result[cont]);
            cont ++;
        }
        

        free(result);     
    }
    str = NULL;
    result = ft_split(str, separator);

    if (result == NULL)
    {
     printf("Retorna nulll\n");   
    }
    free(result);

}

void test_itoa()
{
    printf("-----------\n");
	printf("- FT_ITOA -\n");
	printf("-----------\n");
    
    char *str = ft_itoa(123);  // `ft_itoa` devuelve una cadena dinámica
    printf("ft_itoa(123) -> %s\n", str);  // Usamos la cadena
    free(str);  
   
    str = ft_itoa(-456);  // `ft_itoa` devuelve una cadena dinámica
    printf("ft_itoa(-456) -> %s\n", str);  // Usamos la cadena
    free(str); 
    
    str = ft_itoa(789);  // `ft_itoa` devuelve una cadena dinámica
    printf("ft_itoa(789) -> %s\n", str);  // Usamos la cadena
    free(str); 
    str = ft_itoa(-2147483648);  // `ft_itoa` devuelve una cadena dinámica
    printf("ft_itoa(-2147483648) -> %s\n", str);  // Usamos la cadena
    free(str); 

   /* printf("ft_itoa(-456) -> %s\n", ft_itoa(-456));
    printf("ft_itoa(789) -> %s\n", ft_itoa(789));
    printf("ft_itoa(2147483647) -> %s\n", ft_itoa(2147483647)); */
}

char funcion_mapi(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    else
        return ft_tolower(c);
}

void test_strmapi()
{
    printf("--------------\n");
	printf("- FT_STRMAPI -\n");
	printf("--------------\n");
    char *original = "hola mundo";
    char *modified;

    modified = ft_strmapi(original, funcion_mapi);

    if (modified)
    {
        printf("Original: %s\n", original);
        printf("Modificado: %s\n", modified);
        free(modified);
    }
    else
    {
        printf("Error al modificar la cadena.\n");
    }
}

void funcion_iteri(unsigned int i, char* c)
{
    if (i % 2 == 0)
        *c=(char)ft_toupper((int)*c);
    else
        *c=(char)ft_tolower((int)*c);
}
void test_striteri()
{
    printf("--------------\n");
	printf("- FT_STRITERI -\n");
	printf("--------------\n");
    char original[] = "hola mundo";

    printf("Antes: %s\n", original);
    ft_striteri(original, funcion_iteri);
    printf("Después: %s\n", original);
}
void test_putchar()
{
    printf("--------------\n");
	printf("- FT_PUTCHAR -\n");
	printf("--------------\n");

    ft_putchar_fd('B', 1);
    ft_putchar_fd('\n', 1);

}
void test_putstr()
{
    printf("--------------\n");
	printf("- FT_PUTSTR -\n");
	printf("--------------\n");
    ft_putstr_fd("Hola", 1);
}

void test_putendl()
{
    printf("--------------\n");
	printf("- FT_putendl -\n");
	printf("--------------\n");
    ft_putendl_fd("Hola", 1);
}

void test_putnbr()
{
    printf("--------------\n");
	printf("- FT_putnbr -\n");
	printf("--------------\n");
    ft_putnbr_fd(4558, 1);
    ft_putchar_fd('\n', 1);
}



void test_bonus_lstnew()
{
    printf("-------------\n");
	printf("- FT_lstnew -\n");
	printf("-------------\n");

    int data = 42;
    t_list *node = ft_lstnew(&data);

    if (node)
        printf("Nodo creado con valor: %d\n", *(int *)node->content);
    
    free(node); // No olvides liberar la memoria cuando termines

    
    node = ft_lstnew(NULL);

    if (node->content == NULL)
        printf("Creado el nodo con el content a NULL\n");
    
    free(node); 
}

void test_bonus_lstadd_front()
{
    printf("-------------------\n");
	printf("- FT_lstadd_front -\n");
	printf("-------------------\n");

    t_list *list = NULL; // Inicializamos la lista vacía

    // Crear y añadir nodos al frente
    int val1 = 10, val2 = 20, val3 = 30;
    t_list *node1 = ft_lstnew(&val1);
    t_list *node2 = ft_lstnew(&val2);
    t_list *node3 = ft_lstnew(&val3);

    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);

    while (list)
    {
        printf("Nodo con valor: %d\n", *(int *)list->content);
        list = list->next;
    }
    // Liberar memoria
    free(node1);
    free(node2);
    free(node3);
}

void test_bonus_lstsize()
{
    printf("--------------\n");
	printf("- FT_lstsize -\n");
	printf("--------------\n");

    t_list *list = NULL; // Inicializamos la lista vacía

    // Crear y añadir nodos al frente
    int val1 = 10, val2 = 20, val3 = 30;
    t_list *node1 = ft_lstnew(&val1);
    t_list *node2 = ft_lstnew(&val2);
    t_list *node3 = ft_lstnew(&val3);

    node1->next = node2;
    node2->next = node3;
    list = node1;
    
    printf("Nodo con valor: %d\n", ft_lstsize(list));
    
    // Liberar memoria
    free(node1);
    free(node2);
    free(node3);
}

void test_bonus_lstlast()
{
    printf("--------------\n");
	printf("- FT_lstlast -\n");
	printf("--------------\n");
    t_list *lst = NULL;
    int val1 = 10, val2 = 20, val3 = 30;

    t_list *node1 = ft_lstnew(&val1);
    t_list *node2 = ft_lstnew(&val2);
    t_list *node3 = ft_lstnew(&val3);

    node1->next=node2;
    node2->next=node3;
    lst = node1;
    t_list *node4= ft_lstlast(lst);
    printf("el nodo es el %d", *(int *)node4->content);
    free(node1);
    free(node2);
    free(node3);
    
}

void del(void *content) {
    if(content)
        free(content);
}

void test_bonus_lstdelone()
{
    printf("----------------\n");
	printf("- FT_lstdelone -\n");
	printf("----------------\n");
    
    int *val1 = malloc(sizeof(int));
    *val1=20;
    t_list *node1 = ft_lstnew(val1);
    printf("Valor de nodo antes de liberar %d\n", *(int*)node1->content);
    ft_lstdelone(node1, del);
}

void test_bonus_lstclear()
{
    printf("---------------\n");
	printf("- FT_lstclear -\n");
	printf("---------------\n");

    int *val1 = malloc(sizeof(int));
    *val1=20;
    t_list *lista = ft_lstnew(val1); 
    printf("Lista antes de limpiar: %d\n", *(int *)lista->content);

    ft_lstclear(&lista, del);

    printf("Lista después de limpiar: %p\n", (void *)lista); 
    //free(val1);
   
}
void print_content(void *content) {
    printf("Valor: %d\n", *(int *)content);
}

void test_bonus_ft_lstiter()
{
    printf("--------------\n");
	printf("- FT_lstiter -\n");
	printf("--------------\n");
    int *val1 = malloc(sizeof(int));
    int *val2 = malloc(sizeof(int));
    *val1=20;
    *val2=30;
    t_list *lista = ft_lstnew(val1);
    t_list *otro = ft_lstnew(val2);
    lista->next = otro;
    ft_lstiter(lista, print_content); 
   
    free(val1);
    free(val2);
    if(lista)
        free(lista);
    if(otro)
        free(otro);
    
}

void *change_int(void *content) {
    int *new_value = malloc(sizeof(int));
    if (!new_value)
        return NULL;
    *new_value = *(int *)content * 2; // Multiplica por 2
    return new_value;
}
void test_bonus_ft_lstmap()
{
    printf("-------------\n");
	printf("- FT_lstmap -\n");
	printf("-------------\n");
    int *val1 = malloc(sizeof(int));
    int *val2 = malloc(sizeof(int));
    int *val3 = malloc(sizeof(int));
    *val1=20;
    *val2=30;
    *val3=40;
    
    // Crear lista original con datos dinámicos
    t_list *lista = ft_lstnew(val1);
    lista->next = ft_lstnew(val2);
    lista->next->next = ft_lstnew(val3);
    
    printf("Lista original:\n");
    ft_lstiter(lista, print_content);

    // Aplicar ft_lstmap para duplicar valores
    t_list *nueva_lista = ft_lstmap(lista, change_int, del);

    printf("Lista modificada:\n");
    ft_lstiter(nueva_lista, print_content); 

    // Limpiar listas
    ft_lstclear(&lista, del);
    ft_lstclear(&nueva_lista, del);
}

void trueValues(int valorOrig, int valorFt)
{
	if	(valorOrig && valorFt)
		mensajeError(1);
	else
		mensajeError(0);
}

void sameReturn(int valorOrig, int valorFt)
{
	if	(valorOrig == valorFt)
		mensajeError(1);
	else
		mensajeError(0);
}


void mensajeError(int valor)
{
	if	(valor)
		//printf("OK!!!\n");
		printf("\033[32mTodo está bien\033[0m\n");
	else
		//printf("!!!ERROR!!!\n");
		printf("\033[31m!!!ERROR!!!\033[0m\n");
}