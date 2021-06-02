// C program to Open a File,
// Write in it, And Close the File
  
# include <stdio.h>
# include <string.h>
   
int main( )
{

    FILE *filePointer ;

    char dataToBeWritten[50] 
        = "Writing sample text inside the file";
  
    
    filePointer = fopen("sample.c", "w") ;
    
    if ( filePointer == NULL )
    {
        printf( "sample.c file failed to open." ) ;
    }
    else
    {
          
        printf("The file is now opened.\n") ;
        if ( strlen (  dataToBeWritten  ) > 0 )
        {
            fputs(dataToBeWritten, filePointer) ;   
            fputs("\n", filePointer) ;
        }
          
        fclose(filePointer) ;
          
        printf("Data successfully written in file sample.c\n");
        printf("The file is now closed.") ;
    }
    return 0;        
}