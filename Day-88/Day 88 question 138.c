// Print all enum names and their integer values using a loop.
#include <stdio.h>

enum UserRole
{
    ADMIN,
    USER,
    GUEST
};

int main(void)
{
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};
    int role;

    for (role = ADMIN; role <= GUEST; role++)
    {
        printf("%s = %d\n", roleNames[role], role);
    }

    return 0;
}
