$$$

&&&

RO_SECTION 0x00850000
{
    RO +0
    {
        * (+CONST)
    }
    STATIC_INIT  +0 
    {
        * (.static_init)
    }
    ET +0
    {
        * (.ARM.exidx)
        * (.ARM.extab)
    }
}

RW_SECTION 0x00a6e000
{
    RW +0
    {
        * (+RW-DATA)
    }
    ZI 0x00acc000
    {
        * (+ZI)
    }
}

MODULE_INFO     (0x00100000 + (0x04000000 - 0x00100000))
{
    .module_id  (0x00100000 + (0x04000000 - 0x00100000))
    {
        * (.module_id)
    }
}

GARBAGE_SECTION 0x00c72000
{
    REST_SECTION 0x00c72000
    {
        * (+CODE)
    }
}