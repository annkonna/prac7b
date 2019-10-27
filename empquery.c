#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define MAX_SIZE 10000
#define MAX_STRING_SIZE 50
#define MAX_EMP_ID 99999
#define MAX_LONG_WIDTH 6
#define MIN_SALARY 10000
#define MAX_SALARY 100000


/* Traverse the data structure 'data' and return the salary 
 * for the employee whose employee id is the value passed 
 * in the second parameter 'id'.
 *
 * The function returns -1 if there is an error or if the 
 * employee id was not found, otherwise it should return the 
 * salary of the employee.
 */
long get_salary(void *data, long id) {
    /* Your implementation should appear here */
    return -1;
}

int main(int argc, char *argv[]) {

    void *data = malloc(MAX_SIZE);

    int c;
    char *temp = (char *)data;
    while ( (c=getchar()) != EOF ) {
        *temp = (unsigned char)c;
        temp++;
    }
    *temp = '\0';

    long emp_id = 12347;
    long ret = get_salary(data, emp_id);
    if ( ret == -1 ) {
        return -1;
    } else {
        printf("\nThe salary of Employee whose employee id is %ld is %ld.\n", emp_id, ret);
    }
}
