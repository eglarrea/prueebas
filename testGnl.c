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

#include "getnextline/get_next_line.h"
#include <stdio.h>
#include <fcntl.h> 

/*int main(void) {
    
    int fd = open("fichero.txt", O_RDONLY); 
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return (1);
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (1);
}*/

int main(void) {
    char *line;
    
  if (isatty(fileno(stdin))) {
        printf("No hay entrada estándar\n");
        return 0;
    }

    while ((line = get_next_line(0)) != NULL) {  
        printf("%s", line);
        free(line);  
    }
    return 1;
}

/*int main(void)
{
	char *line;
	size_t sw = 1;
	while (sw == 1)
	{
		line = get_next_line(0);
		if(line != NULL)
		{
			printf("linea: %s", line);
			free(line);
		}
		else
			sw = 0;	
	}
}*/
