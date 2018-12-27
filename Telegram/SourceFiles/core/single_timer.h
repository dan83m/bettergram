/*
This file is part of Bettergram.

For license and copyright information please follow this link:
https://github.com/bettergram/bettergram/blob/master/LEGAL
*/
#pragma once

class SingleTimer : public QTimer { // single shot timer with check
	Q_OBJECT

public:
	SingleTimer(QObject *parent = nullptr);

	void setSingleShot(bool); // is not available
	void start(); // is not available

	void setTimeoutHandler(Fn<void()> handler);

public slots:
	void start(int msec);
	void startIfNotActive(int msec);

private slots:
	void adjust();
	void onTimeout();

private:
	TimeMs _finishing = 0;
	Fn<void()> _handler;

};
