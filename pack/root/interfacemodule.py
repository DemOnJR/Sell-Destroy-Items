# Search 
import miniMap

# Add this bellow
if app.ENABLE_ITEM_DELETE_SYSTEM:
	import uiDeleteItem

# Search
self.wndGuildBuilding = None

# Add this bellow
		if app.ENABLE_ITEM_DELETE_SYSTEM:
			self.deleteitem = None

# Search 
self.privateShopBuilder.Hide()

# Add this bellow
		if app.ENABLE_ITEM_DELETE_SYSTEM:
			self.deleteitem = uiDeleteItem.DeleteItem()
			self.deleteitem.BindInterface(self)
			self.deleteitem.Hide()
			if self.wndInventory:
				self.wndInventory.SetDeleteItemDlg(self.deleteitem)

# Search
self.wndCubeResult.SetItemToolTip(self.tooltipItem)

# Add this bellow
		if app.ENABLE_ITEM_DELETE_SYSTEM:
			self.deleteitem.SetItemToolTip(self.tooltipItem)

# Search
		if self.wndSafebox:
			self.wndSafebox.Destroy()

# Add this bellow
		if app.ENABLE_ITEM_DELETE_SYSTEM:
			if self.deleteitem:
				self.deleteitem.Hide()
				self.deleteitem.Destroy()
				self.deleteitem = None
				del self.deleteitem

# Search
	def EmptyFunction(self):
		...
		
# Add this bellow the function
	if app.ENABLE_ITEM_DELETE_SYSTEM:
		def OpenDeleteItem(self):
			# if app.ENABLE_PLAYER_SECURITY_SYSTEM and player.IsSecurityActivate():
				# return

			if False == player.IsObserverMode():
				if False == self.deleteitem.IsShow():
					self.deleteitem.Open()
				else:
					self.deleteitem.Close()

	if app.ENABLE_DROP_DIALOG_EXTENDED_SYSTEM:
		def DeleteItem(self, slotPos, invenType):
			# if app.ENABLE_PLAYER_SECURITY_SYSTEM and player.IsSecurityActivate():
				# return
			if self.wndInventory:
				self.wndInventory.DeleteItem(slotPos, invenType)

