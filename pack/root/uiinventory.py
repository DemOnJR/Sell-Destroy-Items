# Search
dlgPickMoney = None

# Add this bellow
	if app.ENABLE_ITEM_DELETE_SYSTEM:
		wndItemDelete = None
		
# Search
		slotIndex = self.__InventoryLocalSlotPosToGlobalSlotPos(slotIndex)

# Add this bellow
		if app.ENABLE_ITEM_DELETE_SYSTEM:
			if self.isShowDeleteItemDlg():
				self.wndItemDelete.AddItemWithoutMouse(player.INVENTORY, slotIndex)
				return
				
				
# Add this bellow
	if app.ENABLE_ITEM_DELETE_SYSTEM:
		def SetDeleteItemDlg(self, wndItemDelete):
			self.wndItemDelete = wndItemDelete
			
		def isShowDeleteItemDlg(self):
			if self.wndItemDelete:
				if self.wndItemDelete.IsShow():
					return 1
					
			return 0