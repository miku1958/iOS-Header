//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKEightPointRectangularPointOfInterestHelper.h>

@interface AKPolygonPointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper
{
}

+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (double)_degreesBetweenPointsForPointsControl;
+ (double)_degreesForPointsControlGivenPolygonWithNumberOfPoints:(unsigned long long)arg1;
+ (struct CGPoint)_pointForPointsControlOfPolygonWithNumberOfPoints:(unsigned long long)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;
+ (unsigned long long)maxPolygonPoints;
+ (unsigned long long)minPolygonPoints;
+ (unsigned long long)numberOfPolygonPointsForControlPoint:(struct CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;
+ (double)pointsControlPointDistanceFactor;

@end

