/*
 * Copyright 2009, Ingo Weinhold, ingo_weinhold@gmx.de.
 * Distributed under the terms of the MIT License.
 */
#ifndef MAIN_THREADS_PAGE_H
#define MAIN_THREADS_PAGE_H

#include <GroupView.h>

#include "table/Table.h"

#include "main_window/MainWindow.h"


class MainWindow::ThreadsPage : public BGroupView, private TableListener {
public:
								ThreadsPage(MainWindow* parent);
	virtual						~ThreadsPage();

			void				SetModel(Model* model);

private:
			class ThreadsTableModel;

private:
	// TableListener
	virtual	void				TableRowInvoked(Table* table, int32 rowIndex);

private:
			MainWindow*			fParent;
			Table*				fThreadsTable;
			ThreadsTableModel*	fThreadsTableModel;
			Model*				fModel;
};



#endif	// MAIN_THREADS_PAGE_H
