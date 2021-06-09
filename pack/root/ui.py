# Search
	def SetToolTipWindow(self, toolTip):
		self.ToolTipText=toolTip
		self.ToolTipText.SetParentProxy(self)
		
# Add this bellow
	if app.ENABLE_ITEM_DELETE_SYSTEM:
		def SetToolTipWindow2(self, toolTip):
			self.ToolTipText=toolTip
