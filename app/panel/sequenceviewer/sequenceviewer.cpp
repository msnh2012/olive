/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2022 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#include "sequenceviewer.h"
#include "panel/timeline/timeline.h"

namespace olive {

SequenceViewerPanel::SequenceViewerPanel(QWidget *parent) :
  ViewerPanel(QStringLiteral("SequenceViewerPanel"), parent)
{
  // Set strings
  Retranslate();
}

void SequenceViewerPanel::StartCapture(const TimeRange &time, const Track::Reference &track)
{
  TimelinePanel *tp = static_cast<TimelinePanel *>(sender());
  static_cast<ViewerWidget*>(GetTimeBasedWidget())->StartCapture(tp->timeline_widget(), time, track);
}

void SequenceViewerPanel::Retranslate()
{
  ViewerPanel::Retranslate();

  SetTitle(tr("Sequence Viewer"));
}

}
