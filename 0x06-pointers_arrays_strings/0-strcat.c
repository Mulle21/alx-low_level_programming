#include "main.h"                                         

                                                          

/**                                                       
 *
 *  * _strcat - function commute srtings                     
 *
 *   * @dest: param pointer to a cha                          
 *
 *    * @src: param pointer to a ch                            
 *
 *     * Return: return value of det.                           
 *
 *      */                                                       

                                                          

char *_strcat(char *dest, char *src)                      
{
       	int i;        
        int j;                                            

        i = 0;
	j = 0;                                            
      
	while (dest[i] != '\0')                      
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j+++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

