// Search
HEADER_CG_ITEM_DROP2

// Add under
#ifdef WJ_NEW_DROP_DIALOG
    HEADER_CG_ITEM_DESTROY                        = 21,
    HEADER_CG_ITEM_SELL                            = 22,
#endif

// Search
typedef struct command_item_drop2

// Add under
#ifdef WJ_NEW_DROP_DIALOG
typedef struct command_item_destroy
{
    BYTE        header;
    TItemPos    pos;
} TPacketCGItemDestroy;

typedef struct command_item_sell
{
    BYTE        header;
    TItemPos    pos;
} TPacketCGItemSell;
#endif