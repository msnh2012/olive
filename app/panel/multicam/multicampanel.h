#ifndef MULTICAMPANEL_H
#define MULTICAMPANEL_H

#include "panel/viewer/viewerbase.h"
#include "widget/multicam/multicamwidget.h"

namespace olive {

class MulticamPanel : public ViewerPanelBase
{
  Q_OBJECT
public:
  MulticamPanel(QWidget* parent = nullptr);

protected:
  virtual void Retranslate() override;

private:
  MulticamWidget *widget_;

};

}

#endif // MULTICAMPANEL_H