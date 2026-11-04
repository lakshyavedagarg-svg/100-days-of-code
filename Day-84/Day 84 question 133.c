// Print a message for each operation status.
#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void)
{
    enum Status status;

    for (status = SUCCESS; status <= TIMEOUT; status++)
    {
        switch (status)
        {
            case SUCCESS:
                printf("SUCCESS: Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("FAILURE: Operation failed.\n");
                break;
            case TIMEOUT:
                printf("TIMEOUT: Operation timed out.\n");
                break;
        }
    }

    return 0;
}
