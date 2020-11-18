//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKAnnotationPointOfInterestHelper : NSObject
{
}

+ (unsigned long long)_concreteDraggableAreaForPoint:(struct CGPoint)arg1 onAnnotation:(id)arg2 withScale:(double)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (Class)_poiHelperClassForAnnotation:(id)arg1;
+ (BOOL)_point:(struct CGPoint)arg1 isInCircleWithRadius:(double)arg2 atPoint:(struct CGPoint)arg3;
+ (BOOL)_point:(struct CGPoint)arg1 isInRectWithSize:(double)arg2 atPoint:(struct CGPoint)arg3;
+ (unsigned long long)draggableAreaForPoint:(struct CGPoint)arg1 onAnnotation:(id)arg2 withScale:(double)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (double)draggableAreaScaleFactorForScaleFactor:(double)arg1;
+ (struct CGPoint)pointForDraggableArea:(unsigned long long)arg1 onAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3;
+ (void)pointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (struct CGPoint)validatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;

@end

