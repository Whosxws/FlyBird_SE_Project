#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsTextItem>
#include <QTimer>
#include <QVector>
#include "bird.h"
#include "pipe.h"

class Game : public QGraphicsView {
	Q_OBJECT
public:
	Game(QWidget* parent = nullptr);
	void keyPressEvent(QKeyEvent* event) override;
	void mousePressEvent(QMouseEvent* event) override;
	void restartGame();
private slots:
	void gameLoop();
    void startFromGoButton();
    void uploadCustomSkin();

private:
	void resetGameplay(bool startImmediately);
	void showStartScreen();
	void hideStartScreen();
	void buildSkinSelectors();
	void applySkinIndex(int index);
	void resetSkinOptionsToDefault();
	QGraphicsScene* scene;
	QGraphicsTextItem* scoreText;
	QGraphicsPixmapItem* gameOverBanner;
	QGraphicsTextItem* restartHint;
	Bird* bird;
	QTimer* timer;
	QList<Pipe*> pipes;
	QVector<QPixmap> skinOptions;
	QList<QGraphicsPixmapItem*> skinButtons;
	QGraphicsPixmapItem* customSkinButton;
	int selectedSkinIndex;
	int customSkinIndex;
	int score;
	bool isGameOver;
	bool startScreenVisible;
	QGraphicsPixmapItem* startBg;
	QGraphicsPixmapItem* startGetReady;
	QGraphicsPixmapItem* startGuide;
	QGraphicsPixmapItem* startGoButton;
};

#endif // GAME_H
