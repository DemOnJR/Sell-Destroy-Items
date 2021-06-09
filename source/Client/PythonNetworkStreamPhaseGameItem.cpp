// Search
bool CPythonNetworkStream::SendItemDropPacketNew(TItemPos pos, DWORD elk, DWORD count)

// Add under
#ifdef WJ_NEW_DROP_DIALOG
bool CPythonNetworkStream::SendItemDestroyPacket(TItemPos pos)
{
	if (!__CanActMainInstance())
		return true;
	
	TPacketCGItemDestroy itemDestroyPacket;
	itemDestroyPacket.header = HEADER_CG_ITEM_DESTROY;
	itemDestroyPacket.pos = pos;
	
	if (!Send(sizeof(itemDestroyPacket), &itemDestroyPacket))
	{
		Tracen("SendItemDestroyPacket Error");
		return false;
	}
	
	return SendSequence();
}

bool CPythonNetworkStream::SendItemSellPacket(TItemPos pos)
{
	if (!__CanActMainInstance())
		return true;
	
	TPacketCGItemSell itemSellPacket;
	itemSellPacket.header = HEADER_CG_ITEM_SELL;
	itemSellPacket.pos = pos;
	
	if (!Send(sizeof(itemSellPacket), &itemSellPacket))
	{
		Tracen("SendItemSellPacket Error");
		return false;
	}
	
	return SendSequence();
}
#endif