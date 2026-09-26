#define STUB(SYMBOL)                                       \
    extern __attribute__((section("stubs"))) void SYMBOL() \
    {                                                      \
        __nop();                                           \
        __nop();                                           \
        __nop();                                           \
    }

STUB(nninitRegion)
STUB(nninitLocale)
STUB(nninitSystem)
STUB(nninitStartUp)
STUB(nninitCallStaticInitializers)
STUB(nninitSetup)
STUB(nnMain)