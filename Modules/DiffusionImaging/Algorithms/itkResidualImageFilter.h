/*=========================================================================

Program:   Tensor ToolKit - TTK
Module:    $URL: svn://scm.gforge.inria.fr/svn/ttk/trunk/Algorithms/itkTensorImageToDiffusionImageFilter.h $
Language:  C++
Date:      $Date: 2010-06-07 13:39:13 +0200 (Mo, 07 Jun 2010) $
Version:   $Revision: 68 $

Copyright (c) INRIA 2010. All rights reserved.
See LICENSE.txt for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef _itk_ResidualImageFilter_h_
#define _itk_ResidualImageFilter_h_

#include "itkImageToImageFilter.h"
#include <itkDiffusionTensor3D.h>


namespace itk
{

  template <class TInputScalarType, class TOutputScalarType>
  class ResidualImageFilter
    : public ImageToImageFilter<itk::VectorImage<TInputScalarType,3>, itk::Image<TOutputScalarType,3> >
  {

  public:

    typedef TInputScalarType                          InputScalarType;
    typedef itk::VectorImage<InputScalarType,3>       InputImageType;
    typedef typename InputImageType::PixelType        InputPixelType;
    typedef typename InputImageType::RegionType       InputImageRegionType;

    typedef TOutputScalarType                         OutputScalarType;
    typedef itk::Image<OutputScalarType,3>            OutputImageType;
    typedef typename OutputImageType::PixelType       OutputPixelType;
    typedef typename OutputImageType::RegionType      OutputImageRegionType;

    typedef ResidualImageFilter Self;
    typedef ImageToImageFilter<InputImageType, OutputImageType> Superclass;

    typedef SmartPointer<Self> Pointer;
    typedef SmartPointer<const Self> ConstPointer;

    typedef vnl_vector_fixed< double, 3 >       GradientDirectionType;
    typedef itk::VectorContainer< unsigned int,
      GradientDirectionType >                   GradientDirectionContainerType;


    typedef itk::Image<InputScalarType,3>  BaselineImageType;

    itkTypeMacro (ResidualImageFilter, ImageToImageFilter);

    itkStaticConstMacro (ImageDimension, unsigned int,
      OutputImageType::ImageDimension);

    itkNewMacro (Self);

    void SetSecondDiffusionImage(typename InputImageType::Pointer diffImage)
    {
      m_SecondDiffusionImage = diffImage;
    }


    std::vector<double> GetQ1()
    {
      return m_Q1;
    }

    std::vector<double> GetQ3()
    {
      return m_Q3;
    }

    std::vector<double> GetMeans()
    {
      return m_Means;
    }

    std::vector<double> GetPercentagesOfOutliers()
    {
      return m_PercentagesOfOutliers;
    }

    void SetGradients(GradientDirectionContainerType* grads)
    {
      m_Gradients = grads;
    }

    void SetBaseLineImage(BaselineImageType* baseline)
    {
      m_BaseLineImage = baseline;
    }

    void SetB0Threshold(InputScalarType threshold)
    {
      m_B0Threshold = threshold;
    }

    itkSetMacro(B0Index, int)


  protected:
    ResidualImageFilter()
    {
      m_B0Threshold = 30.0; // default value. allow user to redefine
    };
    ~ResidualImageFilter(){};

    void PrintSelf (std::ostream& os, Indent indent) const
    {
      Superclass::PrintSelf (os, indent);      
    }

  
    void GenerateData();

  private:

    ResidualImageFilter (const Self&);
    void operator=(const Self&);

    typename InputImageType::Pointer m_SecondDiffusionImage;

    std::vector<double> m_Means, m_Q1, m_Q3, m_PercentagesOfOutliers;

    GradientDirectionContainerType* m_Gradients;

    typename BaselineImageType::Pointer m_BaseLineImage;

    InputScalarType m_B0Threshold;

    int m_B0Index;

  };    


} // end of namespace


#ifndef ITK_MANUAL_INSTANTIATION
#include "itkResidualImageFilter.txx"
#endif


#endif
