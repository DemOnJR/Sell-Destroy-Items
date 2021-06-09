// Search
PyObject* netSendItemDropPacket(PyObject* poSelf, PyObject* poArgs)

// Add under
#ifdef WJ_NEW_DROP_DIALOG
PyObject* netSendItemDestroyPacket(PyObject* poSelf, PyObject* poArgs)
{
	TItemPos Cell;

	if (!PyTuple_GetInteger(poArgs, 0, &Cell.cell))
		return Py_BuildException();
	
	CPythonNetworkStream& rkNetStream = CPythonNetworkStream::Instance();
	rkNetStream.SendItemDestroyPacket(Cell);
	
	return Py_BuildNone();
}

PyObject* netSendItemSellPacket(PyObject* poSelf, PyObject* poArgs)
{
	TItemPos Cell;

	if (!PyTuple_GetInteger(poArgs, 0, &Cell.cell))
		return Py_BuildException();
	
	CPythonNetworkStream& rkNetStream = CPythonNetworkStream::Instance();
	rkNetStream.SendItemSellPacket(Cell);
	
	return Py_BuildNone();
}
#endif

// Search
{ "SendItemDropPacketNew",				netSendItemDropPacketNew,				METH_VARARGS }

// Add under
#ifdef WJ_NEW_DROP_DIALOG
		{ "SendItemDestroyPacket",				netSendItemDestroyPacket,				METH_VARARGS },
		{ "SendItemSellPacket",					netSendItemSellPacket,					METH_VARARGS },
#endif