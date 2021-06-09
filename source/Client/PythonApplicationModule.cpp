// Search
#ifdef ENABLE_COSTUME_SYSTEM
PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	1);
#else
PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	0);
#endif

// Add under
#ifdef WJ_NEW_DROP_DIALOG
	PyModule_AddIntConstant(poModule, "WJ_NEW_DROP_DIALOG", 1);
#else
	PyModule_AddIntConstant(poModule, "WJ_NEW_DROP_DIALOG", 0);
#endif
#ifdef ENABLE_ITEM_DELETE_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_ITEM_DELETE_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_ITEM_DELETE_SYSTEM", 0);
#endif

