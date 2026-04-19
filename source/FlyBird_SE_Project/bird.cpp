#include "bird.h"
#include <QGraphicsScene>
#include <QPainter>
#include <QPainterPath>

Bird::Bird() : velocity(0), gravity(0.95), lift(-10), customSkin(false) {
	defaultUp = QPixmap(":/assets/images/bluebird-upflap.png").scaled(40, 40, Qt::KeepAspectRatio, Qt::SmoothTransformation);
	defaultMid = QPixmap(":/assets/images/bluebird-midflap.png").scaled(40, 40, Qt::KeepAspectRatio, Qt::SmoothTransformation);
	defaultDown = QPixmap(":/assets/images/bluebird-downflap.png").scaled(40, 40, Qt::KeepAspectRatio, Qt::SmoothTransformation);
	useDefaultSkin();
	setPos(100, 300);
}

void Bird::flap() {
	velocity = lift;
	setPixmap(customSkin ? skinMid : skinUp);
}

void Bird::updatePosition() {
	velocity += gravity;
	setY(y() + velocity);

	// 限制鸟的活动范围
	if (y() < 0) {
		setY(0);
		velocity = 0;
	}
	else if (y() > 560) {
		setY(560);
		velocity = 0;
	}

	setPixmap(customSkin ? skinMid : skinDown);
}

void Bird::reset()
{
	setPixmap(skinMid);
	setPos(100, 300);
}

void Bird::setSkin(const QPixmap& pix)
{
	QPixmap scaled = pix.scaled(40, 40, Qt::KeepAspectRatio, Qt::SmoothTransformation);
	QPixmap rounded(scaled.size());
	rounded.fill(Qt::transparent);
	QPainter painter(&rounded);
	painter.setRenderHint(QPainter::Antialiasing);
	QPainterPath path;
	path.addEllipse(rounded.rect());
	painter.setClipPath(path);
	painter.drawPixmap(0, 0, scaled);
	painter.end();
	skinUp = skinMid = skinDown = rounded;
	customSkin = true;
	setPixmap(skinMid);
}

void Bird::useDefaultSkin()
{
	skinUp = defaultUp;
	skinMid = defaultMid;
	skinDown = defaultDown;
	customSkin = false;
	setPixmap(skinMid);
}
