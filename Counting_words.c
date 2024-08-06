// Joey Cheung, 6 aug 2024

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char buf[1025];
    int length_word;
    char* word;
    int count = 0;
    int length_line;

    if(argc == 2)
    {
        printf("number of arguments is 1 and the argument is %s\n", argv[1]);
        word = argv[1];
    } 
    else
        printf("Please specify exactly one program argument\n");

    // word
    // length_of_word
    // while not #EOF
    //     read line
    //     for(partial line=line; partial_line<len_line-len_word; partial_line++)
    //         if(word == partial_line) count++
    
    length_word = strlen(word);
    // printf("%d\n", length_word);

    fgets(buf, 1025, stdin);
    length_line = strlen(buf) - 1;
    // printf("%d\n", length_line);

    while(strcmp(buf, "#EOF\n") != 0)  // strcmp(buf, "#EOF") werkt niet!
    {
        for(int i=0;i<length_line-length_word+1;i++)
        {
            if(strncmp(&buf[i], word, length_word) == 0)
                count++;
            // printf("%d\n",i);
            // printf("The intermediate count is %d\n", count);
        }

        fgets(buf, 1025, stdin);
        length_line = strlen(buf) - 1;
        // printf("The count after one line is %d\n", count);
        
    }

    printf("The final count is %d\n", count);
    

    return 0;
}