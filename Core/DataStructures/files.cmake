SET(H_FILES  
  mitkGenericLookupTable.h
  mitkGenericLookupTableProperty.h
  mitkGenericProperty.h
  mitkTransferFunctionProperty.h
  itkConfidenceDiffusionTensor3D.h
)

SET(CPP_FILES  
  mitkAbstractTransformGeometry.cpp
  mitkAffineTransformationOperation.cpp
  mitkAnnotationProperty.cpp
  mitkApplicationCursor.cpp
  mitkApplyDiffImageOperation.cpp
  mitkBaseData.cpp
  mitkBaseProperty.cpp
  mitkBoundingObject.cpp
  mitkBoundingObjectGroup.cpp
  mitkCellOperation.cpp
  mitkClippingProperty.cpp
  mitkColorConversions.cpp
  mitkColorProperty.cpp
  mitkColorSequence.cpp
  mitkColorSequenceCycleH.cpp
  mitkColorSequenceHalfTones.cpp
  mitkColorSequenceRainbow.cpp
  mitkCompressedImageContainer.cpp
  mitkCone.cpp
  mitkContour.cpp
  mitkContourSet.cpp
  mitkCuboid.cpp
  mitkCylinder.cpp
  mitkDataStorage/mitkDataStorage.cpp
  mitkDataStorage/mitkDataTreeStorage.cpp
  mitkDataStorage/mitkStandaloneDataStorage.cpp
  mitkDataStorage/mitkNodePredicateAND.cpp
  mitkDataStorage/mitkNodePredicateBase.cpp
  mitkDataStorage/mitkNodePredicateCompositeBase.cpp
  mitkDataStorage/mitkNodePredicateData.cpp
  mitkDataStorage/mitkNodePredicateDataType.cpp
  mitkDataStorage/mitkNodePredicateDimension.cpp
  mitkDataStorage/mitkNodePredicateNOT.cpp
  mitkDataStorage/mitkNodePredicateOR.cpp
  mitkDataStorage/mitkNodePredicateProperty.cpp
  mitkDataStorage/mitkNodePredicateSource.cpp
  mitkDataStorage/mitkNodePredicateFirstLevel.cpp
  mitkDataTree.cpp
  mitkDataTreeFilter.cpp
  mitkDataTreeFilterFunctions.cpp
  mitkDataTreeHelper.cpp
  mitkDataTreeNode.cpp
  mitkDisplayGeometry.cpp
  mitkDrawOperation.cpp
  mitkEllipsoid.cpp
  mitkEnumerationProperty.cpp
  mitkExternAbstractTransformGeometry.cpp
  mitkExtrudedContour.cpp
  mitkFrameOfReferenceUIDManager.cpp
  mitkGeometry2D.cpp
  mitkGeometry2DData.cpp
  mitkGeometry3D.cpp
  mitkGeometryData.cpp
  mitkGridRepresentationProperty.cpp
  mitkGridVolumeMapperProperty.cpp
  mitkGroupTagProperty.cpp
  mitkImage.cpp
  mitkImageDataItem.cpp
  mitkItkBaseDataAdapter.cpp
  mitkLabeledImageLookupTable.cpp
  mitkLandmarkBasedCurvedGeometry.cpp
  mitkLandmarkProjectorBasedCurvedGeometry.cpp
  mitkLandmarkProjector.cpp
  mitkLevelWindow.cpp
  mitkLevelWindowManager.cpp
  mitkLevelWindowPreset.cpp
  mitkLevelWindowProperty.cpp
  mitkLineOperation.cpp
  mitkLookupTable.cpp
  mitkLookupTableProperty.cpp
  mitkMaterialProperty.cpp
  mitkMemoryUtilities.cpp
  mitkMesh.cpp
  mitkModeOperation.cpp
  mitkOperation.cpp
  mitkOrganTypeProperty.cpp
  mitkPicHelper.cpp
  mitkPixelType.cpp
  mitkPlaneGeometry.cpp
  mitkPlaneLandmarkProjector.cpp
  mitkPlaneOperation.cpp
  mitkPlaneDecorationProperty.cpp
  mitkPointData.cpp
  mitkPointOperation.cpp
  mitkPointSet.cpp
  mitkProperties.cpp
  mitkPropertyList.cpp
  mitkPropertyManager.cpp
  mitkPropertyObserver.cpp
  mitkRotationOperation.cpp
  mitkSeedsImage.cpp
  mitkSeedsImageLookupTableSource.cpp
  # mitkShapeModelGeometry3D.cpp
  mitkSlicedData.cpp
  mitkSlicedGeometry3D.cpp
  mitkSmartPointerProperty.cpp
  mitkSphereLandmarkProjector.cpp
  mitkStateTransitionOperation.cpp
  mitkStringProperty.cpp
  mitkSurface.cpp
  mitkThinPlateSplineCurvedGeometry.cpp
  mitkTimeSlicedGeometry.cpp
  mitkTransferFunction.cpp
  mitkUnstructuredGrid.cpp
  # mitkUSLookupTableSource.cpp
  mitkVector.cpp
  # mitkVesselGraphOperation.cpp
  # mitkVesselTreeGeometry3D.cpp
  # mitkVesselTreeLookupTable.cpp
  # mitkVesselTreeOperation.cpp
  mitkVideoSource.cpp
  mitkVtkInterpolationProperty.cpp
  mitkVtkRepresentationProperty.cpp
  mitkVtkResliceInterpolationProperty.cpp
  mitkVtkScalarModeProperty.cpp
  mitkWeakPointerProperty.cpp
  mitkXMLIO.cpp
  mitkSurfaceOperation.cpp
)
