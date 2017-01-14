#include <stdio.h>
#include "udc.dsc.h"

int main(void)
{
    BootUDCPost aa;
    char buf[2048] = {0};
    int len = sizeof(buf);
    
    DSCINIT_BootUDCPost(&aa);
    
    DSCSERIALIZE_JSON_BootUDCPost(&aa, NULL, buf, &len);
    printf("buf:[%s]\nlen is [%d]\n", buf, (int)strlen(buf));
    
    memset(&aa, 0, sizeof(aa));
    len = sizeof(buf);
    snprintf(aa.description, sizeof(aa.description), "%s", "this is a test for udc\n");
    DSCDESERIALIZE_JSON_BootUDCPost(NULL, buf, &len, &aa);
    
    return 0;
}
