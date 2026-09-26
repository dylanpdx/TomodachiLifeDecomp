typedef void (*func_t)(void*);

extern "C" void FUN_007d2ae4(void* p) { // this is just to test, needs to be cleaned
    void* obj = *(void**)((char*)p + 8);
    void** vtable = *(void***)obj;
    func_t func = (func_t)vtable[16]; 

    func(obj);
}