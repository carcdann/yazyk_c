#include <stdio.h>
#include <inttypes.h>

int main()
{
    int32_t me32;
    me32 = 45933945;
    printf("first int32_t является int\n");
    printf("me32 = %d", me32);
    printf("Дальше макрос\n");
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}