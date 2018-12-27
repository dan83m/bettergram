/*
This file is part of Bettergram.

For license and copyright information please follow this link:
https://github.com/bettergram/bettergram/blob/master/LEGAL
*/
#pragma once

namespace Window {

enum class HitTestResult {
	None = 0,
	Client,
	SysButton,
	Caption,
	Top,
	TopRight,
	Right,
	BottomRight,
	Bottom,
	BottomLeft,
	Left,
	TopLeft,
};

class TitleWidget : public TWidget {
public:
	using TWidget::TWidget;

	virtual void init() {
	}
	virtual HitTestResult hitTest(const QPoint &p) const {
		return HitTestResult::None;
	}
	virtual QRect iconRect() const {
		return QRect();
	}

};

} // namespace Window
