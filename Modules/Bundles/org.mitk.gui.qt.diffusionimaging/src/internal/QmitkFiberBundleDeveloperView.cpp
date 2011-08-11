/*=========================================================================

 Program:   Medical Imaging & Interaction Toolkit
 Language:  C++
 Date:      $Date: 2010-03-31 16:40:27 +0200 (Mi, 31 Mrz 2010) $
 Version:   $Revision: 21975 $

 Copyright (c) German Cancer Research Center, Division of Medical and
 Biological Informatics. All rights reserved.
 See MITKCopyright.txt or http://www.mitk.org/copyright.html for details.

 This software is distributed WITHOUT ANY WARRANTY; without even
 the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 PURPOSE.  See the above copyright notices for more information.

 =========================================================================*/


// Blueberry
#include <berryISelectionService.h>
#include <berryIWorkbenchWindow.h>



// Qmitk
#include "QmitkFiberBundleDeveloperView.h"
#include "QmitkStdMultiWidget.h"

// Qt
#include <QMessageBox>

//MITK
#include "mitkNodePredicateProperty.h"
//#include "mitkNodePredicateAND.h"
#include "mitkImageCast.h"

#include "mitkPointSet.h"




const std::string QmitkFiberBundleDeveloperView::VIEW_ID = "org.mitk.views.fiberbundledeveloper";
const std::string id_DataManager = "org.mitk.views.datamanager";
using namespace berry;
using namespace mitk;



QmitkFiberBundleDeveloperView::QmitkFiberBundleDeveloperView()
: QmitkFunctionality()
, m_Controls( 0 )
, m_MultiWidget( NULL )
, m_EllipseCounter(0)
, m_PolygonCounter(0)
//, m_SelectedFBNodes( NULL )
//, m_SelectedPFNodes(0)
, m_UpsamplingFactor(5)
{

}

// Destructor
QmitkFiberBundleDeveloperView::~QmitkFiberBundleDeveloperView()
{

}


void QmitkFiberBundleDeveloperView::CreateQtPartControl( QWidget *parent )
{
  // build up qt view, unless already done in QtDesigner, etc.
  if ( !m_Controls )
  {
    // create GUI widgets from the Qt Designer's .ui file
    m_Controls = new Ui::QmitkFiberBundleDeveloperViewControls;
    m_Controls->setupUi( parent );

//    connect( m_Controls->doExtractFibersButton, SIGNAL(clicked()), this, SLOT(DoFiberExtraction()) );
 
  }
}


void QmitkFiberBundleDeveloperView::StdMultiWidgetAvailable (QmitkStdMultiWidget &stdMultiWidget)
{
  m_MultiWidget = &stdMultiWidget;
}


void QmitkFiberBundleDeveloperView::StdMultiWidgetNotAvailable()
{
  m_MultiWidget = NULL;
}

/* OnSelectionChanged is registered to SelectionService, therefore no need to
 implement SelectionService Listener explicitly */

void QmitkFiberBundleDeveloperView::OnSelectionChanged( std::vector<mitk::DataNode*> nodes )
{

  




}

void QmitkFiberBundleDeveloperView::Activated()
{

  MITK_INFO << "FB OPerations ACTIVATED()";
  /*

   mitk::DataStorage::SetOfObjects::ConstPointer _NodeSet = this->GetDefaultDataStorage()->GetAll();
   mitk::DataNode* node = 0;
   mitk::PlanarFigureInteractor::Pointer figureInteractor = 0;
   mitk::PlanarFigure* figure = 0;

   for(mitk::DataStorage::SetOfObjects::ConstIterator it=_NodeSet->Begin(); it!=_NodeSet->End()
   ; it++)
   {
   node = const_cast<mitk::DataNode*>(it->Value().GetPointer());
   figure = dynamic_cast<mitk::PlanarFigure*>(node->GetData());

   if(figure)
   {
   figureInteractor = dynamic_cast<mitk::PlanarFigureInteractor*>(node->GetInteractor());

   if(figureInteractor.IsNull())
   figureInteractor = mitk::PlanarFigureInteractor::New("PlanarFigureInteractor", node);

   mitk::GlobalInteraction::GetInstance()->AddInteractor(figureInteractor);
   }
   }

   */


}



