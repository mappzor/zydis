#ifndef ZYDIS_MINIMAL_MODE
static const ZydisDefinitionAccessedFlags ACCESSED_FLAGS[] =
{
    { { 0x0, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0xF, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x6, 0x0, 0x0, 0x9 } }, 
    { { 0x0, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x2, 0x0, 0x0, 0xD } }, 
    { { 0x0, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0xF } }, 
    { { 0x0, 0x0, 0x40000, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x0, 0x40000, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1000, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x800, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x800, 0x800, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x800, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x400, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1400, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x400, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x0, 0x400, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1000, 0x80200, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x30200, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x21800, 0x64300, 0x10000, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x21000, 0xE4200, 0x10100, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x80, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x880, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x40, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x40, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x2, 0x0, 0x0, 0xD } }, 
    { { 0x8C0, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x40, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x4, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x4, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x2, 0x0, 0x0, 0xD } }, 
    { { 0x0, 0x8D4, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x2, 0x0, 0x0, 0xD } }, 
    { { 0x41, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x41, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x2, 0x0, 0x0, 0xD } }, 
    { { 0xD5, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x3F5FD5, 0x0, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1, 0x1, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1, 0x1, 0x0, 0x0, 0x800 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x11, 0xD5, 0x0, 0x0, 0x800 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1, 0x8D5, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x1, 0x8C5, 0x0, 0x0, 0x10 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x1, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x801, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x1, 0x0, 0x0, 0x800 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x41, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x440, 0x8D5, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0xD5, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x8D5, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x400, 0x8D5, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x25000, 0x3F5FD5, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x21000, 0x3D5FD5, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x121000, 0x2C5FD5, 0x10000, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x3F5FD5, 0x0, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x3C5FD5, 0x10000, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x3C5FD5, 0x30000, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x45, 0x890, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x45, 0x890, 0x0, 0x0 }, { 0x0, 0x2, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x8C5, 0x0, 0x0, 0x10 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0xC5, 0x0, 0x0, 0x810 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x8C1, 0x14, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x41, 0x894, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x1, 0x8D4, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x10, 0x11, 0x0, 0x0, 0x8C4 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x1, 0x0, 0x0, 0x894 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0xC1, 0x800, 0x0, 0x14 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x41, 0x0, 0x0, 0x894 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x81, 0x840, 0x0, 0x14 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x801, 0x0, 0x0, 0xD4 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x1, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0xC4, 0x801, 0x0, 0x10 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x40, 0x895, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x8D5, 0x0, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0xC0, 0x801, 0x0, 0x14 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x40, 0x801, 0x0, 0x94 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x0, 0x1, 0x0 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0xC4, 0x0, 0x0, 0x811 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x40, 0x0, 0x0, 0x895 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }, 
    { { 0x0, 0x0, 0x0, 0x0, 0x8D5 }, { 0x0, 0x0, 0x0, 0x0, 0x0 } }
};
#endif
