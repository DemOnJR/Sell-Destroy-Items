#ifdef ENABLE_ITEM_DELETE_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_ITEM_DELETE_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_ITEM_DELETE_SYSTEM", 0);
#endif