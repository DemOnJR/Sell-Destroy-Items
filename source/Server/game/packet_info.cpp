// Search
Set(HEADER_CG_ITEM_DROP2,			sizeof(TPacketCGItemDrop2),			"ItemDrop2", 			false);

// Add under
#ifdef WJ_NEW_DROP_DIALOG
	Set(HEADER_CG_ITEM_DESTROY,			sizeof(TPacketCGItemDestroy),		"ItemDestroy", 			false);
	Set(HEADER_CG_ITEM_SELL,			sizeof(TPacketCGItemSell),			"ItemSell", 			false);
#endif