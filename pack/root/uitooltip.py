# Search
	def SetShopItem(self, slotIndex):
	
	
# Add this bellow
	if app.ENABLE_ITEM_DELETE_SYSTEM:
		def SetDeleteItem(self, invenType, invenPos, index):
			itemVnum = player.GetItemIndex(invenType, invenPos)
			if (itemVnum == 0):
				return

			item.SelectItem(itemVnum)
			self.ClearToolTip()

			metinSlot = []
			for i in xrange(player.METIN_SOCKET_MAX_NUM):
				metinSlot.append(player.GetItemMetinSocket(invenType, invenPos, i))
			attrSlot = []
			for i in xrange(player.ATTRIBUTE_SLOT_MAX_NUM):
				attrSlot.append(player.GetItemAttribute(invenType, invenPos, i))

			if app.ENABLE_WEAPON_EVOLUTION_SYSTEM:
				self.AddItemData(itemVnum, metinSlot, attrSlot, player.GetItemEvolution(player.INVENTORY, invenPos), 0, 0, invenType, invenPos, 0, -1) #ENABLE_CHANGELOOK_SYSTEM
			else:
				self.AddItemData(itemVnum, metinSlot, attrSlot)