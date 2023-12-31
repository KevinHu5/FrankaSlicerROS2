/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qFrankaSlicerROS2AppMainWindow_h
#define __qFrankaSlicerROS2AppMainWindow_h

// FrankaSlicerROS2 includes
#include "qFrankaSlicerROS2AppExport.h"
class qFrankaSlicerROS2AppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_FRANKASLICERROS2_APP_EXPORT qFrankaSlicerROS2AppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qFrankaSlicerROS2AppMainWindow(QWidget *parent=0);
  virtual ~qFrankaSlicerROS2AppMainWindow();

public slots:
  void on_HelpAboutFrankaSlicerROS2AppAction_triggered();

protected:
  qFrankaSlicerROS2AppMainWindow(qFrankaSlicerROS2AppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qFrankaSlicerROS2AppMainWindow);
  Q_DISABLE_COPY(qFrankaSlicerROS2AppMainWindow);
};

#endif
