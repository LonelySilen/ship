#ifndef SCALE_H
#define SCALE_H
#include "global.h"

class QColor;

class Scale: public QWidget
{
    Q_OBJECT
   public:
       enum ErrorCode {MaxValueError=1,MinValueError,ThresholdError,TargetError,PrecisionError,ColorError,UnitsEmpty,OutOfRange};

       explicit Scale(QWidget *parent = 0);
       double value() const {return m_value;}
       int minValue() const {return m_minValue;}
       int maxValue() const {return m_maxValue;}
       double threshold() const {return m_threshold;}
       int precision() const {return m_precision;}
       QString units()const {return m_units;}
       int scaleMajor() const {return m_scaleMajor;}
       int scaleMinor() const {return m_scaleMinor;}
       int startAngle() const {return m_startAngle;}
       int endAngle() const { return m_endAngle;}
       QColor crownColor() const {return m_crownColor;}
       QColor foreground() const {return m_foreground;}
       QColor background() const {return m_background;}
       bool isNumericIndicatorEnabled() const {return m_numericIndicatorEnabled;}

   Q_SIGNALS:
       void errorSignal(int);
       void thresholdAlarm(bool);

   public Q_SLOTS:
       void setValue(double);
       void setMinValue(int);
       void setMaxValue(int);
       void setThreshold(double);
       void setPrecision(int);
       void setUnits(QString);
       void setScaleMajor(int);
       void setScaleMinor(int);
       void setStartAngle(int);
       void setEndAngle(int);
       void setCrownColor(QColor);
       void setForeground(QColor);
       void setBackground(QColor);
       void setNumericIndicatorEnabled(bool);

   protected:
       void paintEvent(QPaintEvent *);

       void drawCrown(QPainter *painter);
       void drawBackground(QPainter *painter);
       void drawScale(QPainter *painter);
       void drawScaleNum(QPainter *painter);
       void drawUnits(QPainter *painter);
       void drawIndicator(QPainter *painter);
       void drawNumericValue(QPainter *painter);
       void drawLine(QPainter *painter);

   private:
       double m_value;
       int m_maxValue, m_minValue;
       int m_precision;
       int m_outerDiameter;
       int m_interDiameter;
       QString m_units;
       int m_scaleMajor;
       int m_scaleMinor;
       int m_startAngle,m_endAngle;
       double m_threshold;
       bool m_thresholdFlag;

       QColor m_crownColor;
       QColor m_foreground;
       QColor m_background;

       bool m_numericIndicatorEnabled;

       QPoint pPos;
   };

#endif // SCALE_H
